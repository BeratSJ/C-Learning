#include <stdio.h>

int main() {
    int firstNumber, secondNumber, result;
    char operation;
    printf("Enter First Number:");
    scanf("%d", &firstNumber);
    printf("Enter Second Number:");
    scanf("%d", &secondNumber);
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        result = firstNumber + secondNumber;
        printf("Result: %d\n", result);
        break;
    break;
    case '-':
    result = firstNumber - secondNumber;
    printf("Result: &d \n", result);
        break;
    case '*':
        result = firstNumber * secondNumber;
        printf("Result: %d\n", result);
        break;
    case '/':
        if (secondNumber != 0) {
            result = firstNumber / secondNumber;
            printf("Result: %d\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        break;
    }

}