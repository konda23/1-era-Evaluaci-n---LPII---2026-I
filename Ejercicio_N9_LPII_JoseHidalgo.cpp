#include <iostream>
using namespace std;
int main(){
	float rango1=0;
	float rango2=0;
	float rango3=0;
	float rango4=0;
	
	cout<<"Ingrese el primer numero del primer rango (de que tabla a que tabla)"<<endl;
	cin>>rango1;
	cout<<"Ingrese el segundo numero del primer rango (de que tabla a que tabla)"<<endl;
	cin>>rango2;
	cout<<"Ingrese el tercer numero del segundo rango (de que tabla a que tabla)"<<endl;
	cin>>rango3;
	cout<<"Ingrese el cuarto numero del segundo rango (de que tabla a que tabla)"<<endl;
	cin>>rango4;
	
	//suma
	for (int i=rango1 ; i<=rango2 ; i++){

		for (int j=rango3 ; j<=rango4; j++){

		cout<<i<<" + "<<j<<" = "<<i+j<<endl;
		}
		
	}
	cout<<endl;	
	//resta	
	for (int i=rango1 ; i<=rango2 ; i++){

		for (int j=rango3 ; j<=rango4; j++){

		cout<<i<<" - "<<j<<" = "<<i-j<<endl;
	}
	//multiplicacion
	cout<<endl;
	}
	
	for (int i=rango1 ; i<=rango2 ; i++){

		for (int j=rango3 ; j<=rango4; j++){

		cout<<i<<" x "<<j<<" = "<<i*j<<endl;
	}
	}
	//division
	cout<<endl;
		
	for (float i=rango1 ; i<=rango2 ; i++){
		
		for (float j=rango3 ; j<=rango4; j++){
	
		cout<<i<<" / "<<j<<" = "<<i/j<<endl;
	}
	}
	return 0;
	}
