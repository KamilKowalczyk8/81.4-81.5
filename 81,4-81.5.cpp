#include <iostream>
#include <fstream>
#include <math.h> 
#include <cmath>
#include <iomanip>
using namespace std;


const int rozmiar = 100;
int tab[rozmiar][6];

void zadanie4()
 {
 	ifstream plik;
	plik.open("wierzchTR.txt");
	for (int i = 0; i < rozmiar; i++) {
		for (int j = 0; j < 6; j++) {
			plik >> tab[i][j];
		}
	}	
	plik.close();
	int liczba = 0;
	double kw1, kw2, kw3;
	for (int i = 0; i < rozmiar; i++) {
		kw1 = pow(tab[i][0] - tab[i][2], 2) + pow(tab[i][1] - tab[i][3], 2);
 		kw2 =  pow(tab[i][0] - tab[i][4], 2) + pow(tab[i][1] - tab[i][5], 2);
 		kw3 = pow(tab[i][2] - tab[i][4], 2) + pow(tab[i][3] - tab[i][5], 2);
 		if ((kw1==kw2+kw3) || (kw2==kw1+kw3) || (kw3==kw1+kw2))
		{
 		liczba++;
 		} 
	}
 	cout<<"zadanie 81.4"<<endl;
 	cout<<endl;
 	cout<<liczba;
 	cout<<endl;
cout<<endl;
}

void zadanie5()
 {
 	ifstream plik;
	plik.open("wierzchTR.txt");
	for (int i = 0; i < rozmiar; i++) {
		for (int j = 0; j < 6; j++) {
			plik >> tab[i][j];
		}
	}	
	plik.close();
 	int liczba=0;
 	int kw1,kw2;
 		cout<<"zadanie 81.5"<<endl;
 		cout<<endl;
	for (int i = 0; i < rozmiar; i++) {
		kw1 = tab[i][0] + tab[i][4] - tab[i][2]; 
		kw2 = tab[i][1] + tab[i][5] - tab[i][3]; 
		if (kw1 == kw2) {
			cout << tab[i][0] << ", " << tab[i][1] << ";   ";
			cout << tab[i][2] << ", " << tab[i][3] << ";   ";
			cout << tab[i][4] << ", " << tab[i][5] << ";   ";
			cout << kw1<< ", " << kw2 << endl;
			liczba++;
		}
	}

	cout<<endl;
	cout<<"Liczba czworokatow = ";
	cout<<liczba;
	cout<<endl;
	

}
int main() {	

    zadanie4();
  	zadanie5();

}

