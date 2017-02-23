#include <stdio.h>


int Proffit(int s,int t);

int main()
{
	int s,t;
	printf("Write sum contribution (>1000):\n");
	scanf("%f \n",s);	
	printf("Write time contribution days (1-365):\n ");
	scanf("%f \n",t);
	if  ((s>=1000) && (t<=365) && (t>0)) {
	printf("",Proffit(s,t));
		
		}
	else printf("Write true data \n");
	return 0;
	
}
int Proffit(int s,int t){
	int prof; 
	if (t<=30) prof=s*0.9;
	if ((t>30)&&(t<=120)) prof=s*1.02;
	if ((t>120)&&(t<=240)) prof=s*1.06;
	if ((t>240)&&(t<=365)) prof=s*1.12;
return prof;
}
