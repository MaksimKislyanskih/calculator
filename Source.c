#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    char operator;
    double num1, num2, result;

    printf("������� ������ �����: ");
    scanf("%lf", &num1);

    printf("������� �������� (+, -, *, /, ^): ");
    scanf(" %c", &operator);

    printf("������� ������ �����: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        result = num1 + num2;
    }
   if (operator == '-') {
        result = num1 - num2;
    }
    if (operator == '*') {
        result = num1 * num2;
    }
    if (operator == '/') {
        if (num2 == 0) {
            printf("������: ������ �� ���� ������.\n");
        }
        result = num1 / num2;
    }
    if (operator == '^') {
        result = pow(num1, num2);
    }
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}