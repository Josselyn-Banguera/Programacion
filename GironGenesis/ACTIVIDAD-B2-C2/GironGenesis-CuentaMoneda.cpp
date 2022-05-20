
//=======Nombre del programa: CUENTA MONEDA 
//====Archivo: GironGenesis-CuentaMoneda.cpp   
//====Autor: Giron Genesis
//====Fecha de elaboración: 02-05-2022
//====Fecha de última actualización: 19-05-2022
#include<iostream>
using namespace std;

int main()
{
	int GG_n, GG_c=0, GG_c1=0, GG_c2=0;
	float GG_x, GG_a=0, GG_a1=0, GG_a2=0;
	cout<<"Cantidad de monedas a ingresar : ";
	cin>>GG_n;
	do{
cout<<"Ingrese el valor de la moneda (0.10,0.25) :";
cin>>GG_x;
GG_c=GG_c+1;
GG_a=GG_a+GG_x;
if(GG_x==0.10){
	GG_c1=GG_c1+1;
        GG_a1=GG_a1+GG_x;
}else{
	GG_c2=GG_c2+1;
	GG_a2=GG_a2+GG_x;
}
}while(GG_c<GG_n);




cout<<"//=======Nombre del programa: CUENTA  MONEDA"<<endl;;
cout<<"//====Archivo: GironGenesis-CuentaMoneda.cpp"<<endl;
cout<<"//====Autor: Giron Genesis"<<endl;
cout<<"//====Fecha de elaboración: 02-05-2022"<<endl;
cout<<"//====Fecha de última actualización: 19-05-2022"<<endl;


cout<<"El resultado fue:"<<endl;
cout<<"Cantidad de monedas ingresadas : "<<GG_c<<endl;
cout<<"Cantidad total en dinero contado : "<<GG_a<<endl;
cout<<"Cantidad de monedas de 0.10c ingresadas : "<<GG_c1<<endl;
cout<<"Cantidad total en dinero de monedas de 0.10cc : "<<GG_a1<<endl;
cout<<"Cantidad de monedas de 0.25cc ingresadas : "<<GG_c2<<endl;
cout<<"Cantidad total en dinero de mpnedas de 0.25cc : "<<GG_a2<<endl;
return 0;
}
