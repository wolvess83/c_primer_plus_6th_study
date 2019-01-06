#include<stdio.h>
#include<string.h>
# define PRAISE "DEEP LEARNING"
int main(void)
{
 char name[40];
 printf("what's your name:\n");
 scanf("%s",&name);

 printf("hello MR. %s %s\n", name, PRAISE);
 printf("the number of your name is %d, memory is %d\n",strlen(name), sizeof name);
 printf("DEEP LEARNING IS NUMBER %d, memory is %d\n", strlen(PRAISE), sizeof PRAISE);
 getchar();
 return 0;

}
