#include <stdio.h>

void tinhTong(int *a, int *b, int *result);

int main() {
    int x = 10, y = 70;
    int result;
    tinhTong(&x, &y, &result);
    printf("Tong cua %d + %d la: %d\n", x, y, result);
    return 0;
}

void tinhTong(int *a, int *b, int *result) {
    *result = *a + *b;
}

