//====> Nombre del programa: calcular la edad   
////====> autora= Garcia Britney                   
////====> Archivo: laedad.cpp
////====> Fecha de elaboracion: 2022-05-03 
////====> fecha ultima actualizacion: 2022-05-20
#include<iostream>
using namespace std;
int main()
{
int ga_ac,ga_mc,ga_dc,ga_an,ga_mn,ga_dn,ga_año,ga_mes,ga_dia;
cout<<"ingrese el año actual: ";cin>>ga_ac;
cout<<"ingrese el mes actual: ";cin>>ga_mc;
cout<<"ingrese el dia actual: ";cin>>ga_dc;
cout<<"ingrese su año de nacimiento: ";cin>>ga_an;
cout<<"ingrese su mes de nacimiento: ";cin>>ga_mn;
cout<<"ingrese su dia de nacimiento: ";cin>>ga_dn;
if(ga_dc<ga_dn)
{
	ga_dc=ga_dc+30;
	ga_mc=ga_mc-1;
	ga_dia=ga_dc-ga_dn;
}
else
ga_dia=ga_dc-ga_dn;
if(ga_mc<ga_mn)

{
ga_mc=ga_mc+12;
ga_ac=ga_ac-1;
ga_mes=ga_mc-ga_mn;
}
else
ga_mes=ga_mc-ga_mn;

cout<<"//====> Nombre del programa: calcular la edad"<<endl;   
cout<<"//====> autora= Garcia Britney"<<endl;          
cout<<"//====> Archivo: laedad.cpp"<<endl;
cout<<"//====> Fecha de elaboracion: 2022-05-03"<<endl; 
cout<<"//====> fecha ultima actualizacion: 2022-05-20"<<endl;



cout<<"edad: "<<ga_ac-ga_an<<endl;
cout<<"mes: "<<ga_mes<<endl;
cout<<"dia: "<<ga_dia<<endl;
return 0;
}
