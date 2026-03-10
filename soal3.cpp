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

    // Meminta input jumlah detik
    cout << "Masukkan jumlah detik: ";
    cin >> detik;

    // Menghitung jam
    jam = detik / 3600;

    // Menghitung sisa detik setelah diambil jam
    sisaDetik = detik % 3600;

    // Menghitung menit
    menit = sisaDetik / 60;

    // Menghitung detik tersisa
    sisaDetik = sisaDetik % 60;

    // Menampilkan hasil
    cout << detik << " detik = "
         << jam << " jam "
         << menit << " menit "
         << sisaDetik << " detik" << endl;

    return 0;
}
