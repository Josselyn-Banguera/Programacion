//=======Nombre del programa: Punto de venta
//====Nombre del archivo: AldoCarvajalk-Compara.cpp
//====Autor: Carvajal Aldo
//====Fecha de elaboracion: 03-05-2022
//====Fecha de ultima actualizacion: 19-05-2022

#include<iostream>
using namespace std;
int main()
{
	int CA_c=0, CA_P;
	float CA_A=0,CA_x,CA_Tb,CA_Piva,CA_Pdsc,CA_iva=0.12,CA_dsc=0.30,CA_vt;
	cout<<"Ingrese la cantidad de productos: ";
	cin>>CA_P;
	do{
		cout<<"Ingrese el valor de los productos: ";
		cin>>CA_x;
		CA_c=CA_c+1;
		CA_A=CA_A+CA_x;
		CA_Piva=CA_A*CA_iva;
		cout<<"El valor del iva de la compra es de: $"<<CA_Piva<<endl;
		CA_Pdsc=CA_A*CA_dsc;
		cout<<"El valor del descuento de su compra es de:$"<<CA_Pdsc<<endl;
		CA_Tb=CA_Piva+CA_Pdsc;
	}while(CA_c<CA_P);
	if(CA_Tb==CA_A){
		cout<<"Su compra aplica para un descuento: "<<CA_Tb<<endl;
	CA_iva=CA_Tb*CA_Piva/100;
	CA_dsc=CA_Tb*CA_Pdsc/100;
}else{
	CA_vt=CA_A+CA_Piva-CA_Pdsc;

//=======Nombre del programa: Punto de venta
//====Nombre del archivo: AldoCarvajalk-Compara.cpp
//====Autor: Carvajal Aldo
//====Fecha de elaboracion: 03-05-2022
//====Fecha de ultima actualizacion: 19-05-2022

	cout<<"El valor total es de:$ "<<CA_vt<<endl;
}
return(0);
}
