//=======Nombre del programa: Suma de dos numeros
//====Archivo: AldoCarvajalk-SumaN.cpp
//====Autor: Carvajal Aldo
//====Fecha de elaboracion: 03-05-2022
//====Fecha de ultima actualizacion: 19-05-2022

#include<iostream>
using namespace std;

int main()
{
	int CA_c=0, CA_n;
	float CA_s=0, CA_x;
	cout<<"Ingrese la cantidad de numeros a sumar : ";
	cin>>CA_n;
	do{
         
		cout<<"Ingrese un numero :";
		cin>>CA_x;
		CA_c=CA_c+1;
		CA_s=CA_s+CA_x;
	}while(CA_c<CA_n);

//=======Nombre del programa: Suma de dos numeros
//====Archivo: AldoCarvajalk-SumaN.cpp
//====Autor: Carvajal Aldo
//====Fecha de elaboracion: 03-05-2022
//====Fecha de ultima actualizacion: 19-05-2022

	cout<<"La suma de los numeros es :"<<CA_s<<endl;
	return(0);
}
