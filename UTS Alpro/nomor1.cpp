#include <iostream>
using namespace std;

int main() {
    int kode1, kode2, kode3;

    cout << "Masukkan tiga kode (antara 0-100):" << endl;
    cout << " Kode ke-1: ";
    cin >> kode1;
    cout << " Kode ke-2: ";
    cin >> kode2;
    cout << " Kode ke-3: ";
    cin >> kode3;

    if (kode1 < 0 || kode1 > 100 || kode2 < 0 || kode2 > 100 || kode3 < 0 || kode3 > 100) {
        cout << "Input tidak valid! Kode harus berada dalam angka 0-100." << endl;
    }

    if (kode1 < 50 || kode2 < 50 || kode3 < 50) {
        cout << "bahaya" << endl;
    } else {
        int total = kode1 + kode2 + kode3;
        if (total >= 200) {
            cout << "aman." << endl;
        } else {
            cout << "gagal." << endl;
        }
    }

    return 0;
}
