#include<stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
 short num = PAGES;
 short mnum = -PAGES;
 printf("short type, unsigned short type num : %hd %hu\n",num, num);
 printf("short type, unsigned short type -num : %hd %hu\n",mnum, mnum);
 printf("int type, char type num : %d %c\n",num, num);
 printf("int type, short type, char type Words : %d %hd %c\n",WORDS, WORDS, WORDS);
 getchar();
 return 0;

}
