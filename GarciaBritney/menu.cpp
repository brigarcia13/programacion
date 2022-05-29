// Autores: Garcia Arroyo Britney Dariana
// Fecha de creación: 2022-05-28
// Fecha de ultima actualizacion: 2022-05-28 
//#include<iostream>
//#include<cstdlib>                            
//using namespace std;  
//librerias                                             #include"GarciaBritney.h"                                                                                                                                                
 int main() {                                         
int a,r,d,flag;                                                                                              
do{                                            
system("clear");          
    	  cout<<"\nINGRESE LA OPCION QUE DESEE INGRESAR:"<<endl;
    	  cout<<"\n1.->GARCIA ARROYO BRITNEY DARIANA"<<endl;      
   	  cout<<"\n2.->trabajo del estudiante 2"<<endl;          
    	  cout<<"\n3.->trabajo del estudiante 3"<<endl;      
   	  cout<<"\n4.->trabajo del estudiange 4"<<endl; 
    	  cout<<"\n5.->Salir"""<<endl;              

	  cout<<"  "; cin>>a;  

	  system("clear");                                                                                                 switch(a){                                              
   	  case 1: cout<<"\nEJERCICIOS DE GARCIA ARROYO BRITNEY"<<endl;     
		  cout<<"\n1.|-Compara dos numeros:"<<endl;
    	          cout<<"\n2.|-Contador de monedas:"<<endl;
	   
     	          cout<<"\n3.|-Cacular la edad de una persona:"<<endl;
     	          cout<<"\n4.|-Suma de numeros:"<<endl;

		  cout<<"\n5.|-Punto de venta :"<<endl;                   
		  cout<<"\n6.|-Salir :"<<endl;
    	  
		  cout<<""<<endl; cin>>d;   
    	 
		  system ("clear");
     	  	
		  switch (d) {                                     
    	  	 
		case 1: {ga_Compara();}break;                           
		case 2: {ga_CuentaMoneda();} break;                    
		case 3: {ga_Laedad();} break;                           
		case 4: {GA_SumaN();} break;                            
		case 5: {ga_PuntoVenta();} break;
    	  	  
		case 6: {cout<<"PARA SALIR PRESIONE (1)"; cout<<"     ";cout<<"PARA VOLVER AL MENU PRINCIPAL PRESIONE (2) "<<endl;  	
	 	
		cout<<"  "; 
		
		cin>>r;						        
                system("clear");
    	  	   					if (r==1){                                           
    	  	   					       return 0;}					     	  	   					   }
							   }   
//=========================================================================================
																					//========================================================================================                         
																					}                                                             							 
	  if(a!=6 && a>5){                                     
cout<< "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";                             
    	  	   																		          }
											          			 if(a==5){                                          								 cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;
