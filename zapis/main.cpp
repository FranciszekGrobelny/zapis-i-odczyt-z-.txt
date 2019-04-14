#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    int i=2;
    string imie;
    while(i){
        cin>>imie;

        fstream plik;
        plik.open("zapisane.txt", ios::out|ios::app);
        plik<<imie<<endl;
        plik.close();
        i--;
    }
    return 0;
}
