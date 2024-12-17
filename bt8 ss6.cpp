#include <stdio.h>
#include <math.h>

int main() {
    float soTienGui, laiSuatThang, soThangGui, tienLai, tienNhanDuoc;

    // Nhập thông tin từ người dùng
    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &soTienGui);

    printf("Nhap lai suat hang thang (%): ");
    scanf("%f", &laiSuatThang);

    printf("Nhap so thang gui: ");
    scanf("%f", &soThangGui);
tienNhanDuoc= soTienGui* ( 1+ laiSuatThang /12) ^ (12 *soThangGui );
tienLai=tienNhanDuoc-soTienGui;
    printf("So tien lai sau %.0f thang la: %.2f dong\n", soThangGui, tienLai);
    printf("So tien nhan duoc tong cong la: %.2f dong\n", tienNhanDuoc);
    return 0;
}