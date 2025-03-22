/*const를 사용한 변수*/

#include <stdio.h>

int main(void) {
    int income = 0;
    double tax;
    const double tax_rate = 0.12;

    income = 456;
    tax = income * tax_rate;
    printf("세금은 : %.1lf입니다.\n", tax);
    
    return 0;
}

//const는 반드시 선언과 동시에 초기화가 되어야함 아니면 쓰레기 값이 계속해서 메모리에서 사용됨
//const를 사용하면 상수처럼 이용할 수 있지만 변수의 특성을 가지는 엄연한 변수이다.