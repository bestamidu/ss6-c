#include <stdio.h>

int main() {
    int num, sum_odd = 0;

    // Y�u c?u ngu?i d�ng nh?p v�o 5 s? nguy�n
    for (int i = 0; i < 5; i++) {
        printf("Nh?p s? th? %d: ", i + 1);
        scanf("%d", &num);  // Nh?p s? nguy�n t? ngu?i d�ng

        // Ki?m tra n?u s? l� l?
        if (num % 2 != 0) {
            sum_odd += num;  // C?ng s? l? v�o t?ng
        }
    }

    // In k?t qu? t?ng c�c s? l?
    printf("T?ng c�c s? l? l�: %d\n", sum_odd);

    return 0;
}
