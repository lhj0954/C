/*변수의 선언과 사용*/

#include <stdio.h>

int main(void)
{
    int a;
    int b, c;
    double da;
    char ch;

    a = 10;
    b=a;
    c=a+20;
    da=3.5;
    ch = 'A';

    printf("변수 a의 값 : %d\n", a);
    printf("변수 b의 값 : %d\n", b);
    printf("변수 c의 값 : %d\n", c);
    printf("변수 da의 값 : %.1lf\n", da);
    printf("변수 ch의 값 : %c\n", ch);

    return 0;
}

/*
예상 값
10, 10, 30, 3.5, A
*/
