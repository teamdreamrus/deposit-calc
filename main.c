#include <stdio.h>


int Proffit(int s,int t);

int main()
{
	int s,t;
	printf("Write sum contribution (>1000):\n");
	scanf("%f \n",s);	
	printf("Write time contribution days (1-365):\n ");
	scanf("%f \n",t);
	if  ((s>=1000) && (t<=365) &&(t>0)) {
		Proffit(s,t);
		
		}
	else printf("Write true data \n");
	return 0;
	
}
int Proffit(int s,int t){
	int prof; 
	switch(t)
	{
		case 0..30: prof=s*0.9;
		case 31..120: prof=s*1.02;
		case 121..240: prof=s*1.06;
		case 241..365: prof=s*1.12;
		break;
	}
}
