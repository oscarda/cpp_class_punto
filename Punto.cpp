// DEFINICION BASICA DE UNA CLASE

#include <iostream>
using namespace std;

class Punto
{
	//Atributos
public:
	float x;
	float y;
	
	//Métodos
	void mostrar();
	
};    

void Punto::mostrar()
{
	cout << x << "-" << y;
}

int main(int argc, char *argv[]) {
	
	Punto punto1;
	punto1.x=4;
	punto1.y=18;
	cout << punto1.x << endl;
	punto1.mostrar();
	
	return 0;
}
