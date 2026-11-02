#include <stdio.h>
#include <locale.h>

void task() {
    double x, y;

    printf("\n=== ЗАДАЧА 1: Проверка точки ===\n");
    printf("Введите координаты точки x и y через пробел: ");
    scanf("%lf %lf", &x, &y);

    if (y >= 0 && (x * x + y * y <= 36.0) && !(x >= 0 && (x * x + y * y <= 9.0))) {
        printf("Точка (%.2f, %.2f) ПРИНАДЛЕЖИТ заштрихованной области.\n", x, y);
    } else {
        printf("Точка (%.2f, %.2f) НЕ ПРИНАДЛЕЖИТ заштрихованной области.\n", x, y);
    }
}

void task1() {
    double x;

    printf("\n=== ЗАДАЧА 2: Вычисление F(x) ===\n");
    printf("Введите значение x: ");
    scanf("%lf", &x);

    printf("Значение функции F(x) = %.4f\n",
           (x <= 13) ? (-x * x * x + 9.0) : (-3.0 / (x + 1.0)));
}

int main() {
    setlocale(LC_CTYPE, "RUS");

    task();
    task1();

    return 0;
}
