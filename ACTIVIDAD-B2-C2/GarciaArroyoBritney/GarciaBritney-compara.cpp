////====> Nombre del programa: calcular la edad   
////====> autora= Garcia Britney                   
////====> Archivo: laedad.cpp
////====> Fecha de elaboracion: 2022-05-03 
////====> fecha ultima actualizacion: 2022-05-20

#include<iostream>
using namespace std;
int main()
{
	float ga_x,ga_y;
	cout<<" ingrese x: ";cin>>ga_x;
	cout<<" ingrese y: ";cin>>ga_y;


	if(ga_x==ga_y){

cout<<"//====> Nombre del programa: compara dos nuneros"<<endl;   
cout<<"//====> autora= Garcia Britney"<<endl;           
cout<<"//====> Archivo: compara.cpp"<<endl;
cout<<"//====> Fecha de elaboracion: 2022-05-03"<<endl;
cout<<"//====> fecha ultima actualizacion: 2022-05-20"<<endl;


	cout<<"el valor de x= "<<ga_x<<" es igual a y= "<<ga_y<<endl;

	}else{
if (ga_x<ga_y) {
	cout<<" el valor de x= "<<ga_x<<" es menor a y= "<<ga_y<<endl;

	}else{
	cout<<" el valor de y= "<<ga_y<<" es menor a x= "<<ga_x<<endl;
	}

	}

return 0;

}
