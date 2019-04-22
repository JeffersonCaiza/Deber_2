#include<iostream>
using namespace std;
int main()
{
	int l,m,mi,j,v;
    double total;
    cout<<"calculo de sueldo"<<endl;
    cout<<"el costo de la hora de trabajo es de 2.50 dolares"<<endl;
    cout<<"Ingrese las horas que trabajo el lunes maximo hasta 8 horas"<<endl;
    cin>>l;
    cout<<"Ingrese las horas que trabajo el martes maximo hasta 8 horas"<<endl;
    cin>>m;
    cout<<"Ingrese las horas que trabajo el miercoles maximo hasta 8 horas"<<endl;
    cin>>mi;
    cout<<"Ingrese las horas que trabajo el jueves maximo hasta 8 horas"<<endl;
    cin>>j;
    cout<<"Ingrese las horas que trabajo el viernes maximo hasta 8 horas"<<endl;
    cin>>v;
    if ((l+m+mi+j+v)==40){
    cout<<"el total de horas trabajadas es de "<<(l+m+mi+j+v)<<" horas"<<endl;
    cout<<"el sueldo a la semana es de "<<100<<" dolares"<<endl;
    }
    else if ((l+m+mi+j+v)<40){
    total=(l+m+mi+j+v)*2.5;
    cout<<"el total de horas trabajadas es de "<<(l+m+mi+j+v)<<" horas"<<endl;
    cout<<"el sueldo a la semana es de "<<total<<" dolares"<<endl;
    }
}
