#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    cout<<"\t\t\t\tFORMULIR PEMBELIAN BARANG\t\t\t\t \n";
    cout<<"\t\t\t\t     TOKO SEJAHTERA      \t\t\t\t \n";
    char Nama[50];
    char alamat[50];
    char no_hp[20];
    int hargabarang1,hargabarang2,hargabarang3;
    int jumlahbarang1,jumlahbarang2,jumlahbarang3,diskon,total_bayar;

    cout<<"\t\t   ===================================================="<<endl;
    cout<<"Masukan Nama Pelanggan  \t: ";
    gets(Nama);
    cout<<"Masukan Alamat\t\t\t: ";
    gets(alamat);
    cout<<"Masukan Nomor HP\t\t: ";
    gets(no_hp);
    cout<<endl;
    cout<<"Harga barang 1 \t\t\t: ";
    cin>>hargabarang1;
    cout<<"Jumlah barang 1 \t\t: ";
    cin>>jumlahbarang1;
    cout<<"Harga barang 2 \t\t\t: ";
    cin>>hargabarang2;
    cout<<"Jumlah Barang 2 \t\t: ";
    cin>>jumlahbarang2;
    cout<<"Harga Barang 3 \t\t\t: ";
    cin>>hargabarang3;
    cout<<"Jumlah Barang 3 \t\t: ";
    cin>>jumlahbarang3;
    cout<<endl;
    cout<<"====================================================================="<<endl;
    cout<<"\nNama Pelanggan \t\t\t: "<<Nama<<endl;
    cout<<"Alamat \t\t\t\t: "<<alamat<<endl;
    cout<<"Nomor Hp \t\t\t: "<<no_hp<<endl;
    cout<<endl;
    //jumlah pembelian banyak barang
    int Jumlah_beli = jumlahbarang1+jumlahbarang2+jumlahbarang3;
    //jumlah harga sebelum diskon
    int total_harga = (hargabarang1*jumlahbarang1)+(hargabarang2*jumlahbarang2)+(hargabarang3*jumlahbarang3);
    //pengkondisian untuk diskom
    if (total_harga < 500000)
    {
        diskon = total_harga*0.15;
    }else if ((total_harga>=500000)&&(total_harga<=1000000))
    {
        diskon = total_harga*0.2;
    }else if (total_harga>1000000)
    {
        diskon = total_harga*0.3;
    }
    total_bayar = total_harga - diskon;
    
    cout<<"Jumlah pembelian barang \t: "<<Jumlah_beli<<endl;
    cout<<"Total harga sebelum diskon \t: "<<"Rp "<<total_harga<<endl;
    cout<<"Diskon \t\t\t\t: "<<"Rp "<<diskon<<endl;
    cout<<"Total bayar \t\t\t: "<<"Rp "<<total_bayar<<endl;
}