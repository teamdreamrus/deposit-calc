#include <stdio.h>

int proffit(int x,int z);

int main()
{
    int s,t;
    printf("enter time to deposit: \n");
    scanf("%i",&t);
    printf("enter sum to deposit: \n");
    scanf("%i",&s);
    if ((t <= 0) || (t > 365) || (s<10000))
    printf("enter correct data! \n");
    else
	{
        printf("so good \n");
    }
    return 0;
}

int proffit(int x,int z){
	int cashback=x;
	if(x<100000)
	{
	    if ((z > 0) && (z <= 30)) 
        cashback*=0.9;
        if ((z > 30) && (z <= 120)) 
        cashback*=1.02;
        if ((z > 120) && (z <= 240)) 
        cashback*=1.06;
         if ((z > 240) && (z <= 365)) 
        cashback*=1.12;
    }
	else
	{
		if ((z > 0) && (z <= 30)) 
        cashback*=0.9;
        if ((z > 30) && (z <= 120)) 
        cashback*=1.03;
        if ((z > 120) && (z <= 240)) 
        cashback*=1.08;
         if ((z > 240) && (z <= 365)) 
        cashback*=1.15;
	}
return cashback;
}
