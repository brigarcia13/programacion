#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<" ingrese x: ";cin>>x;
	cout<<" ingrese y: ";cin>>y;


	if(x==y){
	cout<<"el valor de x= "<<x<<" es igual a y= "<<y<<endl;

	}else{
if (x<y) {
	cout<<" el valor de x= "<<x<<" es menor a y= "<<y<<endl;

	}else{
	cout<<" el valor de y= "<<y<<" es menor a x= "<<x<<endl;
	}

	}

return 0;

}
