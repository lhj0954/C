/*유효숫자 확인*/
#include <stdio.h>

int main(void)
{
    float ft = 1.234567890123456789; //유효숫자가 많은 값으로 초기화
    double db = 1.234567890123456789;

    printf("float의 유효숫자 : %.20f\n", ft);
    printf("double의 유효숫자 : %.20lf\n", db);

    return 0;
}
/*
float의 유효숫자 : 1.23456788063049316406
double의 유효숫자 : 1.23456789012345669043
*/