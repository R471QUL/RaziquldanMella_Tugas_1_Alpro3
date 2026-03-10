// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP

/* 
Buat program yang meminta pengguna memasukkan sebuah kata (terdiri dari minimal 10 karakter), 
lalu tampilkan karakter per karakter menggunakan putchar().
*/
#include <stdio.h>
#include <string.h>

int main() {
    char kata[100];
    int i;

    printf("Masukkan sebuah kata (minimal 10 karakter): ");
    scanf("%s", kata);

    if (strlen(kata) < 10) {
        printf("Kata harus minimal 10 karakter.\n");
    } 
    else {
        printf("Karakter per karakter:\n");
        for (i = 0; kata[i] != '\0'; i++) {
            putchar(kata[i]);
            putchar('\n');
        }
    }

    return 0;
}

/*
Penjelasan Logika Program:

1. Program dimulai dengan mendeklarasikan variabel:
   - kata[100] untuk menyimpan kata yang dimasukkan pengguna.
   - i sebagai variabel perulangan.

2. Program meminta pengguna memasukkan sebuah kata
   menggunakan fungsi scanf().

3. Fungsi strlen() digunakan untuk menghitung jumlah
   karakter dalam kata yang dimasukkan.

4. Jika panjang kata kurang dari 10 karakter,
   program menampilkan pesan bahwa kata harus
   minimal 10 karakter.

5. Jika panjang kata sudah memenuhi syarat,
   program menjalankan perulangan for.

6. Perulangan membaca setiap karakter dalam array
   sampai menemukan karakter akhir string ('\0').

7. Setiap karakter ditampilkan menggunakan fungsi
   putchar(), lalu putchar('\n') digunakan untuk
   memindahkan output ke baris berikutnya sehingga
   karakter tampil satu per satu.

8. Program selesai setelah semua karakter ditampilkan.
*/
