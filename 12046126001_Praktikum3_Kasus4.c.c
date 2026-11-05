/*
 * Program      : Sistem Tarif Parkir Mall
 * Nama         : Fahra Fauziah
 * NIM          : 12046126001
 * Deskripsi    : switch-case (char) + nested if untuk denda
 */
#include <stdio.h>

int main() {
    char jenis;
    int lama;
    int tarif;

    printf("=== SISTEM PARKIR MALL SI ===\n");
    printf("Jenis Kendaraan (M=Motor, A=Mobil): ");
    scanf(" %c", &jenis);

    printf("Lama Parkir (jam)                 : ");
    scanf("%d", &lama);

    switch (jenis) {
        case 'M':
        case 'm':
            tarif = lama * 2000;
            if (lama > 5) {
                tarif = tarif + 10000;
                printf("Anda kena denda Rp. 10.000 (parkir > 5 jam)\n");
            }
            printf("Total Tarif Motor   : Rp %d\n", tarif);
            break;

        case 'A':
        case 'a':
            tarif = lama * 4000;
            if (lama > 5) {
                tarif = tarif + 15000;
                printf("\nAnda kena denda Rp. 15.000\n(parkir > 5 jam)\n\n");
            }
            printf("Total Tarif Mobil   : Rp %d\n", tarif);
            break;
        
        default :
            printf("ERROR: Jenis Kendaraan tidak valid!\n");
            printf("Gunakan huruf M atau A saja.\n");
    }

    printf("\n=================================\n");
    printf("          Terima Kasih!           \n");
    printf("=================================\n");

    return 0;
}