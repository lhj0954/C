/*
char 배열에 문자열 저장
char 배열명[문자열 길이 + 1] = 문자열;
char fruit[6] = "apple";
*/

#include <stdio.h>

int main(void) {
    char fruit[20] = "strawberry";

    printf("딸기 : %s\n", fruit);
    printf("딸기잼 : %s %s\n", fruit, "jam");

    //fruit = "banana"; => 배열에는 대입 연산자를 사용할 수 없다.

    return 0;
}
//딸기 : strawberry
//딸기잼 : strawberry jam