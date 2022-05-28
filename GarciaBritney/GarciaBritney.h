int ga_compara(){
	float ga_x,ga_y;


	cout<<"//====> Nombre del programa: compara dos nuneros"<<endl;   
	cout<<"//====> autora= Garcia Britney"<<endl;           
	cout<<"//====> Archivo: compara.cpp"<<endl;
	cout<<"//====> Fecha de elaboracion: 2022-05-03"<<endl;
	cout<<"//====> fecha ultima actualizacion: 2022-05-20"<<endl;

	cout<<"el valor de x= "<<ga_x<<" es igual a y= "<<ga_y<<endl;


	cout<<" ingrese x: ";cin>>ga_x;
		cout<<" ingrese y: ";cin>>ga_y;
		if(ga_x==ga_y){


		}else{
			if (ga_x<ga_y) {
	cout<<" el valor de x= "<<ga_x<<" es menor a y= "<<ga_y<<endl;
		}else{
	cout<<" el valor de y= "<<ga_y<<" es menor a x= "<<ga_x<<endl;
					}


				}

return 0;
}

int ga_cuentamoneda(){
int ga_num,ga_c=0,ga_c1=0, ga_c2=0;
float ga_x, ga_t=0,ga_t1=0,ga_t2=0,ga_mn=0.10;


cout<<"//====> Nombre del programa:  contador de moneda"<<endl;
cout<<"//====> autora= Garcia Britney"<<endl;
cout<<"//====> Archivo: cuentamoneda.cpp"<<endl;
cout<<"//====> Fecha de elaboracion: 2022-05-03"<<endl; 
cout<<"//====> fecha ultima actualizacion: 2022-05-20"<<endl;

cout<<"ingrese la cantidad de monedas: "; cin>>ga_num;
do
{
	cout<<"ingrese el valor de la mameda(0.10,0.25): "; cin>>ga_x;
		ga_c=ga_c+1;
		ga_t=ga_t+ga_x;
		if (ga_x==ga_mn)
		{
		ga_c1=ga_c1+1;
		ga_t1=ga_t1+ga_x;
		}
		else if(ga_x==0.25)
		{
		ga_c2=ga_c2+1;
		ga_t2=ga_t2+ga_x;
		}
}while(ga_c<ga_num)

cout<<"el numero de monedas de 0.10ctvs ingresadas es de: "<<ga_c1<<endl;
cout<<"el valor total de monedas de 0.10ctvs es: "<<ga_t1<<endl;
cout<<"el numero de monedas de 0.25ctvs es: "<<ga_t2<<endl;
cout<<"el valor total de monedas de 0.25ctvs es:"<<ga_t2<<endl;
	return 0;
	}
int ga_puntoventa(){
float ga_pd,ga_cm,ga_iv,ga_vp,ga_c=0,ga_ttp=0,ga_des,ga_vb1,ga_vb2,ga_vd,ga_vi

cout<<"//====> Nombre del programa: punto de venta"<<endl;  
cout<<"////====> autora= Garcia Britney"<<endl;    
cout<<"////====> Archivo: puntoventa.cpp"<<endl;
cout<<"////====> Fecha de elaboracion: 2022-05-03"<<endl;
cout<<"////====> fecha ultima actualizacion: 2022-05-20"<<endl;

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

cout<<"el valor de los productos: "<<ga_ttp<<endl;
cout<<"el iva es de: "<<ga_iv<<endl;
cout<<"el descuento es de: "<<ga_des<<endl;
cout<<"el valor total a pagar es de: "<<ga_vp<<endl;
return 0;
}

int ga_laedad(){
int ga_ac,ga_mc,ga_dc,ga_an,ga_mn,ga_dn,ga_año,ga_mes,ga_dia;



cout<<"//====> Nombre del programa: calcular la edad"<<endl;   
cout<<"//====> autora= Garcia Britney"<<endl;          
cout<<"//====> Archivo: laedad.cpp"<<endl;
cout<<"//====> Fecha de elaboracion: 2022-05-03"<<endl; 
cout<<"//====> fecha ultima actualizacion: 2022-05-20"<<endl;

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

cout<<"edad: "<<ga_ac-ga_an<<endl;
cout<<"mes: "<<ga_mes<<endl;
cout<<"dia: "<<ga_dia<<endl;
return 0;
}

int GA_sumaN(){
float GA_n,GA_cv,GA_c=0,GA_t=0;


cout<<"//====> Nombre del programa: suma de dos numeros"<<endl;
cout<<"//====> autora= Garcia Britney"<<endl;
cout<<"//====> Archivo: suma.cpp"<<endl;
cout<<"//====> Fecha de elaboracion: 2022-05-03"<<endl;
cout<<"//====> fecha ultima actualizacion: 2022-05-20"<<endl;

cout<<"ingrese la cantidad se valores a sumar: ";cin>>GA_cv;
	do
			{
cout<<"ingrese los valores: "; cin>>GA_n;
								GA_c=GA_c+1;
								GA_t=GA_t+GA_n;
											}
		while(GA_c<GA_cv);
cout<<"el resultado de la suma es: "<<GA_t<<endl;
		return 0;
}

int ga_menu(){
int a,r,d,flag;
                                                                system("color 1f ");                                    cout<<"\nINGRESE LA OPCION QUE DESEE INGRESAR:"<<endl;
	 cout<<"\n1.->GARCIA ARROYO BRITNEY DARIANA"<<endl;
								 cout<<"\n2.->"<<endl;
								 cout<<"\n3.->"<<endl;
								 cout<<"\n4.->"<<endl;
								 cout<<"\n5.->"<<endl;
								 cout<<"\n6.->Salir"""<<endl;
								   cout<<"  "; cin>>a;
								    system("clear");                                    
								    do{
														              switch(a){                              
																					   case 1: {cout<<"\nAQUI PODRAS ENCONTRAS TODOS LOS EJERCIOS DE GARCIA ARROYO BRITNEY"<<endl;                       cout<<"\n1|->1Suma de dos numeros:"<<endl;              cout<<"\n2.|->Compara dos numeros:"<<endl;              cout<<"\n3.|->Punto de venta:"<<endl;                   cout<<"\n4.|->Contador de monedas:"<<endl;		     cout<<"\n5.|->Cacular la edad de una persona :"<<endl;
     cout<<"\n6.|->Salir :"<<endl;
									    cout<<""<<endl;
		    cout<<""; cin>>d;
		  system("clear");

switch(d){
case 1:{ga_Compara();}break;
case 2:{ga_CuentaMoneda();}break;                       case 3:{ga_Laedad();}break;                             case 4:{GA_SumaN();}break;
case 5:{ga_PuntoVenta();}break;
case 6:{cout<<"si esta seguro de salir dijite (-
							 1-)"; cout<<"     ";cout<<"Si desea regresar al menu principal"<<endl;                                             cout<<"  ";
	  cin>>r;
     if (r==1){
												                    return 0;}
								    }
}
}
}
        if(a!=6 && a>5){
 cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";                                     }
     if(a==6){                                           cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;
						  }
       flag=cin.ignore().get();
              cout<<flag;                                             }while(a!=6);


	              return(0);

		      }
