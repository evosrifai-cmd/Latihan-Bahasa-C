#include <stdio.h>
#include <string.h>

int main () {
    float hp = 100;
    char musuh[50];
    float damage, terkena_damage, damage_terakhir,hp_player;

    printf("  =======HP HERO SAAT INI=======\n  ");
    printf("    HP PEMAIN SAAT INI:  %d\n  ", hp);

    printf("Masukkan musuh yang dilawan: ");
    scanf("%49s", musuh);

    printf("  Masukkan damage yang diberikan: ");
    scanf("%f", &damage);

    if (strcmp(musuh, "boss") == 0) {
        printf("========== Hati-hati Lawan boss ==========\n");
        
        terkena_damage = damage * 0.2;
        
        damage_terakhir = damage + terkena_damage;

        hp_player = hp - damage_terakhir;
    }

    else if (strcmp(musuh, "hero") == 0) {
        printf("=Melawan Hero dari player masing-masing=\n");

        terkena_damage = damage * 0.1;

        damage_terakhir = damage + terkena_damage;
        
        hp_player = hp - damage_terakhir;
    }

    else {
        printf("========== Melawan musuh biasa ==========\n");

        terkena_damage = 0;

        damage_terakhir = damage + terkena_damage;

        hp_player = hp - damage_terakhir;
    }

    printf("Damage yang diberikan musuh ke player: %.0f\n", damage_terakhir);
    printf("HP awal player: %.0f\n", hp);
    printf("HP palyer tersisa: %.0f\n", hp_player);

    return 0;
}