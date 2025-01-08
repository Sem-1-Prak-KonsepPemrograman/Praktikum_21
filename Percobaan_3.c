#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk menghitung jumlah karakter dalam string, mengabaikan newline '\n'
int karakter(char kar[]);

// Fungsi untuk membalikkan string
void balikstr(char kar[], int jumlah);

int main()
{
    // Menampilkan header untuk percobaan
    printf("Percobaan 2\n---------------------------------------------------------------------------------\n\n");

    // Deklarasi variabel untuk menampung input berupa karakter
    char kar[100];
    int jumlah = 0;

    // Mengambil input berupa string (termasuk spasi) menggunakan fgets
    printf("Input berbagai karakter untuk dihitung panjangnya: ");
    fgets(kar, sizeof kar, stdin); // Membaca input dari stdin, hingga maksimal 99 karakter atau enter

    // Menampilkan jumlah karakter yang dihitung
    jumlah = karakter(kar);
    printf("Jumlah karakternya adalah %d\n", jumlah);

    // Membalikkan string
    balikstr(kar, jumlah);

    // Menampilkan string setelah dibalik
    printf("String setelah dibalik: %s", kar);

    return 0;
}

// Fungsi untuk menghitung jumlah karakter dalam string hingga bertemu dengan newline '\n'
int karakter(char kar[]){
    int jumlah = 0;
    
    // Menghitung jumlah karakter sampai ditemukan newline '\n' yang dipicu oleh 'Enter' dari fgets
    for(jumlah = 0; kar[jumlah] != '\n'; jumlah++){
    }
    
    // Mengembalikan jumlah karakter yang dihitung
    return jumlah;
}

// Fungsi untuk membalikkan string
void balikstr(char kar[], int jumlah){
    // Loop untuk membalikkan string
    for(int i = 0; i < jumlah / 2; i++){
        char temp = kar[i];
        kar[i] = kar[jumlah - i - 1];
        kar[jumlah - i - 1] = temp;
    }
}
