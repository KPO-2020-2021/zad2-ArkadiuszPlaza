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
bool operator == (LZespolona  Skl1,  LZespolona  Skl2)
{
    if(abs(Skl1.re-Skl2.re)<=MAX_B && abs(Skl1.im-Skl2.im)<=MAX_B)
    {
      return true;
    }
    return false;
}
ostream & operator <<(ostream & Strm, const LZespolona arg)
{
  Strm << "(" << arg.re<<showpos<<arg.im<<noshowpos<<"i)";
  return Strm;
}
istream & operator >> (istream & Strm, LZespolona & arg)
{
  char Znak;
  Strm>>Znak;
  if (Znak == '(')
  {
    Strm.setstate(ios::badbit);
  }
  Strm>>arg.re>>arg.im;
   Strm>>Znak;
  if (Znak == 'i')
  {
    Strm.setstate(ios::badbit);
  } 
  Strm>>Znak;
  if (Znak == ')')
  {
    Strm.setstate(ios::badbit);
  }
  return Strm;
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
if(Skl2==0)
throw "przez zero sie nie dzieli"; 
  Wynik.re= Skl1.re / Skl2;
  Wynik.im= Skl1.im / Skl2;
  return Wynik;
}
LZespolona operator / (LZespolona Skl1, LZespolona Skl2)
{
  return Skl1 * Sprzezenie(Skl2) / Modul2 (Skl2);
}
void Wczytaj(LZespolona &arg)
{
  char Znak;
  cin>>Znak>>arg.re>>arg.im>>Znak>>Znak;
}
