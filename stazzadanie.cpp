#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    while(1==1){
    string G[10]={"furia","zlosc","irytacja","nerwowosc","agresja","zezlenie","rozjuszenie","szal","wscieklosc","rozsierdzenie"};
    string S[10]={"depresja","zalamanie","chandra","zal","smetnosc","lament","uzalanie sie","rozklejanie sie","ubolewanie","zalamka"};
    string R[10]={"wesolosc","euforia","szczesliwosc","wesolkowatosc","satysfakcja","blogostan","przyjemnosc","ukojenie","pogodnosc","pogoda ducha"};
    cout<<"Wybierz jedna z kategorii emocji:"<<endl<<"Gniew  - 1"<<endl<<"Smutek - 2"<<endl<<"Radosc - 3"<<endl;
    int w; cin>>w;
    int g; g=(rand())%10;
    switch(w)
    {
    case 1:
        cout<<G[g]<<endl;
        break;
    case 2:
        cout<<S[g]<<endl;
        break;
    case 3:
        cout<<R[g]<<endl;
        break;
    default:
        cout<<"Podana wartosc jest niepoprawna, sprobuj ponownie :)"<<endl;
        break;
    }
    cout<<endl;
    }
}
