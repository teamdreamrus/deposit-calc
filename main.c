#include <stdio.h>


int Proffit(int x,int z);

int main()
{
	int s,t;
	printf("Write sum contribution (>1000):\n");
	scanf("%f \n",s);	
	printf("Write time contribution days (1-365):\n ");
	scanf("%f \n",t);
	if  ((s>=1000) && (t<=365) && (t>0)) 
	   {
	printf("%f",Proffit(s,t));
		}
	else printf("Write true data \n");
	system("pause");
	return 0;
	
}
int Proffit(int x,int z)
{
	int prof; 
	if (z<=30) prof=x*0.9;
	if ((z>30)&&(z<=120)) prof=x*1.02;
	if ((z>120)&&(z<=240)) prof=x*1.06;
	if ((z>240)&&(z<=365)) prof=x*1.12;
    return prof;
}
