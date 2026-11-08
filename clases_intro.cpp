#include <iostream>
using namespace std;

class character {
public:
	string name;
	int health;	
	void attack(); //protitipo de la funcion "attack"
};

void character::attack(){ //definición de la función "attack"
	cout << name << " ataca con " << health << " de vida." << endl;}


int main(){
	
	int n;
	character heroe[5];
	
	cout << "ingrese la cantidad de personajes: ";
	cin >> n; 
	cout << endl;
		
	for(int i = 0; i < n; i++){
		cout << "personaje " << i+1 << ": \n";
		cout << "nombre: "; cin >> heroe[i].name;
		cout << "vida: ";   cin >> heroe[i].health;
		heroe[i].attack();
		cout << endl;
	}
	return 0;
}
