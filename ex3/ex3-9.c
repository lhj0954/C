/* scanf 함수를 사용한 키보드 입력*/

#include <stdio.h>

int main(void)  {
    
    int a;
    printf("a의 값을 입려하세요.\n");
    scanf("%d", &a);

    printf("a의 값 : %d\n", a);
    
    return 0;
}