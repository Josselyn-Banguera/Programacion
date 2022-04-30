#include<iostream>
using namespace std;
int main()
{
	int c=0, P;
	float a=0,x,tb,viva,vdes,iva=0.12,des=0.30,vf;
	cout<<"Ingrese la cantidad de productos: ";
	cin>>P;
	do{
		cout<<"Ingrese el valor de los productos: ";
		cin>>x;
		c=c+1;
		a=a+x;
		viva=a*iva;
		cout<<"El valor del iva de la compra es de: $"<<viva<<endl;
		vdes=a*des;
		cout<<"El valor del descuento de su compra es de:$"<<vdes<<endl;
		tb=viva+vdes;
	}while(c<P);
	if(tb==a){
		cout<<"Su compra aplica para un descuento: "<<tb<<endl;
	iva=tb*viva/100;
	des=tb*vdes/100;
}else{
	vf=a+viva-vdes;
	cout<<"El valor final es de:$ "<<vf<<endl;
}
return 0;
}
