#include <stdio.h>


int Proffit(int s,int t);

int main()
{
	int s,t;
	printf("Введите сумму вклада (>1000):\n");
	scanf("Сумма: %f \n",s);	
	printf("ВВедите срок вклада (0-365):\n ");
	scanf("Срок: %f \n",t);
	if  (s>=1000) && (t<=365) {
		Proffit(s,t);
		
		}
	else printf("ВВедите корректные данные! \n");
	return 0;
	
}
int Proffit(int s,int t){
	int prof; //доход
	switch(t)
	{
		case 0..30: prof=s*0.9;
		case 31..120: prof=s*1.02;
		case 121..240: prof=s*1.06;
		case 241..365: prof=s*1.12;
		break;
	}
}
