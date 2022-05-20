////=======Nombre del programa: SUMA DE DOS NÚMEROS
//====Archivo: GironGenesis-SumaN.cpp
//====Autor: Giron Genesis
//====Fecha de elaboración: 02-05-2022
////====Fecha de última actualización: 19-05-2022

#include<iostream>
using namespace std; 
int main()
{
	int GG_c= 0, GG_n;
	float GG_s=0, GG_x;
cout<<"Ingrese la cantidad de valor a suma : ";
cin>>GG_n;

   do{ 
	cout<<"Ingrese el elemento: ";
	cin>>GG_x;
	GG_c=GG_c+1;
	GG_s=GG_s+GG_x;
 }while (GG_c<GG_n);
   
cout<<"//=======Nombre del programa: SUMA DE DOS NÚMEROS"<<endl;
cout<<"//====Archivo: GironGenesis-SumaN.cpp"<<endl;
cout<<"//====Autor: Giron Genesis"<<endl;
cout<<"//====Fecha de elaboración: 02-05-2022"<<endl;
cout<<"//====Fecha de última actualización: 19-05-2022"<<endl;

     cout<<"La suma de los elementos fue : "<<GG_s<<endl;
return(0);
}
