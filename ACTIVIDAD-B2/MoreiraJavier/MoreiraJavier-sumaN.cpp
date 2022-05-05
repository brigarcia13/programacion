#include<iostream>
using namespace std;
int main()
{
	float n,cv,c=0,t=0;
	cout<<"ingrese la cantidad se valores a sumar: ";cin>>cv;
	do
	{
		cout<<"ingrese los valores: "; cin>>n;
		c=c+1;
		t=t+n;
	}
	while(c<cv);
	cout<<"el resultado de la suma es: "<<t<<endl;
	return 0;
} 

