#include "../thirdparty/ctest.h"
#include "../src/deposit.h"

CTEST(test_number_one, checkdata)
{
    // When
    int result = checkdata (199,39999);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

////*********************************////

CTEST(test_day1_9999sum, checkdata)
{
    
    // When
    int result = checkdata (1,9999);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_negday_sum10001, checkdata)
{
	// When
    int result = checkdata (-1,10001);

	// Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_days366_sum10001, checkdata)
{
	// When
    int result = checkdata (366,10001);

	// Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_day1_sum10000, proffit)
{	
	// When
    int result = proffit (10000,1);

    // Then
    int expected = 9000;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_sum10000days30, proffit)
{
	// When
    int result = proffit (10000,30);

    // Then
    int expected = 9000;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_30days_sum100000, proffit)
{
	// When
    int result = proffit (100000,30);

    // Then
    int expected = 90000;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_31days_sum10000, proffit)
{
	// When
    int result = proffit (10000,31);

    // Then
    int expected = 10200;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_241days_sum10000, proffit)
{
	// When
    int result = proffit (10000,241);

    // Then
    int expected = 11200;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_241days_sum100000, proffit)
{
	// When
    int result = proffit (100000,241);

    // Then
    int expected = 115000;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_241days_sum110000, proffit)
{
	// When
    int result = proffit (110000,365);

    // Then
    int expected = 126500;
    ASSERT_EQUAL(expected, result);
}
