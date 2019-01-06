#include<stdio.h>
int main(void)
{
float pint;
float ounce;
float tablespoons;
float teaspoons;
float cup;
float temp1;
float temp2;

printf("enter the cups : ");
scanf("%f",&cup);

pint = cup/2.0;
ounce = cup * 8.0;
temp1 = ounce;
tablespoons = temp1/2.0;
temp2 = tablespoons;
teaspoons = temp2/3.0;

printf("%1.f\n",pint);
printf("%1.f\n",ounce);
printf("%1.f\n",tablespoons);
printf("%1.f\n",teaspoons); // 1.f는 양의 정수 일의 자리에서 반올림
getchar();
return 0;
}
