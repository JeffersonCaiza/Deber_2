#include <iostream>
using namespace std;


int main() {
	double costo=0;
	int tiempo, op, jor; 
	
	cout<<"Ingrese el tiempo de duracion de la llamada (minutos): "<<endl;
	cin>>tiempo;
	
	if(tiempo <= 5 ){
		costo = tiempo * 1;
	} 
	
	if(tiempo > 5 && tiempo <= 8){
		costo = 5 + ((tiempo - 5 ) * 0.80);
	}
	
	if(tiempo > 8 && tiempo <= 10){
		costo = 7.4 + ((tiempo - 8 ) * 0.70);
	}
	
	if(tiempo > 10 ){
		costo = 8.8 + ((tiempo - 10 ) * 0.50);
	}
	
	cout<<"\t En que dia se realizo la llamada?"<<endl;
	cout<<"\n1. Se realizo el dia domingo."<<endl;
	cout<<"2. Se realizo entre lunes y sabado."<<endl;
	cout<<"\nElija una opcion (1 o 2):"<<endl;
	cin>>op;
	
	if(op == 1){
		costo = costo + (costo*0.03);
	} else if(op ==2){
		cout<<"\tLa llamada se relizo en: "<<endl;
		cout<<"\n1. Jornada matutina."<<endl;
		cout<<"2. Jornada vespertina."<<endl;
		cout<<"\nElija una opcion (1 o 2)."<<endl;
		cin>>jor;
		if(jor==1){
			costo = costo + (costo*0.15);
		} else if(jor==2){
			costo = costo + (costo*0.10);
		}
	}
	
	cout<<"El precio de su llamada es de: $"<<costo<<endl;
	
	return 0;
}
