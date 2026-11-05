/*
 * Program      : Kalkulator Konversi Nilai Mahasiswa
 * Nama         : Fahra Fauziah
 * NIM          : 12046126001
 * Deskripsi    : else-if untuk grade dan predikat kelulusan 
 */
#include <stdio.h>

int main() {
    long nim;
    float nilai;
    char grade;
    char predikat[15];
    char status[15];

    printf("=== KONVERSI NILAI MAHASISWA SI ===\n");
    printf("Masukkan NIM                : ");
    scanf("%ld", &nim);

    printf("Masukkan Nilai Akhir (0-100): ");
    scanf("%f", &nilai);

    // Validasi rentang input
    if (nilai<0 || nilai > 100) {
        printf("\nERROR : Nilai harus di antara 0 - 100!\n");
        return 1;
    }

    // Klasifikasi grade
    if (nilai >= 85) {
        grade = 'A';
        sprintf(predikat, "Sangat Baik");
        sprintf(status, "LULUS");
    } else if (nilai >= 75) {
        grade = 'B';
        sprintf(predikat, "Baik");
        sprintf(status, "LULUS");
    } else if (nilai >= 65) {
        grade = 'C';
        sprintf(predikat, "Cukup");
        sprintf(status, "LULUS");
    } else if (nilai >= 50) {
        grade = 'D';
        sprintf(predikat, "Kurang");
        sprintf(status, "TIDAK LULUS");
    } else {
        grade = 'E';
        sprintf(predikat, "Sangat Kurang");
        sprintf(status, "TIDAK LULUS");
    }

    printf("\n===================================\n");
    printf("       KARTU HASIL STUDI (KHS)       \n");
    printf("===================================\n");
    
    printf("NIM      : %ld\n", nim);
    printf("Nilai    : %2.f\n", nilai);
    printf("Grade    : %c\n", grade);
    printf("Predikat : %s\n", predikat);
    printf("Status   : %s\n", status);
    printf("===================================\n");

    return 0;
}