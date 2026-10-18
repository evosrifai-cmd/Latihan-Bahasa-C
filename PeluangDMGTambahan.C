#include <stdio.h>
#include <stdLib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int DamageCritical, TambahanDamage;
    int Damage = 25;
    int Peluang = (rand() % 8) + 1;

    printf("Angka Peluang yang didapat: %d\n", Peluang);

    if (Peluang > 6){
        DamageCritical = Peluang * 10;
        TambahanDamage = Damage + DamageCritical;
        printf("DamageTerakhir: %d\n", TambahanDamage);
    }
    else{
        TambahanDamage = Damage + Peluang;
        printf("DamageTerakhir: %d\n", TambahanDamage);
    }

    return 0;
}