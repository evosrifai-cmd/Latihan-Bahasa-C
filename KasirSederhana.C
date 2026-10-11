#include <stdio.h>

int main() {
    float harga_belanjaan, diskon, harga_final;

    printf("Masukkan jumlah harga belanjaan yang ingin dibayar: ");
    scanf("%f" , &harga_belanjaan);

    if (harga_belanjaan >= 100000) {

        diskon = harga_belanjaan * 0.2;
        harga_final = harga_belanjaan - diskon;
    }

    else if (harga_belanjaan >= 50000) {

        diskon = harga_belanjaan * 0.1;
        harga_final = harga_belanjaan - diskon;
    }

    else {

        diskon = harga_belanjaan * 0;
        harga_final = harga_belanjaan - diskon;
    }


    printf("Maka harga yang harus dibayar adalah Rp. %.0f", harga_final);

    return 0;
}