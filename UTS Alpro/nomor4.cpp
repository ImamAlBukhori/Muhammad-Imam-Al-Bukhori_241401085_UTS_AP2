#include <iostream>
#include <string>
using namespace std;

int main() {
    system("CLS");
    string JudulBuku;
    int JumlahJudulBuku = 0;
    
    cout << "Daftar judul buku: ";
    getline(cin, JudulBuku);
    
    int i = 0;
    while (i < JudulBuku.length()) {
        while (i < JudulBuku.length() && JudulBuku[i] == ' ') {
            i++;
        }
        
        while (i < JudulBuku.length() && JudulBuku[i] != ' ') {
            JumlahJudulBuku++;
            
            while (i < JudulBuku.length() && JudulBuku[i] != ' ') {
                i++;
            }
        }
    }
    
    cout << "Jumlah judul buku: " << JumlahJudulBuku << endl;
    
    return 0;
}