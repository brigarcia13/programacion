/*Nombre del programa: suma de dos numeros                       * Archivo: edadn.cpp                                            * Autor: Javier Moreira
 * Fecha de elabiracion: 2022/05/10                              * Fecha de ultima actualizacion: 2022/05/19                     */


#include<iostream>
using namespace std;
int main()
{
	float sa_n,sa_cv,sa_c=0,sa_t=0;
	cout<<"ingrese la cantidad se valores a sumar: ";cin>>sa_cv;
	do
	{
		cout<<"ingrese los valores: "; cin>>sa_n;
		sa_c=sa_c+1;
		sa_t=sa_t+sa_n;
	}
	while(sa_c<sa_cv);
cout<<"//====> Nombre del programa: suma de dos numeros"<<endl;
cout<<"//====> autor:Javier Moreira"<<endl;
cout<<"//====> Archivo: suma.cpp"<<endl;
cout<<"//====> Fecha de elaboracion: 2022-05-03"<<endl;
cout<<"//====> fecha ultima actualizacion: 2022-05-20"<<endl;
	

cout<<"El resultado de la suma es: "<<sa_t<<endl;
	return 0;
}

