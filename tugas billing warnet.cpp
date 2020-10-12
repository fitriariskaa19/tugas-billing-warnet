/* Perhitungan Billing Warnet */
/* Fitri Ariska */
/* Nama: fitri Ariska
/* 20051397082 */
/* 2020B */

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int j1jam,j1menit,j1detik,j2jam,j2menit,j2detik,jumlahdetik,jumlahbayar,selisihjam,selisihmenit,selisihdetik;
    const int tarif = 5000;
    
    string pagar = "====================";
    
    cout << pagar << endl;
    cout << "Selamat Datang di Perhitungan Billing warnet" << endl;
    cout << pagar << endl << endl;

    cout << "memulai : " << endl;
    cout << "masukkan jam mulai billing : "; cin >>j1jam;
    cout << "masukkan menit mulai billing : "; cin >>j1menit;
    cout << "masukkan detik mulai billing : "; cin >>j1detik;
    cout << endl;
    
    
    cout << pagar << endl;
    cout << "mengakhiri : " << endl;
    cout << "masukkan jam mengakhiri billing : "; cin >>j2jam;
    cout << "masukkan menit mengakhiri billing : "; cin >>j2menit;
    cout << "masukkan detik mengakhiri billing : "; cin >>j2detik;
    cout << pagar << endl;
    
    selisihjam = j2jam - j1jam;
    selisihmenit = j2menit - j1menit;
    selisihdetik = j2detik - j1detik;
    
    jumlahdetik = (selisihjam * 3600) + (selisihmenit * 60) + selisihdetik;
    jumlahbayar = jumlahdetik * tarif / 3600;
    
    cout << pagar << endl;
    cout << endl;
    cout << "hasilnya : " << endl;
    cout << "lama pemakaian anda adalah " << selisihjam << " jam, " << selisihmenit << " menit, " << selisihdetik << " detik " << endl;
    cout << " jumlah pembayaran billingnya sebanyak Rp. " << jumlahbayar << " ,-" << endl;
    cout << pagar << endl << endl;
    cout << "Terimakasih" << endl;
    
    return 0;    
}
