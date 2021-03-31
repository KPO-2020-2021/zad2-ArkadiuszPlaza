#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#include <iostream>
#include <cmath>
#define MAX_B 0.001
using namespace std;
/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};




bool operator == (LZespolona  Skl1,  LZespolona  Skl2);

void Wyswietl(LZespolona arg);
void Wczytaj(LZespolona &arg);

/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona operator - (LZespolona Skl1, LZespolona Skl2);
LZespolona operator * (LZespolona Skl1, LZespolona Skl2);
LZespolona Sprzezenie(LZespolona arg);
double Modul2(LZespolona arg);
LZespolona operator / (LZespolona Skl1, double Skl2);
LZespolona operator / (LZespolona Skl1, LZespolona Skl2);

ostream & operator <<(ostream & Strm, const LZespolona arg);
istream & operator >> (istream & Strm, LZespolona & arg);
#endif
