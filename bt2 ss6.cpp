#include <stdio.h>

int main() {
    int num, sum_odd = 0;

    // Yêu c?u ngu?i dùng nh?p vào 5 s? nguyên
    for (int i = 0; i < 5; i++) {
        printf("Nh?p s? th? %d: ", i + 1);
        scanf("%d", &num);  // Nh?p s? nguyên t? ngu?i dùng

        // Ki?m tra n?u s? là l?
        if (num % 2 != 0) {
            sum_odd += num;  // C?ng s? l? vào t?ng
        }
    }

    // In k?t qu? t?ng các s? l?
    printf("T?ng các s? l? là: %d\n", sum_odd);

    return 0;
}
