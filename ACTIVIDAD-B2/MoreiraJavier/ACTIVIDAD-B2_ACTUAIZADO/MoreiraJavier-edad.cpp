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
int sa_ac,sa_mc,sa_dc,sa_an,sa_mn,sa_dn,sa_a,sa_m,sa_d;
cout<<"ingrese el año actual: ";cin>>sa_ac;
cout<<"ingrese el mes actual: ";cin>>sa_mc;
cout<<"ingrese el dia actual: ";cin>>sa_dc;
cout<<"ingrese su año de nacimiento: ";cin>>sa_an;
cout<<"ingrese su mes de nacimiento: ";cin>>sa_mn;
cout<<"ingrese su dia de nacimiento: ";cin>>sa_dn;
if(sa_dc<sa_dn)
{
        sa_dc=sa_dc+30;
        sa_mc=sa_mc-1;
        sa_d=sa_dc-sa_dn;
}
else
sa_d=sa_dc-sa_dn;
if(sa_mc<sa_mn)

{
sa_mc=sa_mc+12;
sa_ac=sa_ac-1;
sa_m=sa_mc-sa_mn;
}
else
sa_m=sa_mc-sa_mn;
cout<<"edad: "<<sa_ac-sa_an<<endl;
cout<<"mes: "<<sa_m<<endl;
cout<<"dia:"<<sa_d<<endl;
cout<<"\n\n\n"<<endl;


cout<<"Nombre del programa: suma de dos numeros"<<endl;
cout<<"Archivo: edadn.cpp"<<endl;
cout<<"Autor: Javier Moreira"<<endl;
cout<<"Fecha de elaboracion: 2022/05/10"<<endl;
cout<<"Fecha de ultima actualizacion: 2022/05/19"<<endl;
return 0;
}
