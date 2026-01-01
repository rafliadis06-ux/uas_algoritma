#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;

int main() {
    int n; cout<<"Jumlah Mahasiswa:"; if(!(cin>>n)) return 0;
    vector<string> nama(n); vector <int> nilai(n); cin.ignore();
    for (int i=0;i<n;++i) {
        cout<<"Nama:"; getline(cin,nama[i]);
        cout<<"Nilai:"; cin>>nilai[i]; cin.ignore();
    }
    cout<<"\n=========HASIL PENILAIAN=========\n";
    cout<<left<<setw(4)<<"No"<<setw(25)<<"Nama"<<setw(6)<<"Nilai"<<"indeks\n";
    for (int i=0;i<n;++i) {
        char indeks;
        if (nilai[i]>=85) indeks='A';
        else if (nilai[i]>=75) indeks='B';
        else if (nilai[i]>=65) indeks='C';
        else if (nilai[i]>=55) indeks='D';
        else indeks='E';
        cout<<left<<setw(4)<<i+1<<setw(25)<<nama[i]<<setw(6)<<nilai[i]<<indeks<<"\n";   
    }
    return 0;
}