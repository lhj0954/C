/*char형 변수의 사용*/

#include <stdio.h>

int main(void)
{
    char ch1 = 'A';
    char ch2 = 65;

    printf("문자 %c의 아스키 코드 값 : %d \n", ch1, ch2);
    printf("아스키코드 %d의 문자 값 : %c \n", ch2, ch1);
    return 0;
}
