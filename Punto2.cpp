//CLASE BASICA Punto
//CON CONSTRUCTORES
//CON ATRIBUTOS PRIVADOS Y METODOS DE ACCESO

#include <iostream>
#include <cmath>
using namespace std;

class Punto
{
	//Atributos
	//private:	
	float x;
	float y;
public:    
	//Métodos
	Punto();
	Punto(float nx, float ny);
	void mostrar();
	float distancia(Punto otro);
	void set_x(float nx);
	float get_x();
	void set_y(float nx);
	float get_y();
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


void Punto::set_x(float nx)
{
	if (nx>=0)
		x=nx;
	else
		x=0;
}

float Punto::get_x()
{
	return x;
}

void Punto::set_y(float ny)
{
	if (ny>=0)
		y=ny;
	else
		y=0;
}

float Punto::get_y()
{
	return y;
}

int main(int argc, char *argv[]) {
	
	Punto punto1;
	Punto punto2(4,5);
	
	//Estas instrucciones darían un error de compilación
	//punto1.x=6;
	//cout << punto1.x;
	
	punto1.set_x(6);
	cout << punto1.get_x() << endl;
	
	punto1.mostrar();
	punto2.mostrar();
	
	cout << punto1.distancia(punto2);
	
	return 0;
}

