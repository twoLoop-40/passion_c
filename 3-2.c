#include <stdio.h>

int main(void){
    int num1, num2, num3;
    int result;

    printf("세 수를 차례대로 입력하시오.\n");
    scanf("%d \n", &num1);
    scanf("%d \n", &num2);
    scanf("%d \n", &num3);

    result = num1*num2+num3;

    printf("%d X %d + %d = %d", num1, num2, num3, result);
    return 0;

}