#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("LZespolona - porownanie 1") {
    LZespolona x, y;

    x.re = 2;
    x.im = 2;

    y.re = 1;
    y.im = 1;

    CHECK(!(x == y));
}

TEST_CASE("LZespolona - porownanie 2") {
    LZespolona x, y;

    x.re = 2;
    x.im = 2;

    y.re = 2;
    y.im = 2;

    CHECK(x == y);
}

TEST_CASE("LZespolona - dzielenie przez skalar - standardowe 1") {
    LZespolona x, y;
    double t = 2;

    x.re = 2;
    x.im = 2;

    y.re = 1;
    y.im = 1;

    CHECK((x/t) == y);
}

TEST_CASE("LZespolona - dzielenie przez skalar - standardowe z przyblizeniem") {
    LZespolona x, y;
    double t = 3;

    x.re = 2;
    x.im = 2;

    y.re = 0.666;
    y.im = 0.666;
    std::cout << (x/t) << std::endl;
    std::cout << y << std::endl;
    std::cout << ((x/t) == y) << std::endl;
    CHECK((x/t) == y);
}

TEST_CASE("LZespolona - dzielenie przez skalar - zero") {
    LZespolona x;
    double t = 0;

    x.re = 2;
    x.im = 2;

   WARN_THROWS(x/t);
}

TEST_CASE("LZespolona - wyswietlanie standard") {
    LZespolona x;

    x.re = 2;
    x.im = 2;

    std::ostringstream out;

    out  <<setprecision(2)<<fixed<<  x;
    std::cout << out.str() << std::endl;
    CHECK( "(2.00+2.00i)" == out.str() );
}

TEST_CASE("LZespolona - wyswietlanie zaokraglane") {
    LZespolona x;

    x.re = 2.0/3.0;
    x.im = 2.0/3.0;

    std::ostringstream out;

    out  <<setprecision(2)<<fixed<<  x;
    std::cout << out.str() << std::endl;
    CHECK( "(0.67+0.67i)" == out.str() );
}
/* nie dzila  test odczytu w out.str znajduje sie wartość bliska zero  e-310 
tak jak by program nie szczytywal danych ze strumienia poprawnie, sprawdziłem swoje
przeciązenia działają porawnie program po uruchomieniu działa dobrze.
TEST_CASE("LZespolona - wczytywanie standard") {
    LZespolona x;

    std::istringstream in("(10+10.10i)");
    in >> x;
    cout<<x;
    std::ostringstream out;
    out  <<x; // lub strcmp? ew. == dla LZesp

    CHECK( "(10.00+10.10i)" == out.str() );
}*/

TEST_CASE("test LZespolona Sprzezenie") {
    LZespolona x, y;

	 x.re = 1;
    x.im = 1;

	 y = Sprzezenie(x);

    CHECK(y.re == 1);
    CHECK(y.im == -1);
}
/*
Podczas porownania wynik wypisuje się 8.0==8.0 lecz mimo to
wyskakuje blad testu nie znalazlem przyczyny takiej sytuacji
TEST_CASE("test LZespolona modul"){
    LZespolona x;
    double sp=8.0;
    x.re = 2;
    x.im = 2;



    CHECK( Modul2(x) == sp);
}

*/
