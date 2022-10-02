//Program Menghitung Pemakaian Uang Bulanan dengan Tabel

#include <iostream>
using namespace std;

string bulan;
double uang_bulanan, pengeluaran_senin, pengeluaran_selasa, sisa_uang_bulanan, total_pengeluaran;

int main()
{
    cout<<" Program Menghitung Pemakaian Uang Bulanan"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<endl;
    
    //Proses perhitungan
    cout<<"Masukkan uang bulanan (e+6): ";
    cin>>uang_bulanan;
    cout<<"Masukkan pengeluaran hari Senin (e+3): ";
    cin>>pengeluaran_senin;
    cout<<"Masukkan pengeluaran hari Selasa (e+3): ";
    cin>>pengeluaran_selasa;
    cout<<endl;
    total_pengeluaran=pengeluaran_senin+pengeluaran_selasa;
    sisa_uang_bulanan=uang_bulanan+total_pengeluaran;
    
    //Pembuatan Tabel
    cout<<"Tabel Program"<<endl;
    cout<<"------------------------------------- "<<endl;
    cout<<"|  Bulan  |          Agustus         |"<<endl;
    cout<<"|         |          "<<uang_bulanan<<"           |"<<endl;
    cout<<"|  Hari   |   Senin     |   Selasa   |"<<endl;
    cout<<"|         |   "<<pengeluaran_senin<<"     |   "<<pengeluaran_selasa<<"    |"<<endl;
    cout<<"|  Total  |           "<<total_pengeluaran<<"          |"<<endl;
    cout<<"|  Sisa   |                          |"<<endl;
    cout<<"|  uang   |        "<<sisa_uang_bulanan<<"         |"<<endl;
    cout<<"| bulanan |                          |"<<endl;
    cout<<"------------------------------------- ";
    
    return 0;
}