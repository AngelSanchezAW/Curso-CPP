/* Escriba un programa en C++ que calcule la longitud de una circunferencia de radio 15. 
La fórmula para hallar la longitud de la circunferencia es la siguiente: Longitud = 2 * PI * r, 
siendo 3.1416 el valor de PI y siendo r el radio de la circunferencia. */

#include<iostream>

using namespace std;

int main(){
	int radio = 15;
	float pi = 3.1416, longitud = 0;
	
	longitud = 2 * pi * radio;
	
	cout<<"La longitud de la circunferencia es de: "<<longitud<<endl;
	
	return 0;
}
