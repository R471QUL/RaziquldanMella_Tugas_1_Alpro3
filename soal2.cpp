// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP

/*
Buat program yang membaca satu karakter menggunakan getchar(), getche(), dan getch(). 
Tampilkan karakter yang dimasukkan setelah setiap input.
*/
#include <stdio.h>
#include <conio.h>   
int main()
{
    char c1, c2, c3;

    printf("Masukkan satu karakter (getchar): ");
    c1 = getchar();
    
    printf("\nKarakter yang dimasukkan: %c\n\n", c1);
    getchar();

    printf("Masukkan satu karakter (getche): ");
    c2 = getche();

    printf("\nKarakter yang dimasukkan: %c\n\n", c2);

    printf("Masukkan satu karakter (getch): ");
    c3 = getch();     

    printf("\nKarakter yang dimasukkan: %c\n", c3);

    return 0;
}
/*1. Program menggunakan library stdio.h untuk fungsi input/output
   seperti printf() dan getchar().

2. Library conio.h digunakan untuk fungsi getch() dan getche().

3. Tiga variabel bertipe char (a, b, c) digunakan untuk menyimpan
   karakter yang dimasukkan oleh pengguna.

4. getchar() membaca satu karakter dari keyboard, tetapi karakter
   tersebut baru diproses setelah pengguna menekan tombol Enter.

5. getche() membaca satu karakter dan langsung menampilkan karakter
   tersebut di layar saat ditekan (echo aktif).

6. getch() membaca satu karakter tanpa menampilkan karakter tersebut
   di layar (echo tidak aktif).

7. Setelah setiap input, program menampilkan kembali karakter yang
   dimasukkan menggunakan printf().
*/
