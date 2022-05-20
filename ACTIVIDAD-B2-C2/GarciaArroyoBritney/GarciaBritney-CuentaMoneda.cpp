//====> Nombre del programa:  contador de monedas
//====> autora= Garcia Britney                   
//====> Archivo: cuentamoneda.cpp
//====> Fecha de elaboracion: 2022-05-03 
//====> fecha ultima actualizacion: 2022-05-20


#include<iostream>
using namespace std;
int main()
{
int ga_num,ga_c=0,ga_c1=0, ga_c2=0;
float ga_x, ga_t=0,ga_t1=0,ga_t2=0,ga_mn=0.10;
cout<<"ingrese la cantidad de monedas: "; cin>>ga_num;
do
{
	cout<<"ingrese el valor de la mameda(0.10,0.25): "; cin>>ga_x;
ga_c=ga_c+1;
ga_t=ga_t+ga_x;
if (ga_x==ga_mn)
{
	ga_c1=ga_c1+1;
	ga_t1=ga_t1+ga_x;
}
else if(ga_x==0.25)
{
	ga_c2=ga_c2+1;
	ga_t2=ga_t2+ga_x;
}
}
while(ga_c<ga_num);
cout<<"//====> Nombre del programa:  contador de moneda"<<endl;
cout<<"//====> autora= Garcia Britney"<<endl;
cout<<"//====> Archivo: cuentamoneda.cpp"<<endl;
cout<<"//====> Fecha de elaboracion: 2022-05-03"<<endl; 
cout<<"//====> fecha ultima actualizacion: 2022-05-20"<<endl;




	cout<<"el numero de monedas de 0.10ctvs ingresadas es de: "<<ga_c1<<endl;
	cout<<"el valor total de monedas de 0.10ctvs es: "<<ga_t1<<endl;
	cout<<"el numero de monedas de 0.25ctvs es: "<<ga_t2<<endl;
	cout<<"el valor total de monedas de 0.25ctvs es:"<<ga_t2<<endl;
	return 0;
}
