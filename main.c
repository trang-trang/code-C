#include<stdio.h>
int main()
{
    int basic = 12000,Hra = 150, Ta = 120, Other = 450;
    float Da=12*basic/100, Pf=14*basic/100, It=15*basic/100, Net_salary;
    Net_salary = basic + Da + Hra + Ta + Other -(Pf + It);
    printf("\n Net_salary =%f",Net_salary);
    return 0;
}
