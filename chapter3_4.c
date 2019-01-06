#include<stdio.h>
int main (void){
float num;
printf("enter the number : ");
scanf("%f",&num);

printf("fixed_point notation is %.5f\n",num);
printf("exponential notation is %e\n",num);
printf("p notation is %a\n",num);
getchar();
return 0;

}
