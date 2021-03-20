#include "LZespolona.hh"



/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

void Wyswietl(LZespolona arg)
{
cout << "(" << arg.re<<showpos<<arg.im<<noshowpos<<"i)";
}
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}
LZespolona operator * (LZespolona Skl1, LZespolona Skl2)
{
  LZespolona Wynik;

  Wynik.re= Skl1.re * Skl2.re - Skl1.im * Skl2.im;
  Wynik.im= Skl1.re * Skl2.im + Skl1.im * Skl2.re;
  return Wynik;
}
LZespolona Sprzezenie(LZespolona arg) 
{
  arg.im = arg.im * -1;
  return arg;
}
double Modul2(LZespolona arg) 
{
  return pow(sqrt(pow(arg.re,2)+pow(arg.im,2)),2);
}
LZespolona operator / (LZespolona Skl1, double Skl2)
{
  LZespolona Wynik;

  Wynik.re= Skl1.re / Skl2;
  Wynik.im= Skl1.im / Skl2;
  return Wynik;
}
LZespolona operator / (LZespolona Skl1, LZespolona Skl2)
{
  return Skl1 * Sprzezenie(Skl2) / Modul2 (Skl2);
}
void Wczytaj(LZespolona &arg);
{
  char Znak;
  cin>>Znak>>arg.re>>arg.im>>Znak>>Znak;
}
