#include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
 (3+4i)+(5+6i)
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
Wyswietl(Wyrz.Arg2);
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
}
void Wczytaj(WyrazenieZesp WyrZ);
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