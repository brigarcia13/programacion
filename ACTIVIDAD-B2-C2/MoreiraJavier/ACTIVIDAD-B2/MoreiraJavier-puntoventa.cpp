
/*Nombre del programa: punto de venta 
 * Archivo: edadn.cpp
 * Autor: Javier Moreira
 * Fecha de elabiracion: 2022/05/10
 * Fecha de ultima actualizacion: 2022/05/19
 */





#include<iostream>
using namespace std;
int main()
{
float sa_pd,sa_cm,sa_iv,sa_vp,sa_c=0,sa_ttp=0,sa_des,sa_vb1,sa_vb2,sa_vd,sa_vi;
cout<<"ingrese el numero de productos: ";cin>>sa_cm;
cout<<"ingrese el valor del iva: "; cin>>sa_iv;
cout<<"ingrese el descuento: "; cin>>sa_des;
do
{
cout<<"ingrese el valor del producto: "; cin>>sa_pd;
sa_c=sa_c+1;
sa_ttp=sa_ttp+sa_pd;
}
while(sa_c<sa_cm);
sa_vb1=sa_ttp;
sa_vd=(sa_vb1*sa_des)/100;
sa_vb2=sa_vb1-sa_des;
sa_vi=(sa_vb1*sa_iv)/100;
sa_vp=sa_vb2+sa_iv;
cout<<"//====> Nombre del programa: punto de venta"<<endl;  
cout<<"////====> autor= Javier Moreira"<<endl;    
cout<<"////====> Archivo: puntoventa.cpp"<<endl;
cout<<"////====> Fecha de elaboracion: 2022-05-03"<<endl;
cout<<"////====> fecha ultima actualizacion: 2022-05-20"<<endl;


cout<<"el valor de los productos: "<<sa_ttp<<endl;
cout<<"el iva es de: "<<sa_iv<<endl;
cout<<"el descuento es de: "<<sa_des<<endl;
cout<<"el valor total a pagar es de: "<<sa_vp<<endl;
return 0;
}
