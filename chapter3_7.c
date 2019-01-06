#include<stdio.h>
int main(void)
{
 float parameter = 2.54;
 float tall_centi;
 float tall_inch;
 printf("enter the inch : ");
 scanf("%f",&tall_inch);

 tall_centi = tall_inch * parameter;

 printf("%f",tall_centi);
 getchar();
 return 0;
}
