#include <stdio.h>

int main(void) {

    printf("Write a number:\n");
    float num1;
    float num2;
    char operation;
    scanf("%f", &num1);
    printf("Write a second number:\n");
    scanf("%f", &num2);
    printf("Write a operation (+, -, *, /) \n");
    scanf(" %c", &operation);
    switch (operation) {
        case '+':
            printf("%f", num1 + num2);
            break;
        case '-':
            printf("%f", num1 - num2);
            break;
        case '*':
            printf("%f", num1 * num2);
            break;
        case '/':
            printf("%f", num1 / num2);
            break;
        default:
            fprintf(stderr, "Chyba");
    }
}
