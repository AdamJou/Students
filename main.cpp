#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "kontener.h"
#include "dane.h"


int main()
{

        const int N=2;
        string nazwa[N]={"GRA.txt","SID.txt"};
        kontener<dane> L;

        string surname;
        string names;
        int index;
        double mark;



        for(int i=0; i<N;i++)
        {
             ifstream in;
            in.open(nazwa[i]);

            if(!in)
            {
                cout << nazwa[i] <<endl ;
                throw runtime_error ("Nie udalo sie otworzyc pliku!");

            }


            while(!in.eof())
            {
                    in >> surname;
                    in.ignore();

                    string line;
                    getline(in, line);

                    unsigned last_space = line.rfind(' ');
                    unsigned before_last_space = line.rfind(' ', last_space - 1);

                    names = line.substr(0, before_last_space);

                    istringstream iline(line.substr(before_last_space + 1));
                    iline >> index >> mark;

                    try
                    {

                        dane s;
                        s.setNazwisko(surname);
                        s.setImiona(names);
                        s.setIndeks(index);
                        s.setOcena(mark);

                        L.insert(s);

                    }
                    catch(exception &e)
                    {
                         cout << e.what() << endl;
                    }


            }


        }



//L.print();
         ofstream out("INF.txt");
    int counter = L.size();
    for(int i = 0; i <  counter; i++)
    {
        dane s = L.pop();
        out << s.getIndeks() << ";" << s.getOcena() << ";" << s.getNazwisko() << " " << s.ini() << endl;
    }
    out.close();



    return 0;
}
