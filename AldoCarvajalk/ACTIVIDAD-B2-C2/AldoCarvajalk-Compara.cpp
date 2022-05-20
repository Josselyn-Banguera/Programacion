//=======Nombre del programa:Compara de dos numeros
//====Archivo: AldoCarvajalk-Compara.cpp
//====Autor:Carvajal Aldo
//====Fecha de elaboracion: 03-05-2022
//====Fecha de ultima actualizacion: 19-05-2022
#include<iostream>
using namespace std;
int main()
{
	float CA_A,CA_B;
	cout<<"ingrese CA_A:";
	cin>>CA_A;
	cout<<"ingrese CA_B:";
	cin>>CA_B;
	if(CA_A==CA_B) {
	cout<<"El valor de CA_A= "<<CA_A<<" es igual a CA_B "<<CA_B<<endl;

	}else{
		if(CA_A<CA_B){

cout<<"//=======Nombre de programa: Compara de dos numeros"<<endl;
cout<<"//====Archivo: AldoCarvajalk-Compara.cpp"<<endl;
cout<<"//====Autor: Carvajal Aldo"<<endl;
cout<<"//====Fecha de elaboracion: 03-05-2022"<<endl;
cout<<"//====Fecha de ultima actualizacion:19-05-2022"<<endl;


	cout<<"El valor de CA_A=" <<CA_A<<" es menor a CA_B="<<CA_B<<endl;
		}else{
	cout<<"El valor de CA_B="<<CA_B<<" es menor a CA_A="<<CA_A<<endl;
		}
	}
	return 0;
}
