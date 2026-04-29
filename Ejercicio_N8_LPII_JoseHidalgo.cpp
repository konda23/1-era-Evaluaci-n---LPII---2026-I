//realice un programa que calcule el promedio de 10 notas ingresadas por teclado y basado en ese promedio
//si es mayor o igual a 10 muestre en pantalla "usted esta aprobado + nombre del estudiante". De lo contrario
//"usted esta reprobado + nombre del estudiante". Valide que las notas esten en un rango de 1 a 20 pts.

#include <iostream>
using namespace std;
int main(){
	int notas=0;
	float promedio=0;
	string nombre;
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	for(int i=0; i<10 ; i++){
		cout<<"Ingrese su nota N#"<<i+1<<":";
		cin>>notas;
		promedio = promedio + notas;
		while (notas<1 && notas>20){
			cout<<"Ingreso una nota que no se encuentra en el rango de 1 a 20 pts";
		}
	}
	promedio = promedio / 10;
	if (promedio >=10 && promedio<=20){
		cout<<"Usted esta aprobado "<<nombre;
	}
	else {
		cout<<"usted esta reprobado"<<nombre;
	}
	return 0;
}                                      
                                      