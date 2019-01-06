#include<stdio.h>
int main(void)
{
 int my_age_year;
 int my_age_date;

 printf("enter the your age\n");
 scanf("%d",&my_age_year);

 my_age_date = my_age_year * 365;

 printf("my_age_year is %d, my_age_date is %d\n", my_age_year, my_age_date);
 getchar();
 return 0;
}
