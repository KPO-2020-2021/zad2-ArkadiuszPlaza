#include <iostream>
#include "BazaTestu.hh"
#include "Statystyki.hh"
using namespace std;




int main(int argc, char **argv)
{
////////////////////////////////////
/*LZespolona ze={5,6}; testy
LZespolona ze2={15,62};
Wyswietl(ze+ze2);
cout << endl;
Wyswietl(ze-ze2);
cout << endl;
Wyswietl(ze*ze2);
cout << endl;
Wyswietl(ze/ze2);*/
//////////////////////////////////
  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }


  
  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  Statystyka statystyka={0,0,0,0,0};
LZespolona odp;
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
    cout << "oblicz: " << WyrZ_PytanieTestowe <<endl;
    int i=0;
    while(i++!=3)
    {
       cout << "odp: " <<endl;
       cin>>odp;
       if(cin.good())
       {
         break;
       }
       cin.clear();
       cin.ignore(1024,'\n');
    }
   statystyka.wszystkie++;
   if(odp== Oblicz(WyrZ_PytanieTestowe))
   {
     cout<<"dobrze"<<endl;
       statystyka.dobre++;
   }
   else
   {
     cout<<"zle "<<Oblicz(WyrZ_PytanieTestowe)<<endl;
       statystyka.zle++;
   }
  }
  oblicz_procenty(statystyka);
Wyswietl(statystyka);
  
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

}
