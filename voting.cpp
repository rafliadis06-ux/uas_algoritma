#include<iostream>
#include<vector>
using namespace std;

int main() {
    int jumlahPemilih, suaraSetuju = 0, suaraTidak= 0;
    cout<<"Jumlah Pemilih: ";
    cin>>jumlahPemilih;
    vector<int> suara(jumlahPemilih);
    for (int i=0; i<jumlahPemilih; i++) {
        cout<<"Suara Pemilih Ke-"<<i+1<<" (1=Setuju, 0=Tidak Setuju): ";
        cin>>suara[i];
        if (suara[i] == 1) suaraSetuju++;
        else suaraTidak++;
    }
    cout<<"\n===HASIL VOTING===\n";
    cout<<"Setuju: "<<suaraSetuju<<"\n";
    cout<<"Tidak Setuju: "<<suaraTidak<<"\n";
    if (suaraSetuju > suaraTidak) cout<<"Keputusan: Disetujui\n";
    else if (suaraTidak > suaraSetuju) cout<<"Keputusan: Tidak Disetujui\n";
    else cout<<"Keputusan: SERI\n";
    return 0;
}