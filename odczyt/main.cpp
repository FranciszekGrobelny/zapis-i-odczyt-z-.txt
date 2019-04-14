#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    string nazwisko;

    fstream plik;
    plik.open("zapisane.txt",ios::in);

    if(plik.good()==false){

        cout<<"nie ma takiego pliku";
        exit(0);
    }
    else{

        string linia;
        int nr_linii=1;

        //while(
        getline(plik,linia);//){
        nazwisko=linia;

        //}

    }
    plik.close();

    cout<<nazwisko<<endl;

    return 0;
}
