#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk menghitung jumlah karakter dalam string, mengabaikan newline '\n'
int karakter(char kar[]);

int main()
{
    // Menampilkan header untuk percobaan
    printf("Percobaan 2\n---------------------------------------------------------------------------------\n\n");

    // Deklarasi variabel untuk menampung input berupa karakter
    char kar[100];

    // Mengambil input berupa string (termasuk spasi) menggunakan fgets
    printf("Input berbagai karakter untuk dihitung panjangnya: ");
    fgets(kar, sizeof kar, stdin); // Membaca input dari stdin, hingga maksimal 99 karakter atau enter

    // Menampilkan hasil perhitungan jumlah karakter
    printf("Jumlah karakternya adalah %d", karakter(kar));

    return 0;
}

// Fungsi untuk menghitung jumlah karakter dalam string hingga bertemu dengan newline '\n'
int karakter(char kar[]){
    int i = 0;
    
    // Menghitung jumlah karakter sampai ditemukan newline '\n' yang dipicu oleh 'Enter' dari fgets
    for(i = 0; kar[i] != '\n'; i++){
    }
    
    // Mengembalikan jumlah karakter yang dihitung
    return i;
}
