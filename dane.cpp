#include <iostream>
#include <string>
#include "dane.h"

using namespace std;


dane::dane(string nazwisko_, string imiona_, int indeks_, double ocena_)
{
    nazwisko=nazwisko_;
    imiona=imiona_;
    indeks=indeks_;
    ocena=ocena_;


}
void dane::setNazwisko(string nazwisko_)
{

    int tmp = nazwisko_.length();
    int c=0;
    for(int i =0; i< tmp ; i++)
    {
        if(nazwisko[i]>='0' && nazwisko_[i] <='9')
        {
            c++;
        }
    }

    if(c==0)
    {
        nazwisko=nazwisko_;
    }
    else
    {
        throw invalid_argument ("wrong surname");
    }



}

void dane::setImiona(string imiona_)
{



    imiona=imiona_;
}

void dane::setIndeks(int indeks_)
{
    if(indeks_ < 100000 || indeks_ > 999999)
    {
         throw invalid_argument ("Niepoprawny numer indeksu");
    }




    else
    {
        indeks=indeks_;
    }


}

void dane::setOcena(double ocena_)
{
    if(ocena_ < 2.0 || ocena_ > 5.0)
    {
        throw invalid_argument ("Niepoprawna wartosc ");

    }
    else
    {
        ocena=ocena_;
    }


}

string dane::ini() const
{
    int tmp= imiona.length();
    string inicjal;
    for(int i=0; i < tmp ; i++ )
    {
        if(i==0)
        {
            inicjal= inicjal + imiona[0] + ".";
        }
        if(imiona[i]==' ')
        {
            inicjal = inicjal + imiona[i+1] + ".";
        }
    }
    return inicjal;
}


