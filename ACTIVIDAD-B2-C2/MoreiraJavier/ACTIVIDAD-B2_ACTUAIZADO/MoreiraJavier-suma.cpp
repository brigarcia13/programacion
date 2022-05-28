/*Nombre del programa: suma de dos numeros                       * Archivo: edadn.cpp                                            * Autor: Javier Moreira
 * Fecha de elabiracion: 2022/05/10                              * Fecha de ultima actualizacion: 2022/05/19                     */


#include<iostream>
using namespace std;
int main()
{
	float GA_n,GA_cv,GA_c=0,GA_t=0;
	cout<<"ingrese la cantidad se valores a sumar: ";cin>>GA_cv;
	do
	{
		cout<<"ingrese los valores: "; cin>>GA_n;
		GA_c=GA_c+1;
		GA_t=GA_t+GA_n;
	}
	while(GA_c<GA_cv);
cout<<"//====> Nombre del programa: suma de dos numeros"<<endl;
cout<<"//====> autor:Javier Moreira"<<endl;
cout<<"//====> Archivo: suma.cpp"<<endl;
cout<<"//====> Fecha de elaboracion: 2022-05-03"<<endl;
cout<<"//====> fecha ultima actualizacion: 2022-05-20"<<endl;
	

cout<<"El resultado de la suma es: "<<GA_t<<endl;
	return 0;
}

