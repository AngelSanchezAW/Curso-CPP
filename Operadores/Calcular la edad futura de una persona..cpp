/* Escriba un programa en C++ que calcule la edad que tendr� el d�a de su cumplea�os del a�o 2020. 
Asigne valores apropiados a su edad y al a�o actual. */

#include<iostream>

using namespace std;

int main(){
	int edadA = 25, edadF = 0, fechaA = 2017, fechaF = 2020;
	
	edadF = edadA + (fechaF-fechaA);
	
	cout<<"La edad para el 2020 de una persona de 25 a�os es de: "<<edadF<<endl;
	
	return 0;
}
