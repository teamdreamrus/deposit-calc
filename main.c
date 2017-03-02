#include <stdio.h>

float proffit(int x,int z);

int main()
{
    int t,s;

    printf("enter time to deposit: \n");
    scanf("%i",&t);
    printf("enter sum to deposit: \n");
    scanf("%i",&s);
    if ((t <= 0) || (t > 365) || (s<10000))
    printf("enter correct data! \n");
    else
	{
		printf("sum at the end of: ");
        printf("%.0f",proffit(s,t));
    }
    return 0;
}

float proffit(int x,int z){
	float cashback=x;
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
