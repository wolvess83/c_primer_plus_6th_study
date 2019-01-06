#include<stdio.h>
#define PAGES 959
int main(void)
{
 printf("*%d*\n", PAGES);
 printf("*%2d*\n", PAGES);//변경자 앞에 숫자는 데이터의 크기
 printf("*%4d*\n", PAGES);//숫자 앞에 +는 오른쪽 정렬
 printf("*%-4d*\n", PAGES);//숫자 앞에 +는 왼쪽 정렬

}
