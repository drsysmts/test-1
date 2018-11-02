//============================================================================
// Name        : DRSYSTEMS1.cpp
// Author      : rachid 
// Version     :
// Copyright   : DR  SYSTEMS
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;
// class  Cuve
class Cuve{


public:

	int x,y;

	Cuve(int x,int y){
		static int  count=0;
		cout << "Count oo; " <<  count <<endl;
		this->x=x;
		this->y=y;
		count++;
		cout << "Counter ++" <<  count <<endl;
	}
	void set(int volume, int price) {
		{

			this->x = volume; // volume de cuve
			this->y = price;   // price
			cout << "creat frist think" << endl;
		}
	}


	void affiche(){
		cout << "cuve redy" << endl;

	}
	int calcule(int D){
		y=y*D;
		y++;
		if (y>x){
			cout << "fun" << endl;
		}
		return 123;
	}

};

int main() {


	Cuve cuve1(22,56);// change code

	cuve1.set(1000,9000);
	cuve1.affiche();
	Cuve cuve2(34,34);
	cuve2.set(2100,50000);
	cuve2.affiche();
	cout << cuve2.x<< " "<< cuve2.y <<endl;
    int M=cuve2.calcule(7);

    Cuve cuve(22,56);
    Cuve cuv(22,56);
    Cuve cuve1d(22,56);
    Cuve cuve1s(22,56);
    Cuve cuvew1(22,56);
    Cuve cudve1(22,56);
    Cuve ve1(22,56);
    Cuve cuhhhe1(22,56);
    Cuve cve1(22,56);


    if (cuve1.x>1) {

    		cout << "fun" << endl;
    	}

	cout << " VOLUME : "<< cuve1.x<< " price : "<< cuve1.y <<endl; // prints !!!Hello World!!!
	cout << cuve2.x<< " "<< cuve2.y <<endl;
	cout << M <<endl;

	return 0;
}
