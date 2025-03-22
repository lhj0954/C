/*char배열에 문자열 복사*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char fruit[20] = "strawberry";
    printf("%s\n", fruit);

    strcpy(fruit, "banana");
    printf("%s\n", fruit);
    
    return 0 ;
}

//문자열을 복사하는 함수 : strcpy-<string.h>