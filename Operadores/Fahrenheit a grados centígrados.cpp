/* Escriba un programa en C++ que convierta una temperatura de 86 grados Fahrenheit a su equivalente en grados cent�grados. 
La f�rmula para convertir es grados Fahrenheit a grados cent�grados es la siguiente: Cent�grados = (5/9) (Fahrenheit-32).*/

#include<iostream>

using namespace std;

int main(){
	int gradosF = 86, gradosC=0;
	
	gradosC=(5.0/9)*(gradosF-32);
	cout<<gradosF<<" grados Fahrenheit son igual a "<<gradosC<<" grados centigrados."<<endl;
	
	return 0;
}

