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

    printf("¬ведите первое число: ");
    scanf("%lf", &num1);

    printf("¬ведите оператор (+, -, *, /, ^): ");
    scanf(" %c", &operator);

    printf("¬ведите второе число: ");
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
            printf("ќшибка: делить на нуль нельз€.\n");
        }
        result = num1 / num2;
    }
    if (operator == '^') {
        result = pow(num1, num2);
    }
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}