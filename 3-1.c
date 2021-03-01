#include <stdio.h>

int main(void){
    int sub, mul;
    int n1, n2;

    printf("Input two integers: ");
    scanf("%d %d", &n1, &n2);

    sub = n1-n2;
    mul = n1*n2;

    printf("subtracion: %d\n", sub);
    printf("multiplcation: %d\n", mul);

    return 0;

}
