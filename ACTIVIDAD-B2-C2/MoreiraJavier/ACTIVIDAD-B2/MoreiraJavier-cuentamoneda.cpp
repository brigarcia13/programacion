/*Nombre del programa: suma de dos numeros
 * Archivo: edadn.cpp
 * Autor: Javier Moreira
 * Fecha de elabiracion: 2022/05/10
 * Fecha de ultima actualizacion: 2022/05/19
 */



#include<iostream>
using namespace std;
int main()
{
int sa_num,sa_c=0,sa_c1=0, sa_c2=0;
float sa_x, sa_t=0,sa_t1=0,sa_t2=0,sa_mn=0.10;
cout<<"ingrese la cantidad de monedas: "; cin>>sa_num;
do
{
	cout<<"ingrese el valor de la moneda(0.10,0.25): "; cin>>sa_x;
sa_c=sa_c+1;
sa_t=sa_t+sa_x;
if (sa_x==sa_mn)
{
	sa_c1=sa_c1+1;
	sa_t1=sa_t1+sa_x;
}
else if(sa_x==0.25)
{
	sa_c2=sa_c2+1;
	sa_t2=sa_t2+sa_x;
}
}
while(sa_c<sa_num);
cout<<"//==> Nombre del programa:  contador de moneda"<<endl;
cout<<"//==> autor= Javier Moreira"<<endl;
cout<<"//==> Archivo: cuentamoneda.cpp"<<endl;
cout<<"//==> Fecha de elaboracion: 2022-05-03"<<endl; 
cout<<"//==> fecha ultima actualizacion: 2022-05-20"<<endl;

cout<<"el numero de monedas de 0.10ctvs ingresadas es de: "<<sa_c1<<endl;
	cout<<"el valor total de monedas de 0.10ctvs es: "<<sa_t1<<endl;
	cout<<"el numero de monedas de 0.25ctvs es: "<<sa_t2<<endl;
	cout<<"el valor total de monedas de 0.25ctvs es:"<<sa_t2<<endl;
	return 0;
	}

