#include <iostream>
using namespace std;

class barang{
public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData(){
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
}; // batas class

int main(){
    barang elektronik;
    elektronik.nama                 = "Laptop Gaming";
    elektronik.jumlah               = 10;
    elektronik.kategori             = "Elektronik";
    elektronik.tanggalProduksi      = "202
