#include <iostream>
using namespace std;

string food(int a){
    if (a==1){
        return "Bubur ayam";
    } else  if (a==2){
        return "Nasi goreng";
    } else  if (a==3){
        return "Nasi uduk";
    }else  if (a==4){
        return "Bubur ketan hitam";
    }else  if (a==5){
        return "Bubur kacang ijo";
    }else  if (a==6){
        return "Nasi liwer";
    }else  if (a==7){
        return "Gado-gado";
    }else  if (a==8){
        return "Es teh manis";
    }else  if (a==9){
        return "Es jeruk";
    }else{
        return "Es cincau";
    }
}
void quit(string name, int arr[10]){
    cout<<"Nama: "<<name<<endl;
    int price = 0;
    for (int i =0; i<10; i++){
        cout<<(i+1)<<"."<<food(i+1)<<" "<<arr[i]<<endl;
        if (arr[i]>0){
            price = price + (arr[i])*(i+1)*1000;
        } 
    }
    cout<<"Total Harga: "<<price;
}

void display_Menu(){
    cout<<"List Menu: "<<endl<<endl;
    cout<< "Makanan : "<<endl <<"1. Bubur ayam (1101) harga: 1000"<< endl<<"2. Nasi Goreng (1102) harga: 2000"<<endl<<"3. Nasi Uduk (1103) harga: 3000"<<endl;
    cout<<"4. Bubur Ketan Hitam (1104) harga: 4000"<<endl<<"5. Bubur Kacang Ijo (1105) harga: 5000"<<endl<<"6. Nasi Liwet (1106) harga: 6000"<<endl;
    cout<<"7. Gado-Gado (1107) harga: 7000"<<endl<<endl<<"Minuman: "<<endl<<"8. Es Teh Manis (1108) harga: 8000"<<endl<<"9. Es Jeruk(1109) harga: 9000"<<endl<<"10. Es Cincau(11010) harga: 10000"<<endl;
    cout<<endl;

}
void dashb(string name, int arry[10]){
    int n;
    cout<<"1. Melihat menu"<<endl<<"2. Membeli maknaan/minuman"<<endl<<"3. Keluar"<<endl<<"Pilih Opsi: ";
    cin>>n;
        if (n == 1){
            display_Menu();
            dashb(name, arry);
        } else if (n==2){
            int jenis, jumlah;
            cout<<"Masukkan Id Makanan: ";
            cin>> jenis;
            cout<<"Masukkan jumlah: ";
            cin>> jumlah;
            if ((jenis-1100)<10){
                arry[jenis-1101] = jumlah;
            } else {
                arry[9] = jumlah;
            }
            dashb(name, arry);
        }else{
            quit(name, arry);
        }

}

int main(){
    string name;
    string start;
    int arr[10];
    for (int i=0;i<10;i++){
        arr[i] = 0;
    }
    cout<<"Toko dibuka ? (yes/no): ";
    cin>>start;
    if (start == "yes"){
        cout<<"Masukkan Nama: ";
        cin>>name;
        dashb(name, arr);
    } else {
        cout<<"Tidak ada penjualan";
    }
}