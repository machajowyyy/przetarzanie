#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main() {
string linia;
    fstream plik;
    int x; 
    int y;
    int licznik_linii=0;
    ofstream MyFile("pary_liczb2.txt");
    plik.open("wsp.txt", ios::in);
    if(plik.good() == true)
    {
        while(!plik.eof())
        {
        licznik_linii++;
        plik >> x >> y;
       if(x+y>0){
			MyFile << "Liczby sa dodatnie   ";
		}
		else{
			MyFile << "Liczby sa  ujemne   ";
		}
	}
}
}
	



 
