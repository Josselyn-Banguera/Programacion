//=======Nombre del programa: Cuenta moneda
//====Archivo: AldoCarvajalk-CuentaMoneda.cpp
//====Autor: Carvajal Aldo
//====Fecha de creacion: 03-05-2022
//====Fecha de ultima actualizacion: 19-05-2022
#include<iostream>
using namespace std;

int main()
{
	int CA_n, CA_c=0, CA_c1=0, CA_c2=0;
	float CA_x, CA_a=0, CA_a1=0, CA_a2=0;
	cout<<"Ingrese la cantida de monedas: ";
	cin>>CA_n;
	do{
	cout<<"Ingrese cual es el valor de la moneda (0.10,0.25) : ";
	cin>>CA_x;
	CA_c=CA_c+1;
	CA_a=CA_a+CA_x;
	if(CA_x==0.10){

		CA_c1=CA_c1+1;
		CA_a1=CA_a1+CA_x;
	}else{
		CA_c2=CA_c2+1;
		CA_a2=CA_a2+CA_x;
	}
	}while(CA_c<CA_n);
	cout<<"El resultado es : "<<endl;
	cout<<"Cantidad de monedas ingresadas : "<<CA_c<<endl;
	cout<<"El total del dinero contado es de : "<<CA_a<<endl;
	cout<<"Monedas ingresadas de 0.10 ctvos es de :"<<CA_c1<<endl;
	cout<<"Cantidad total de monedas de 0.10 ctvos es de : "<<CA_a1<<endl;
	cout<<"Monedas ingresadas de 0.25 ctvos es de : "<<CA_c2<<endl;
	cout<<"Cantidad total de monedas de 0.25 ctvos es de : "<<CA_a2<<endl;

cout<<"//=======Nombre del programa: Cuenta Moneda "<<endl;
cout<<"//====Archivo: AldoCarvajalk-CuebtaMoneda.cpp"<<endl;
cout<<"//====Autor: Carvajal Aldo"<<endl;
cout<<"//====Fecha de creacion: 03-05-2022"<<endl;
cout<<"//====Fecha de ultima actualizacion: 19-05-2022"<<endl;

	return (0);
}
