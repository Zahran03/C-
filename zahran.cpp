// Kelompok Algo
#include <iostream>
using namespace std;
void programLaunch(){
  cout<<"Pilihan Menu"<<endl;
  cout<<"1. Lihat Price List"<<endl;
  cout<<"2. Cari Harga Barang"<<endl;
  cout<<"3. Mulai Order"<<endl;
  cout<<"4. Bayar"<<endl;
  cout<<"5. Cetak Receipt"<<endl;
}
void priceList(){
  cout<< "======= toko baju AHHA =======" <<endl;
  cout<<"1. Baju Rp: 50000"<<endl;
  cout<<"2. Celana Rp: 100000"<<endl;
  cout<<"3. Rok Rp: 100000"<<endl;
  cout<<"4. Jaket Rp: 150000"<<endl;
  cout<<"5. Swetear Rp: 200000"<<endl;
}
string itemBarang(int x){
  string item = "";
  if(x == 1){
    item = "Baju";
  } else if(x == 2){
    item = "Celana";
  } else if(x == 3){
    item = "Rok";
  } else if(x==4){
    item = "Jaket";
  } else if(x==5){
    item = "Swetear";
  } else {
    cout<<"data yang anda masukan tidak sesuai "<<endl;
  }
  return item;
}
int main()
{
  Start:
  int inputBarang, inputBarang2, inputBarang3;
  int totalBelanjaBrng = 0; int totalBelanjaBrng2 = 0; int totalBelanjaBrng3 = 0;
  string keputusan, barang, namaBarang, namaBarang2, namaBarang3;
  int order, jumlahBarang,  jumlahBarang2, jumlahBarang3, bayar = 0, uang = 0 , input, totalKeseluruhan = 0;
  int hargaBarang[6] = {0, 50000, 100000, 100000, 150000, 200000};
  Awal:
  programLaunch();
  cout<<"Inputkan Menu : ";
  cin>>input;
  switch(input){
    case 1:
      priceList();
      cout<<"Ingin Memilih Menu Lain (y/t)";
      cin>>keputusan;
      if(keputusan == "Y" || keputusan =="y"){
        goto Awal;
      } else if(keputusan == "T"||keputusan == "t"){
        return 0;
      }
      break;
    case 2:
      Cari:
      cout<<"Masukan Barang yang dicari usahakan menggunakan awalan huruf kapital : ";
      cin>>barang;
      if(barang == "Baju"||barang == "baju"||barang == "BAJU"){
        cout<<"Harga barang yang dicari adalah : 50000"<<endl;
      } else if(barang == "Celana"||barang == "celana"||barang == "CELANA"){
        cout<<"Harga barang yang dicari adalah : 100000"<<endl;
      } else if(barang == "Rok"||barang == "rok"||barang == "ROK"){
        cout<<"Harga barang yang dicari adalah : 100000"<<endl;
      } else if(barang == "Jaket"||barang == "jaket"||barang == "JAKET"){
        cout<<"Harga barang yang dicari adalah : 150000"<<endl;
      } else if(barang == "Swetear"||barang == "swetear"||barang == "SWETEAR"){
        cout<<"Harga barang yang dicari adalah : 200000"<<endl;
      } else {
        cout<<"Maaf barang yang anda cari tidak ada"<<endl;
        goto Cari;
      }
      cout<<"Ingin Memilih Menu Lain (y/t)";
      cin>>keputusan;
      if(keputusan == "Y" || keputusan =="y"){
        goto Awal;
      } else if(keputusan == "T"||keputusan == "t"){
        return 0;
      }
      break;
    case 3:
      cout<<"======BARANG DI TOKO KAMI======"<<endl;
      priceList();
      cout<<"Berapa jenis barang yang ingin kamu beli Masukan Angka 3 dan jangan 0 : ";
      cin>>order;
      if(order == 3){
        Order:
        cout<<"Input 3 nama barang : "<<endl;
        cout<<"input kode barang ke-1: ";
        cin>>inputBarang;
        namaBarang = itemBarang(inputBarang);
        cout<<"Masukan jumlah barang ke-1: ";
        cin>>jumlahBarang;
        totalBelanjaBrng += jumlahBarang * hargaBarang[inputBarang];
        cout<<"input kode barang ke-2: ";
        cin>>inputBarang2;
        namaBarang2 = itemBarang(inputBarang2);
        cout<<"Masukan jumlah barang ke-2: ";
        cin>>jumlahBarang2;
        totalBelanjaBrng2 += jumlahBarang2 * hargaBarang[inputBarang2];
        cout<<"input kode barang ke-3: ";
        cin>>inputBarang3;
        namaBarang3 = itemBarang(inputBarang3);
        cout<<"Masukan jumlah barang ke-3: ";
        cin>>jumlahBarang3;
        totalBelanjaBrng3 += jumlahBarang3 * hargaBarang[inputBarang3];
        totalKeseluruhan += totalBelanjaBrng + totalBelanjaBrng2 + totalBelanjaBrng3;
        cout<<"Total harga yang harus dibayarkan adlah Rp. :"<<totalKeseluruhan<<endl;
        cout<<"Ingin Memilih Menu Lain (y/t)";
        cin>>keputusan;
        if(keputusan == "Y" || keputusan =="y"){
          goto Awal;
        } else if(keputusan == "T"||keputusan == "t"){
          goto Order;
        }
      } else {
        cout<<"Jumlah barang tidak boleh 0 atau selaina angka 3"<<endl;
        goto Awal;
      }
      break;
    case 4:
      Pembayaran:
      if(totalKeseluruhan<1){
        cout<<"====================================="<<endl;
        cout<<"Silahkan Mulai order terlebih dahulu"<<endl;
        cout<<"====================================="<<endl;
        goto Awal;
      } else {
        Keputusan4:
        cout<<"Total yang harus dibayar : Rp. "<<totalKeseluruhan<<endl;
        cout<<"Masukan jumlah pembayaran : ";
        cin>>uang;
        bayar =  uang - totalKeseluruhan ;
        if(uang<totalKeseluruhan){
          cout<<"========================="<<endl;
          cout<<"Uang anda tidak cukupp"<<endl;
          cout<<"========================="<<endl;
          goto Pembayaran;
        } else {
          cout<<"Kembalian anda : "<<bayar<<endl;
        }
      }
      cout<<"Ingin Memilih Menu Lain (y/t)";
      cin>>keputusan;
      if(keputusan == "Y" || keputusan =="y"){
        goto Awal;
      } else if(keputusan == "T"||keputusan == "t"){
        goto Keputusan4;
      }
      break;
    case 5:
      Cetakresi:
      if( bayar > 0){
        cout<<"No | Nama Barang | Harga Barng/pcs | jumlah | total |"<<endl;
        cout<<"1"<<"  "<<namaBarang<<"  "<<hargaBarang[inputBarang]<<"  "<<jumlahBarang<<"  "<<totalBelanjaBrng<<"  "<<endl;
        cout<<"2"<<"  "<<namaBarang2<<"  "<<hargaBarang[inputBarang2]<<"  "<<jumlahBarang2<<"  "<<totalBelanjaBrng2<<"  "<<endl;
        cout<<"3"<<"  "<<namaBarang3<<"  "<<hargaBarang[inputBarang3]<<"  "<<jumlahBarang3<<"  "<<totalBelanjaBrng3<<"  "<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Total yang harus dibayar : Rp. "<<totalKeseluruhan<<endl;
        cout<<"Uang yang telah dibayar : "<<uang<<endl;
        cout<<"Kembalian anda : "<<bayar<<endl;
        cout<<endl;
        cout<<"Terimakasih telah berbelanja di toko kami"<<endl;
      } else if(bayar == 0 && uang > 1){
        cout<<"No | Nama Barang | Harga Barng/pcs | jumlah | total |"<<endl;
        cout<<"1"<<"  "<<namaBarang<<"  "<<hargaBarang[inputBarang]<<"  "<<jumlahBarang<<"  "<<totalBelanjaBrng<<"  "<<endl;
        cout<<"2"<<"  "<<namaBarang2<<"  "<<hargaBarang[inputBarang2]<<"  "<<jumlahBarang2<<"  "<<totalBelanjaBrng2<<"  "<<endl;
        cout<<"3"<<"  "<<namaBarang3<<"  "<<hargaBarang[inputBarang3]<<"  "<<jumlahBarang3<<"  "<<totalBelanjaBrng3<<"  "<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Total yang harus dibayar : Rp. "<<totalKeseluruhan<<endl;
        cout<<"Uang yang telah dibayar : "<<uang<<endl;
        cout<<"Kembalian anda : "<<bayar<<endl;
        cout<<endl;
        cout<<"Terimakasih telah berbelanja di toko kami"<<endl;
      } else if(bayar == 0 && uang == 0){
         cout<<"====================================="<<endl;
        cout<<"Silahkan order dan bayar dulu yaaa"<<endl;
         cout<<"====================================="<<endl;
        goto Awal;
      }
      cout<<"Ingin Memilih Menu Lain (y/t)";
      cin>>keputusan;
      if(keputusan == "Y" || keputusan =="y"){
        namaBarang2 ="";namaBarang ="";namaBarang3="";inputBarang=0;inputBarang2=0;inputBarang3=0;
        jumlahBarang=0;jumlahBarang2=0;jumlahBarang3=0;totalBelanjaBrng=0;totalBelanjaBrng2=0;
        totalBelanjaBrng3=0;totalKeseluruhan=0;uang=0;bayar=0;
        goto Start;
      } else if(keputusan == "T"||keputusan == "t"){
        return 0;
      }
      break;
    default:
      cout<<"Anda Memasukan Inputan yang tidak sesuai"<<endl;
      return 0;
  }
  return 0;
}