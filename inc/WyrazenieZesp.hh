#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH



#include "LZespolona.hh"


/*!
 * Modeluje zbior operatorow arytmetycznych.
 */
enum Operator { Op_Dodaj, Op_Odejmij, Op_Mnoz, Op_Dziel };


/*
 * Modeluje pojecie dwuargumentowego wyrazenia zespolonego
 */
struct WyrazenieZesp {
  LZespolona   Arg1;   // Pierwszy argument wyrazenia arytmetycznego
  Operator     Op;     // Opertor wyrazenia arytmetycznego
  LZespolona   Arg2;   // Drugi argument wyrazenia arytmetycznego
};

ostream & operator<<(ostream & Strm, const WyrazenieZesp arg);
istream & operator>>(istream & Strm, WyrazenieZesp &arg);

/*
 * Funkcje ponizej nalezy zdefiniowac w module.
 *
 */


void Wyswietl(WyrazenieZesp  WyrZ);
LZespolona Oblicz(WyrazenieZesp  WyrZ);
void Wczytaj(WyrazenieZesp WyrZ);

#endif
