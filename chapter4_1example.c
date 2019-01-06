#include<stdio.h>
#include<string.h>
#define DENSITY 62.4

int main(void)
{
  float weight, volume;
  int size, letters;

  char name[40];
  printf("what's your name?:\n");
  scanf("%s",&name);

  printf("MR. %s, what's your weight?\n");
  scanf("%f",&weight);

  size = sizeof name;
  letters = strlen(name);
  volume = weight/DENSITY;

  printf("MR. %s 's volume is %2.2f\n ", name, volume);
  printf("your name's number is  %d\n ", letters);
  printf("data size is %d\n",size);
  getchar();
  return 0;
  }
