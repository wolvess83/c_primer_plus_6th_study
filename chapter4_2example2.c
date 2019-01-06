#include<stdio.h>
#define PRAISE "YOU ARE AN EXTRAORDINARY BEING."
int main(void)
{
 char name[40];
 printf("what's your name\n");
 scanf("%s",&name); // 만약에 정 형원 이렇게 하면 출력이 정만 출력된다 !!

 printf("hello %s %s", name, PRAISE);
 getchar();
 return 0;

}
