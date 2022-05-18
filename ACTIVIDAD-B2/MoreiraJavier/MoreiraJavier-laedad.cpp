#include<iostream>
using namespace std;
int main()
{
int ac,mc,dc,an,mn,dn,año,mes,dia;
cout<<"ingrese el año actual: ";cin>>ac;
cout<<"ingrese el mes actual: ";cin>>mc;
cout<<"ingrese el dia actual: ";cin>>dc;
cout<<"ingrese su año de nacimiento: ";cin>>an;
cout<<"ingrese su mes de nacimiento: ";cin>>mn;
cout<<"ingrese su dia de nacimiento: ";cin>>dn;
if(dc<dn)
{
	dc=dc+30;
	mc=mc-1;
	dia=dc-dn;
}
else
dia=dc-dn;
if(mc<mn)

{ 
mc=mc+12;
ac=ac-1;
mes=mc-mn;
}
else
mes=mc-mn;
cout<<"edad: "<<ac-an<<endl;
cout<<"mes: "<<mes<<endl;
cout<<"dia: "<<dia<<endl;
return 0;
}
