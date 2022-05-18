#include<iostream>
using namespace std;
int main()
{
float pd,cm,iv,vp,c=0,ttp=0,des,vb1,vb2,vd,vi;
cout<<"ingrese el numero de productos: ";cin>>cm;
cout<<"ingrese el valor del iva: "; cin>>iv;
cout<<"ingrese el descuento: "; cin>>des;
do
{
cout<<"ingrese el valor del producto: "; cin>>pd;
c=c+1;
ttp=ttp+pd;
}
while(c<cm);
vb1=ttp;
vd=(vb1*des)/100;
vb2=vb1-des;
vi=(vb1*iv)/100;
vp=vb2+iv;
cout<<"el valor de los productos: "<<ttp<<endl;
cout<<"el iva es de: "<<iv<<endl;
cout<<"el descuento es de: "<<des<<endl;
cout<<"el valor total a pagar es de: "<<vp<<endl;
return 0;
}
