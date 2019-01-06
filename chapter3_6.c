#include<stdio.h>
#define quat_gram 950
int main(void)
{

 float quat;
 float gram;
 int num;

 printf("water quat? : ");
 scanf("%f",&quat);

gram = quat * quat_gram;
num = gram/3.0e-23;

printf("water number is %d",num);
getchar();
return 0;

}
