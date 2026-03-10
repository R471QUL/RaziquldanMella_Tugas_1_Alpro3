// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP

/*
Buat program yang membaca satu karakter menggunakan getchar(), getche(), dan getch(). 
Tampilkan karakter yang dimasukkan setelah setiap input.
*/
#include <stdio.h>
#include <conio.h>   // diperlukan untuk getch() dan getche()

int main()
{
    char c1, c2, c3;

    // ================================
    // Input menggunakan getchar()
    // getchar() membaca satu karakter dari keyboard
    // Karakter yang diketik akan terlihat di layar
    // ================================
    printf("Masukkan satu karakter (getchar): ");
    c1 = getchar();   // membaca satu karakter

    // menampilkan karakter yang dimasukkan
    printf("\nKarakter yang dimasukkan: %c\n\n", c1);


    // Membersihkan buffer newline dari input sebelumnya
    getchar();


    // ================================
    // Input menggunakan getche()
    // getche() membaca satu karakter dan langsung menampilkannya
    // di layar (echo aktif)
    // ================================
    printf("Masukkan satu karakter (getche): ");
    c2 = getche();    // membaca karakter dan menampilkannya

    // menampilkan kembali karakter yang dimasukkan
    printf("\nKarakter yang dimasukkan: %c\n\n", c2);


    // ================================
    // Input menggunakan getch()
    // getch() membaca satu karakter tanpa menampilkannya
    // di layar saat diketik
    // ================================
    printf("Masukkan satu karakter (getch): ");
    c3 = getch();     // membaca karakter tanpa echo

    // menampilkan karakter setelah input selesai
    printf("\nKarakter yang dimasukkan: %c\n", c3);

    return 0;
}
