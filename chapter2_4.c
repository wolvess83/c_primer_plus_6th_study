#include<stdio.h>
void jolly();
void deny();

int main(void)
{
printf("For he's a ");
jolly();
printf("fellow! \n");
printf("For he's a ");
jolly();
printf("fellow! \n");
printf("For he's a ");
jolly();
printf("fellow! \n");
deny();

getchar();
return 0;
}

void jolly()
{
  printf("jolly good ");
}

void deny()
{
 printf("which nobody can deny!\n");
}
