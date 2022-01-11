// DEFINICION BASICA DE UNA CLASE
// CON DOS CONSTRUCTORES
#include <iostream>
#include <cmath>
using namespace std;

class Punto
{
	//Atributos
public:
	float x;
	float y;
	
	//Métodos
	Punto();
	Punto(float nx, float ny);
	void mostrar();
	float distancia(Punto otro);
};    

Punto::Punto()
{
	x=0;
	y=0;
	//mostrar();
}

Punto::Punto(float nx, float ny)
{
	x=nx;
	y=ny;
}

void Punto::mostrar()
{
	cout << x << "-" << y << "\n";
}

float Punto::distancia(Punto otro)
{
	float dx, dy;
	dx = x - otro.x;
	dy = y - otro.y;
	return sqrt(dx*dx + dy*dy);
}


int main(int argc, char *argv[]) {
	
	Punto punto1;		//llamada ímplicita al constructor por defecto
	Punto punto2(4,5);	//lamada explícita al segundo constructor
	punto1.mostrar();

	punto2.mostrar();

	cout << punto1.distancia(punto2);
	
	//constructor explícito 
	int num1 = int(5);	//no suele usarse con tipos básicos
	int num2(5);		// otra forma más compacta, tampoco suele usarse
	
	//constructor ímplicito 
	int num3 = 5;				
	
	cout << "\n\nnum1: " << num1 << "; num2: " << num2 << "; num3: " << num3 << "\n";	
	
	return 0;
}
