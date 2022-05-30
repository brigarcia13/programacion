/*Realizar un programa que ejecute un menu en el cual se desglosen diferentes tipos de programas y poder trabajar en ellos sin ningun tipo de error
 * Autor: Steven Javier Moreira Angulo
 * Fecha de creacion: 14/05/2022
 * Fecha de actualizacion: 19/05/2022
 */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main ()
      {                                                                                                                                                                               

int opc,cv,n,num,x,c1=0,c2=0,ac,mc,dc,an,mn1,dn,año,mes,dia,y,salir;
float c=0,t=0,t1=0,t2=0,mn=0.10,pd,cm,iv,vp,ttp=0,des,vb1,vb2,vd,vi,a=0;

system("clear");

cout<<"Bienvenidos al menu del programa multitareas"<<endl;

cout<<"Autor: Javier Moreira"<<endl;

cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;

cout<<"1.-Suma de numeros."<<endl;

cout<<"2.-Compara numeros."<<endl;

cout<<"3.-Punto de venta."<<endl;

cout<<"4.-Calcule su edad."<<endl;

cout<<"5.-Contador de monedas."<<endl;

cout<<"6.-salir de programa."<<endl;

cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;

cin>>opc;
 
system("clear"); 

 switch(opc){
              


	 case 1:
		 /*
		  *int c=0,n;
        float x,a=0;                                                      */                                                            cout<<"Ingrese la cantidad de numers a sumr"; cin>>n;                                    
		 do{                                                                     cout<<"Ingrese x: "; cin>>x;                                    c=c+1;                                                          a=a+1;                                                  }while(c<n);
        cout<<"el resultado de la suma de  "<<n<< "Numeros fue : "<<a<<endl;     
  


		 cout<<"(1) Deseas salir del programa."<<endl;                   cout<<"(2) volver al menu principal."<<endl;                                                                                    cin>>salir; 

		 if(salir==1){     


			 return 0;                                                                                                              }                                                               else                                                            {                                                                       return main();                                          }
                 

		break;
                 


	        case 2:   



		//float x,y;


	
	cout<<" ingrese x: ";cin>>x;
	cout<<" ingrese y: ";cin>>y;
	if(x==y){

	cout<<"el valor de x= "<<x<<" es igual a y= "<<y<<endl;
        
	}
	else{

	if (x<y) {

	cout<<" el valor de x= "<<x<<" es menor a y= "<<y<<endl;
        
	}
	else{

	cout<<" el valor de y= "<<y<<" es menor a x= "<<x<<endl;
	}

}

cout<<"(1) Deseas salir del programa."<<endl;                   cout<<"(2) volver al menu principal."<<endl;                                                                                    cin>>salir;                                                     if(salir==1){                                                                                                                            return 0;                                                                                                              }                                                               else                                                            {                                                                       return main();                                          }
break;


		 case 3:                                                                                                                //float pd,cm,iv,vp,c=0,ttp=0,des,vb1,vb2,vb,vi;
cout<<"ingrese el numero de productos:";cin>>cm;
cout<<"ingrese el valor del iva:";cin>>iv;
cout<<"ingrese el descuento:";cin>>des;
do
{
cout<<"ingrese el valor del producto:";cin>>pd;
c=c+1;
ttp=ttp+pd;                                                                                                                             }                                                                                                                                       while(c<cm);                                                                                                                            vb1=ttp;
vd=(vb1*des)/100;
vb2=vb1-des;
vi=(vb1*iv)/100;
vp=vb2+iv;
cout<<"el valor de los productos es:"<<ttp<<endl;
cout<<"el iva es de:"<<iv<<endl;
cout<<"el descuento es de:"<<des<<endl;
cout<<"el valor total a pagar es de:"<<vp<<endl;
cout<<"(1) Deseas salir del programa.\n\n\n"<<endl;           
cout<<"(2) volver al menu principal."<<endl;

cin>>salir;                                                     if(salir==1){                                                                                                                            return 0;                                                                                                              }                                                             
else                                                            {
	return main();
}
break;
                 case 4:
		 
//int ac,mc,dc,an,mn,dn,año,mes,dia;
cout<<"ingrese el año actual: ";cin>>ac;
cout<<"ingrese el mes actual: ";cin>>mc;
cout<<"ingrese el dia actual: ";cin>>dc;
cout<<"ingrese su año de nacimiento: ";cin>>an;
cout<<"ingrese su mes de nacimiento: ";cin>>mn1;
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
cout<<"(1) Deseas salir del programa."<<endl;                   cout<<"(2) volver al menu principal."<<endl;                                                                                    cin>>salir;                                                     if(salir==1){                                                                                                                            return 0;                                                                                                              }                                                               else                                                            {                                                                       return main();                                          }

break;



                 case 5:

          cout<<"ingrese la cantidad de monedas"<<endl;
          cin>>num;
do
          {
  cout<<"ingrese el valor de la moneda(0.10$,0.25$):"<<endl;
             cin>>x;
             c=c+1;
             t=t+x;
            if(x==mn)
          {
             c1=c1+1;
             t1=t1+x;
          }
          else                                                            if(x==0.25)                                                                                                                     {                                                                                                                               c2=c2+1;
          t2=t2+x;
          }

}
while(c<num);
cout<<"el numero de monedas de 0.10$ctvs ingresadas es de:"<<c1<<endl;
cout<<"el valor total de moneda de 0.10$ctvs es:"<<t1<<endl;
cout<<"el numero de monedas de 0.25$cntvses:"<<t2<<endl;
cout<<"el valor total de monedas de 0.25$ctvs es:"<<t2<<endl;
cout<<"(1) Deseas salir del programa."<<endl;                   cout<<"(2) volver al menu principal."<<endl;                                                                                    cin>>salir;                                                     if(salir==1){                                                                                                                            return 0;                                                                                                              }                                                               else                                                            {                                                                       return main();                                          }
break;


case 6:
 cout<<"1.-Salir totalmente  del programa?"<<endl;
 cout<<"2.-Regresar al menu principal"<<endl;
 cin>>salir;
 if(salir==1){

	  return 0;

 }
else 
{
return main();
}
break;
 

}
                                                                                                      
}
