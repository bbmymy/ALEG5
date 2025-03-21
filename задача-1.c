#include <stdio.h>

void temperature_converter() {
    float celsius, fahrenheit;
    printf("Введите температуру в градусах Цельсия: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("C = %.2f ; F = %.2f\n", celsius, fahrenheit);
}

int main() {
    temperature_converter();
    return 0;
}
