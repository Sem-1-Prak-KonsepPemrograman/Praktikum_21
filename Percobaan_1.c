#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Menampilkan header untuk percobaan
    printf("Percobaan 1\n---------------------------------------------------------------------------------\n\n");

    // Deklarasi variabel untuk menampung input berupa kata atau kalimat
    char n[30];

    // Menggunakan scanf untuk mengambil input kata (hanya sampai spasi pertama)
    printf("Input suatu kata atau kalimat (program menggunakan scanf): ");
    scanf("%s", n); // Mengambil input satu kata, berhenti di spasi pertama
    printf("%s\n\n", n); // Menampilkan kata yang dimasukkan

    // Menggunakan fflush(stdin) untuk membersihkan buffer input (tidak direkomendasikan di banyak kompiler)
    fflush(stdin);

    // Menggunakan gets untuk mengambil input (sekarang tidak direkomendasikan karena masalah keamanan)
    printf("Input suatu kata atau kalimat (program menggunakan gets): ");
    gets(n); // Dapat menerima kalimat dengan spasi, tetapi rawan menyebabkan buffer overflow
    printf("%s\n\n", n); // Menampilkan kalimat yang dimasukkan

    // Menggunakan fgets untuk mengambil input (lebih aman dibandingkan gets)
    printf("Input suatu kata atau kalimat (program menggunakan fgets): ");
    fgets(n, sizeof(n), stdin); // Mengambil input dengan batasan panjang, dapat menerima kalimat dengan spasi
    printf("%s\n\n", n); // Menampilkan kalimat yang dimasukkan

    return 0;
}
