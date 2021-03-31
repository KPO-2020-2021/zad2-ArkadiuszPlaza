#include "Statystyki.hh"

void oblicz_procenty(Statystyka &stat)
{
    stat.procent_dobre=stat.dobre*100.0/stat.wszystkie;
stat.procent_zle=stat.zle*100.0/stat.wszystkie;
}

void Wyswietl(Statystyka &stat)
{
    cout<<"dobre "<<stat.dobre<<endl;
     cout<<"zle "<<stat.zle<<endl;
      cout<<"procent dobre "<<stat.procent_dobre<<endl;
}