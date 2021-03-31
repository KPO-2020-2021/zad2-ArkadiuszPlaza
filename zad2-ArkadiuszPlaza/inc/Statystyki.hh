#ifndef STATYSTYKI_HH
#define STATYSTYKI_HH



#include "LZespolona.hh"
#include "WyrazenieZesp.hh"

struct Statystyka
{
     int dobre;
     int zle;
     int wszystkie;
     double procent_dobre;
     double procent_zle;
};

void oblicz_procenty(Statystyka &stat);
void Wyswietl(Statystyka &stat);
#endif
