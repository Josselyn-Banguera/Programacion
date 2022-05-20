//=======Nombre del programa: PUNTO VENTA  
//====Archivo: GironGenesis-PuntoVenta.cpp
//====Autor: Giron Genesis 
//====Fecha de elaboración: 02-05-2022
//====Fecha de última actualización: 19-05-2022

#include<iostream>
using namespace std;
int main()
{
	int GG_c=0, GG_P;
	float GG_a=0, GG_x, GG_tb, GG_viva, GG_vdes, GG_iva=0.12, GG_des=0.30, GG_vf;
	cout<<"Ingrese la cantidad de productos: ";
	cin>>GG_P;
	do{
	cout<<"Ingrese el valor de los productos: ";
		cin>>GG_x;
		GG_c=GG_c+1;
		GG_a=GG_a+GG_x;
		GG_viva=GG_a*GG_iva;
cout<<"El valor del iva de la compra es de: $"<<GG_viva<<endl;
		GG_vdes=GG_a*GG_des;
cout<<"El valor del descuento de su compra es de:$"<<GG_vdes<<endl;
		GG_tb=GG_viva+GG_vdes;
	}while(GG_c<GG_P);
	if(GG_tb==GG_a){
cout<<"Su compra aplica para un descuento: "<<GG_tb<<endl;
	GG_iva=GG_tb*GG_viva/100;
	GG_des=GG_tb*GG_vdes/100;
}else{
	GG_vf=GG_a+GG_viva-GG_vdes;

cout<<"//=======Nombre del programa: PUNTO VENTA"<<endl;   cout<<"//====Archivo: GironGenesis-PuntoVenta.cpp "<<endl; cout<<"//====Autor: Giron Genesis "<<endl;                 cout<<"//====Fecha de elaboración: 02-05-2022 "<<endl;     cout<<"//====Fecha de última actualización: 19-05-2022 "<<endl;
cout<<"El valor final es de:$ "<<GG_vf<<endl;
}
return 0;
}
