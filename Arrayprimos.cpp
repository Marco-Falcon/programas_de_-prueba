#include <iostream>
using namespace std;

bool hallarprimo (int A);

int main (){
	
	int A[50], n, SP = 0; //SP = sumatoria de primos
	
	cout << "ingrese la cantidad de numeros: ";
	cin >> n; 
	cout << endl;
	
	cout << "ingrese los numeros del arreglo: " << endl;
	
	for (int i=0; i < n; i++){
		cin >> A[i];
	}
	
	for (int i=0; i < n; i++){
		if(hallarprimo(A[i])){
			SP = SP + A[i];
		}
	}
	
	cout << "la sumatoria es: " << SP;
	
	return 0;
}

bool hallarprimo (int A){
	
	int cont = 0;
	
	for(int i = 1; i <= A; i++){
		if(A%i == 0){
			cont++;
		}
	
	}	
	if (cont == 2){
		return 1;
	}else{
		return 0;
	}
	
}

