#include<stdio.h>
int main(void)
{
float year_age;
float seconds_age;
printf("your age is : ");
scanf("%f",&year_age);

seconds_age = year_age * 3.156e7;

printf("your seconds age is %f",seconds_age);
getchar();
return 0;
}
