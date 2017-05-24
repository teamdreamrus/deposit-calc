#include "deposit.h"

float proffit(int summ, int time)
{
    float cashback = summ;
    if (summ < 100000) {
        if ((time > 0) && (time <= 30))
            cashback *= 0.9;
        if ((time > 30) && (time <= 120))
            cashback *= 1.02;
        if ((time > 120) && (time <= 240))
            cashback *= 1.06;
        if ((time > 240) && (time <= 365))
            cashback *= 1.12;
    } else {
        if ((time > 0) && (time <= 30))
            cashback *= 0.9;
        if ((time > 30) && (time <= 120))
            cashback *= 1.03;
        if ((time > 120) && (time <= 240))
            cashback *= 1.08;
        if ((time > 240) && (time <= 365))
            cashback *= 1.15;
    }
    return cashback;
}

int checkdata(int time, int summ){
    if ((time <= 0) || (time > 365) || (summ < 10000))
        return 1;
else return 0;
}
