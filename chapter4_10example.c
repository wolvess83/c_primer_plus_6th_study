#include<stdio.h>
int main(void)
{
int rv;
rv = printf("string number is 20\n");//printf 함수의 리턴값은 출력하는 문자열의 길이이다.
printf("%d",rv);
getchar();
return 0;
}
