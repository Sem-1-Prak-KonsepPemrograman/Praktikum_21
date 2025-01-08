#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fungsi untuk menyalin string dari kar ke kar2
void cpystr(char *kar, char *kar2);

// Fungsi untuk menghitung jumlah karakter dalam string
int karakter(char kar[]);

int main()
{
    // Menampilkan header untuk percobaan
    printf("Percobaan 4\n---------------------------------------------------------------------------------\n\n");

    // Deklarasi variabel untuk menampung dua string
    char kar[100], kar2[100];
    int jum = 0;

    // Mengambil input berupa string dengan fgets untuk memasukkan karakter termasuk spasi
    printf("Input berbagai karakter dicopy: ");
    fgets(kar, sizeof kar, stdin);

    // Menyalin string dari kar ke kar2
    cpystr(kar, kar2);

    return 0;
}

// Fungsi untuk menyalin string dari kar ke kar2
void cpystr(char *kar, char *kar2){
    // Menyalin setiap karakter dari kar ke kar2 hingga mencapai panjang string
    for(int i = 0; i < karakter(kar); i++){
        kar2[i] = kar[i];
    }
    // Menampilkan hasil salinan string
    printf("Hasil copy-an: %s", kar2);
}

// Fungsi untuk menghitung jumlah karakter dalam string
int karakter(char kar[]){
    int i = 0;
    // Menghitung jumlah karakter dalam string hingga bertemu dengan null character '\0'
    for(i = 0; kar[i] != '\0'; i++){
    }
    // Mengembalikan jumlah karakter
    return i;
}
