#include<stdio.h>
int main(void)
{
int i1 = 2147483647;
int i2 = -214783648;
float f1 = 3.4e+39;
float f2 = -3.4e+39;
printf("%d\n",i1+1);
printf("%d\n",i2-1);
printf("%f\n",f1);
printf("%f\n",f2);
getchar();
return 0;
}
