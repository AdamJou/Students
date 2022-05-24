#ifndef dane_H
#define dane_H
#include <iostream>
#include <string>

using namespace std;

struct dane
{

    private:

        string nazwisko;
        string imiona;
        int indeks;
        double ocena;



    public:

        ~dane()=default;

        dane(string nazwisko_="", string imiona_="", int indeks_=0, double ocena_=0);

        void setNazwisko(string nazwisko_);
        void setImiona(string imiona_);
        void setIndeks(int indeks_);
        void setOcena(double ocena_);

        string getNazwisko() {return nazwisko;}
        string getImiona() {return imiona;}
        int getIndeks() {return indeks;}
        double getOcena() {return ocena;}
        string ini() const;


        bool operator < (const dane &s) {return indeks < s.indeks;}

       friend ostream& operator << (ostream &os, const dane &k)
       { os << k.indeks << ';' << k.ocena << ';' << k.nazwisko << ';' << k.ini() << '\n'; return os;};




};



#endif


