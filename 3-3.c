#include <stdio.h>

int main(void){
    int num1;
    int result;

    printf("정수를 입력하시오: \n");
    scanf("%d ", &num1);

    result = num1*num1;
    printf("%d ^2 = %d", num1, result);
}
