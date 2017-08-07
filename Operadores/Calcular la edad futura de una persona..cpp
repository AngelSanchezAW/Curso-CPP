/* Escriba un programa en C++ que calcule la edad que tendrá el día de su cumpleaños del año 2020. 
Asigne valores apropiados a su edad y al año actual. */

#include<iostream>

using namespace std;

int main(){
	int edadA = 25, edadF = 0, fechaA = 2017, fechaF = 2020;
	
	edadF = edadA + (fechaF-fechaA);
	
	cout<<"La edad para el 2020 de una persona de 25 años es de: "<<edadF<<endl;
	
	return 0;
}
