/*ubsigned를 잘못 사용한 경우*/
#include <stdio.h>

int main(void)
{
    unsigned int a;

    a = 4294967295; //큰 양의 정수 저장
    printf("%d\n", a);
    a = -1;
    printf("%u\n", a);
    return 0;
}
//-1, -4294967295 => 따라서 unsigned 변수는 항상 양수만 저장하고 u로 출력해야함