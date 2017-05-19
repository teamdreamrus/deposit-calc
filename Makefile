CFLAGS = -Wall -Werror -MP -MMD
.PHONY: clean all deposit-calc test

all :
	make bin/deposit-calc test

bin/deposit-calc : build/main.o build/deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit-calc $(CFLAGS)

build/main.o : src/main.c src/deposit.h
	gcc -c src/main.c -o build/main.o $(CFLAGS)

build/deposit.o : src/deposit.c src/deposit.h
	gcc -c src/deposit.c -o build/deposit.o $(CFLAGS)
	
test :
	bin/deposit-calc

bin/deposit-calc-test : build/test/main.o build/test/deposit_test.o
	@echo "Making binary"
	@gcc build/test/main.o build/test/deposit_test.o build/test/deposit.o -o bin/deposit-calc-test $(CFLAGS)

build/test/main.o : src/deposit.h test/main.c
	@echo "Making main.o"
	@gcc -I thirdparty -c test/main.c -o build/test/main.o $(CFLAGS)
	@gcc -c src/deposit.c -o build/test/deposit.o $(CFLAGS) 

build/test/deposit_test.o : src/deposit.h test/deposit_test.c
	@echo "Making deposit_test.o"
	@gcc -c -I thirdparty test/deposit_test.c -o build/test/deposit_test.o $(CFLAGS)

build/test/deposit.o : src/deposit.h src/deposit.c
	@echo "Making deposit.o"
	@gcc -c src/deposit.c -o build/test/deposit.o $(CFLAGS)
	
clean :
	@echo "Cleaning files in build directory"
	@rm -rf build/*.d build/test/*.d 
	@rm -rf build/*.o build/test/*.o
	@echo "Cleaning binaries"
	@rm -f bin/deposit-calc bin/deposit-calc-test
	@echo "All files have been cleaned."
	
-include build/*.d
