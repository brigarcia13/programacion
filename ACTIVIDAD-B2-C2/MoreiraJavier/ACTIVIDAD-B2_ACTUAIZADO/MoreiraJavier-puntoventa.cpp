
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
float ga_pd,ga_cm,ga_iv,ga_vp,ga_c=0,ga_ttp=0,ga_des,ga_vb1,ga_vb2,ga_vd,ga_vi;
cout<<"ingrese el numero de productos: ";cin>>ga_cm;
cout<<"ingrese el valor del iva: "; cin>>ga_iv;
cout<<"ingrese el descuento: "; cin>>ga_des;
do
{
cout<<"ingrese el valor del producto: "; cin>>ga_pd;
ga_c=ga_c+1;
ga_ttp=ga_ttp+ga_pd;
}
while(ga_c<ga_cm);
ga_vb1=ga_ttp;
ga_vd=(ga_vb1*ga_des)/100;
ga_vb2=ga_vb1-ga_des;
ga_vi=(ga_vb1*ga_iv)/100;
ga_vp=ga_vb2+ga_iv;
cout<<"//====> Nombre del programa: punto de venta"<<endl;  
cout<<"////====> autor= Javier Moreira"<<endl;    
cout<<"////====> Archivo: puntoventa.cpp"<<endl;
cout<<"////====> Fecha de elaboracion: 2022-05-03"<<endl;
cout<<"////====> fecha ultima actualizacion: 2022-05-20"<<endl;


cout<<"el valor de los productos: "<<ga_ttp<<endl;
cout<<"el iva es de: "<<ga_iv<<endl;
cout<<"el descuento es de: "<<ga_des<<endl;
cout<<"el valor total a pagar es de: "<<ga_vp<<endl;
return 0;
}
