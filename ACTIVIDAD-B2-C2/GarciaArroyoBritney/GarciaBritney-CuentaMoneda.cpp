#include<iostream>
using namespace std;
int main()
{
int num,c=0,c1=0, c2=0;
float x, t=0,t1=0,t2=0,mn=0.10;
cout<<"ingrese la cantidad de monedas: "; cin>>num;
do
{
	cout<<"ingrese el valor de la mameda(0.10,0.25): "; cin>>x;
c=c+1;
t=t+x;
if (x==mn)
{
	c1=c1+1;
	t1=t1+x;
}
else if(x==0.25)
{
	c2=c2+1;
	t2=t2+x;
}
}
while(c<num);
	cout<<"el numero de monedas de 0.10ctvs ingresadas es de: "<<c1<<endl;
	cout<<"el valor total de monedas de 0.10ctvs es: "<<t1<<endl;
	cout<<"el numero de monedas de 0.25ctvs es: "<<t2<<endl;
	cout<<"el valor total de monedas de 0.25ctvs es:"<<t2<<endl;
	return 0;
}
