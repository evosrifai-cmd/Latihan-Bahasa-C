#include <stdio.h>

int main() {
    float sisi, luas;

    printf("Masukkan sebuah sisi persegi: ");
    scanf("%f", &sisi);

    luas = sisi * sisi;

    printf("Maka luas dari sebuah bangun persegi adalah: %.1f cm^2" , luas);

    return 0;
}