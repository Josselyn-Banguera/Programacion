//=======Nombre del programa: la edad
//====Archivo: AldoCarvajalk-laEdad.cpp
//====Autor: Carvajal Aldo
//====Fecha de creacion: 03-05-2022
//====Fecha de ultima actualizacion: 19-05-2022

#include<iostream>
using namespace std;

int main ()
{
	int CA_aa,CA_ma,CA_da,CA_an,CA_mn,CA_dn,CA_a,CA_m,CA_d;
	cout<<"Ingrese la fecha actual (Dia Mes Año): ";
	cin>>CA_da>>CA_ma>>CA_aa;
	cout<<"Ingrese su fecha de nacimiento (Dia Mes Año):";
	cin>>CA_dn>>CA_mn>>CA_an;
	if(CA_da<CA_dn){
	CA_da=CA_da+30;
	CA_ma=CA_ma-1;
	CA_da=CA_da-CA_dn;
	}else{
	CA_d=CA_da-CA_dn;
	}
	if(CA_ma<CA_mn){
		CA_ma=CA_ma+12;
		CA_aa=CA_aa-1;
		CA_m=CA_ma-CA_mn;
	}else{
	CA_m=CA_ma-CA_mn;
	}
	CA_a=CA_aa-CA_an;

cout<<"//=======Nombre del programa: la edad "<<endl;
cout<<"//====Archivo: AldoCarvajalk-laEdad.cpp "<<endl;
cout<<"//====Autor: Carvajal Aldo "<<endl;
cout<<"//====Fecha de creacion: 03-05-2022 "<<endl;
cout<<"//====Fecha de ultila actualizacion: 19-05-2022 "<<endl;

	cout<<"Usted tiene "<<CA_a<<" años "<<CA_m<<" meses  y"<<CA_d<<" dias "<<endl;
	return(0);
}
