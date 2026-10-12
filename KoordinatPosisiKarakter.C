#include <stdio.h>

int main () {
    printf("Karaker ini bernama Tono\n");
    
    int PosX = 4;
    int PosY = 5;

    printf("Posisi awal Tono: (X:%d , Y:%d)\n", PosX, PosY);

    PosX += 6;
    PosY += 7;

    printf("Posisi akhir Tono bergerak: (X:%d , Y:%d)\n", PosX, PosY);
    

    return 0;
}