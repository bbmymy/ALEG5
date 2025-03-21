#include <stdio.h>


void is_power_of_two() {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    printf("%d\n", (n > 0) && !(n & (n - 1)));
}

int main() {
    is_power_of_two();
    return 0;
}
