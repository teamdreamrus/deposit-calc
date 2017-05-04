#include <stdio.h>

int main()
{
    int time, summ;

    printf("enter time to deposit: \n");
    scanf("%i", &time);
    printf("enter sum to deposit: \n");
    scanf("%i", &summ);
    if (checkdata(time, summ)==0)
        printf("enter correct data! \n");
    else {
        printf("sum at the end of: ");
        printf("%.0f \n", proffit(summ, time));
        printf("proffit of deposit: ");
        printf("%.0f \n", proffit(summ, time) - summ);
    }
    return 0;
}


