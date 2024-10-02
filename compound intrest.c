//calculating the compound intrest
/* calculating compound interest
name: Purity Thuo
date:24/9/24
*/
#include<stdio.h>
int main(){
double principle, time, rate;
int years,frequency_compounded;
printf("enter principal  (P):");
scanf("%lf"& principle );
printf("enter the duration(T):");
scanf("%lf"&time);
printf("enter the intrest rate (in percenage):");
scanf("%lf"&rate);
printf("enter the frequency compounded (n):");
scanf("%d"&frequency_compounded);

rate/=100
amount={principle*(1+rate)^(n*T)}
printf("the amount after %d years is:%lf",year,rate)

return 0
}
