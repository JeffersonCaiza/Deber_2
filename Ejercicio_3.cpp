# include <iostream>
using namespace std;

int main(){
	
int compra,cont=0,cont1=0,cont2=0,valor1=0,valor2=0,valor3=0;

cout<<"Bienvenido a la Universal"<<endl;
do{
cout<<"	Ingrese 0 para salir "<<endl;
cout<<"	Ingrese valor de compra"<<endl;
cin>>compra;
if(compra>1000){
	valor1=valor1+compra;
	cont=cont+1;		
}else if(compra>500 && compra<=1000){
	valor2=valor2+compra;
	cont1=cont1+1;
}else if(compra<=500){
	valor3=valor3+compra;
	cont2=cont2+1;
}

} while(compra!=0);
	cout<<"Tiene -"<< cont <<" compras mayores a 1000 = "<< valor1 <<endl;
	cout<<"Tiene -"<< cont1 <<" compras mayores a 500 pero meores o iguales a 1000 ="<< valor2 <<endl;
	cout<<"Tiene -"<< cont2 <<" compras menores o iguales a 500 ="<< valor3 <<endl;
	cout<<"Tiene compras vendidas en total ="<< valor1+valor2+valor3 << endl;
	
	return 0;
}
