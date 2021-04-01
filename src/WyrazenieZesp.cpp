#include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

void Wyswietl(WyrazenieZesp  WyrZ)
{
Wyswietl(WyrZ.Arg1);
switch(WyrZ.Op)
{
    case Op_Dodaj:
    cout<<"+";
    break;
    case Op_Odejmij:
    cout<<"-";
    break;
    case Op_Mnoz:
    cout<<"*";
    break;
    case Op_Dziel:
    cout<<"/";
    break;
}
Wyswietl(WyrZ.Arg2);
}
LZespolona Oblicz(WyrazenieZesp  WyrZ)
{switch(WyrZ.Op)
{case Op_Dodaj:
return WyrZ.Arg1+WyrZ.Arg2;
break;
case Op_Odejmij:
return WyrZ.Arg1-WyrZ.Arg2;
break;
case Op_Mnoz:
return WyrZ.Arg1*WyrZ.Arg2;
break;
case Op_Dziel:
return WyrZ.Arg1/WyrZ.Arg1;
break; 
}
return WyrZ.Arg1;
}
void Wczytaj(WyrazenieZesp WyrZ)
{
    Wczytaj (WyrZ.Arg1);
char Znak;
cin>>Znak;
switch(Znak)
{
    case '+':
    WyrZ.Op = Op_Dodaj;
    break;
    case '-':
    WyrZ.Op = Op_Odejmij;
    break;
    case '*':
    WyrZ.Op = Op_Mnoz;
    break;
    case '/':
    WyrZ.Op = Op_Dziel;
    break;
}
Wczytaj (WyrZ.Arg2);
}
ostream & operator<<(ostream & Strm, const WyrazenieZesp WyrZ)
{
    Strm<<(WyrZ.Arg1);
switch(WyrZ.Op)
{
    case Op_Dodaj:
    Strm<<"+";
    break;
    case Op_Odejmij:
    Strm<<"-";
    break;
    case Op_Mnoz:
    Strm<<"*";
    break;
    case Op_Dziel:
    Strm<<"/";
    break;
}
Strm<<(WyrZ.Arg2);
return Strm;
}
istream & operator>>(istream & Strm, WyrazenieZesp &WyrZ)
{
     Strm>>(WyrZ.Arg1);
char Znak;
Strm>>Znak;
switch(Znak)
{
    case '+':
    WyrZ.Op = Op_Dodaj;
    break;
    case '-':
    WyrZ.Op = Op_Odejmij;
    break;
    case '*':
    WyrZ.Op = Op_Mnoz;
    break;
    case '/':
    WyrZ.Op = Op_Dziel;
    break;
    default: 
    Strm.setstate(ios::badbit);
    break;
}
Strm>>(WyrZ.Arg2);
return Strm;
}
