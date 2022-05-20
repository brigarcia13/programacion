/*Nombre del programa: compara dos numeros
 * Archivo: edadn.cpp
 * Autor: Javier Moreira
 * Fecha de elabiracion: 2022/05/10
 * Fecha de ultima actualizacion: 2022/05/19
 */





#include<iostream>
using namespace std;
int main()
{
	float sa_x,sa_y;
	cout<<" ingrese x: ";cin>>sa_x;
	cout<<" ingrese y: ";cin>>sa_y;


	if(sa_x==sa_y){

cout<<"//====> Nombre del programa: compara dos numeros"<<endl;   
cout<<"//====> autor= Javier Moreira"<<endl;           
cout<<"//====> Archivo: compara.cpp"<<endl;
cout<<"//====> Fecha de elaboracion: 2022-05-03"<<endl;
cout<<"//====> fecha ultima actualizacion: 2022-05-20"<<endl;

cout<<"el valor de x= "<<sa_x<<" es igual a y= "<<sa_y<<endl;
}else{
if (sa_x<sa_y) {
	cout<<" el valor de x= "<<sa_x<<" es menor a y= "<<sa_y<<endl;
}else{
	cout<<" el valor de y= "<<sa_y<<" es menor a x= "<<sa_x<<endl;
	}
return 0;
}
}
