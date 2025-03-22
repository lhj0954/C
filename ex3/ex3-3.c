/*여러가지 정수형 변수*/
#include <stdio.h>

int main(void)
{
    short sh = 32767; //short값의 최댓값 초기화
    int in = 2147483647; //int값의 최댓값 초기화
    long ln = 2147483647; //long형의 최댓값 초기화
    long long lln = 123451234512345; //아주 큰 값 초기화

    printf("short형 변수 출력 : %d\n", sh);
    printf("integer형 변수 출력 : %d\n", in);
    printf("long형 변수 출력 : %d\n", ln);
    printf("long long형 변수 출력 : %d\n", lln);
    return 0;
}

/*
예상 값 -> 틀림;;
-32766 -> 32767
-2147483647 -> 2147483647ㄴ
2147483647
123451234512345
*/
