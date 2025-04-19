#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int nilai1, nilai2, nilai3;
    float rata_rata;

    cout << "Nama Mahasiswa: ";
    cin >> nama;
    cout << "NIM: ";
    cin >> nim;

    cout << "Nilai Mata Kuliah : " << endl;
    cout << "Algoritma dan Pemrograman : ";
    cin >> nilai1;
    cout << "Probabilitas dan Statistika : ";
    cin >> nilai2;
    cout << "Sistem Operasi : ";
    cin >> nilai3;

    rata_rata = (nilai1 + nilai2 + nilai3) / 3.0;

    cout << "Algoritma dan Pemrograman : ";
    if (nilai1 >= 60)
        cout << "Lulus." << endl;
    else
        cout << "Tidak Lulus. Silahkan Ulangi di Tahun Depan!" << endl;

    cout << "Probabilitas dan Statistika: ";
    if (nilai2 >= 60)
        cout << "Lulus." << endl;
    else
        cout << "Tidak Lulus. Silahkan Ulangi di Tahun Depan!" << endl;

    cout << "Sistem Operasi: ";
    if (nilai3 >= 60)
        cout << "Lulus." << endl;
    else
        cout << "Tidak Lulus. Silahkan Ulangi di Tahun Depan!" << endl;

    cout << "Nilai rata-rata semester ini : " << rata_rata << endl;
    return 0;
}