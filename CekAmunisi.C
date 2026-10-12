#include <stdio.h>

int main() {
    float peluru, tembak, Reload_Senjata, Update_Senjata;
    float amunisi = 125;
    
    printf("Sisa Peluru saat ini: ");
    scanf("%f", &peluru);

    if (peluru <= 15) {
        
        Reload_Senjata = amunisi * 0.08;
        Update_Senjata = Reload_Senjata + peluru;
        printf("Peluru Sekarang Adalah: %.0f\n", Update_Senjata);
        printf("Peluru Yang Sudah Ditambahkan Adalah: %.0f\n",  Reload_Senjata);
        printf("Senjata Siap Menembak");
    }

    else {

        Reload_Senjata = amunisi * 0;
        Update_Senjata = Reload_Senjata + peluru;
        printf("Peluru di Senjata masih penuh");
    }
    return 0;
}