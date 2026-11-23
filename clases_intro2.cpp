#include <iostream>
using namespace std;

class character {
private:
	string name;
	int health;
public:
	character(string n, int h){name = n; health = h;} //constructor
		
	void setName(string n){name = n;}  //metodo set
	string getName(){return name;}     //metodo Get
	void setHealth(int h){health = h;} //metodo set
	int getHealth(){return health;}    //metodo Get
	
	void attack(); //protitipo de la funcion "attack" <***********
                                        //                       *
};									    // 	                     *
void character::attack(){ //definición de la función "attack" <***
	cout << name << " ataca con " << health << " de vida." << endl;}


int main(){
	
	character heroe("Goku", 100	); // constructor para inicializar atributos de Goku
	heroe.attack();
	heroe.setHealth(80);
	cout << heroe.getName() << ", tiene ahora: " << heroe.getHealth() << " de vida." << endl;
	
	return 0;
}
