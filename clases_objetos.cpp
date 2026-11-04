#include <iostream>
using namespace std;

class character{
private:
	string name;
	int health;
public:
	character(string n, int h) {name = n; health = h;}
	
	void setName(string n){name = n;}
	string getName() {return name;} /*darse cuenta que la funion es de tipo 
	a la variable q se retorna (se retorna "name" asi que la funcion es de tipo string)*/
	void setHealth(int h){health = h;}
	int getHealth() {return health;}
	
	void attack(){
		cout << name << " ataca con " << health << " vida" << endl;
	}
	
};

int main (){
	
	character hero("Goku", 100);
	hero.attack();
	hero.setHealth(80);
	cout << hero.getName() << ", tiene ahora: "<< hero.getHealth() << " vida" << endl;
	
	return 0;
}





