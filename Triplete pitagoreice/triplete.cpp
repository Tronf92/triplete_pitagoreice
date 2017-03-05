//Nicorici Adrian,15.03.2014
//Sa se afiseze toate tripletele de numere pitagoreice cu suma mai mica decat un numar dat.

#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int n=2;

void triplete(int x,int y,int z,int numar){
	if(numar<12){//Cel mai mic triplet pitagoreic: x=3,y=4,z=5, 3^2 +4^2 =9+16=25=5^2;
		cout << "Nu exista triplete pitagoreice" << endl;
	}
	while((x+y+z)<numar){
		z=x*x+y*y;
		if(sqrt(z)-int (sqrt(z) )==0){
			cout << "Numerele ( " << x << ", " << y << ", " << z << " ) sunt triplete pitagoreice)" << endl;
			for(n=2;(n*x)+(n*y)+(n*sqrt(z))<numar;n++){
			cout << "Numerele ( " << n*x << ", " << n*y << ", " << n*sqrt(z) << " ) sunt triplete pitagoreice)" << endl;
			}
		}
		x++;
		z=x*x+y*y;
		if(sqrt(z)-int (sqrt(z) )==0){
			cout << "Numerele ( " << y << ", " << x << ", " << sqrt(z) << " ) sunt triplete pitagoreice" << endl;
			for(n=2;((n*x)+(n*y)+(n*sqrt(z)))<numar;n++){
			cout << "Numerele ( " << n*y << ", " << n*x << ", " << n*sqrt(z) << " ) sunt triplete pitagoreice)" << endl;
			}
		}
		y++;
	}
}

int main(){

	int numar,x=1,y=1,z=1;
	cout << "Introduceti un numar" << endl;
	cin >> numar;
	triplete(x,y,z,numar);

	system("pause");
	return 0;
}
