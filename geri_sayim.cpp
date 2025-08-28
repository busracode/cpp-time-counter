#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

void ilerlemeCubugu(int toplam, int kalan) {
    int uzunluk =30;
    int dolu =uzunluk*(toplam - kalan) / toplam;
    cout<<"[";
    for (int i =0; i <uzunluk; i++) {
    if (i <dolu)
       cout<<"#";
    else
       cout<<"-";
    }
    cout<<"]";
}

void geriSayim(int dakika, int saniye) {
    int toplamSaniye=dakika * 60 + saniye;
    int kalan = toplamSaniye;
    while (kalan >= 0){
        int dk = kalan / 60;
        int sn = kalan % 60;

        cout<<"\r";
        ilerlemeCubugu(toplamSaniye, kalan);
        cout<<setfill('0')<<setw(2)<<dk<<":"<<setfill('0')<<setw(2)<<sn<< flush;

        Sleep(1000);
        kalan--;
    }
    cout<<"\n\n ZAMAN DOLDU!\a\n"<<endl;
    Beep(1000, 500);
}

int main(){
    int dk, sn;
    cout<<"Geri sayim icin dakika gir:";
    cin>>dk;
    cout<<"Geri sayim icin saniye gir:";
    cin>>sn;
    system("cls");
    cout<<"Geri sayim basliyor...\n";
    

    geriSayim(dk, sn);
    return 0;
}
