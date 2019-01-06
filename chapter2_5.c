#include<stdio.h>
void br();
void ic();

int main(void)
{
 br();
 printf(", ");
 ic();
 printf("\n");
 ic();
 printf("\n");
 br();

 getchar();
 return 0;


}

void br()
{
  printf("Brazil, Russia");
}

void ic()
{
  printf("Inidia, China");
}
