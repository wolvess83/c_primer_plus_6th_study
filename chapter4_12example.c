#include<stdio.h>
int main(void)
{
 int n;

 printf("enter 3 integers:\n")
 scanf("%*d %*d %d",&n);
 printf("마지막으로 입력한 정수는 %d이다.\n",n);

 getchar();
 return 0;
}
