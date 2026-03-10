// Soal ini dijawab menggunakan bahasa CPP

/*
    Buatlah program yang menerima input satu bilangan bulat (detik) 
    dan menampilkan output dalam format: X detik = H jam M menit S detik
*/
#include <iostream>
using namespace std;

int main()
{
    int detik;
    int jam, menit, sisaDetik;

    cout << "Masukkan jumlah detik: ";
    cin >> detik;

    jam = detik / 3600;
    sisaDetik = detik % 3600;

    menit = sisaDetik / 60;
    sisaDetik = sisaDetik % 60;

    cout << detik << " detik = "
         << jam << " jam "
         << menit << " menit "
         << sisaDetik << " detik" << endl;

    return 0;
}
/*
Penjelasan Logika Program:

1. Program meminta pengguna memasukkan jumlah detik melalui cin.
2. Nilai detik kemudian dikonversi menjadi jam dengan rumus:
   jam = detik / 3600
   karena 1 jam = 3600 detik.

3. Setelah jam dihitung, sisa detik yang belum dikonversi dihitung dengan:
   sisaDetik = detik % 3600
   Operator % digunakan untuk mendapatkan sisa pembagian.

4. Sisa detik tersebut kemudian dikonversi menjadi menit dengan:
   menit = sisaDetik / 60
   karena 1 menit = 60 detik.

5. Sisa detik terakhir dihitung lagi menggunakan:
   sisaDetik = sisaDetik % 60

6. Terakhir, program menampilkan hasil konversi dalam format:
   X detik = H jam M menit S detik.
*/
