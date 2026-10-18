#include <stdio.h>

int main() {
    int TotalSkor = 0;
    int Hit;

    for (Hit = 1; Hit <= 4; Hit++){
        int PointPerHit = 25;
        TotalSkor += PointPerHit;
        printf("Hit ke-%d! Mendapatkan %d point, Total Sementara: %d\n", Hit, PointPerHit,TotalSkor);
    }

    printf("Combo Selesai! Skor Akhir: %d\n", TotalSkor);
    return 0;
}