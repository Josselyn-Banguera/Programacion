//=======Nombre del programa: Compara de dos números 
//====Archivo: GironGenesis-Compara.cpp
//====Autor: Giron Genesis 
//====Fecha de elaboración: 02-05-2022
//====Fecha de última actualización: 17-05-2022
#include<iostream>
using namespace std;
int main()
{
int GG_da,GG_ma,GG_aa,GG_dn,GG_mn,GG_an,GG_a,GG_m,GG_d;
	cout<<"Ingrese la fecha actual: Dia Mes Año :";
	cin>>GG_da>>GG_ma>>GG_aa;
cout<<"Ingrese su fecha de nacimiento: Dia Mes Año :";
	cin>>GG_dn>>GG_mn>>GG_an;
	if(GG_da>=GG_dn){
		GG_d=GG_da-GG_dn;
	}
	else{
		GG_da=GG_da+30;
                GG_ma=GG_ma-1;
		GG_d=GG_da-GG_dn;
	}
	if(GG_ma>=GG_mn){
		GG_ma=GG_ma+12;
		GG_aa= GG_aa-1;
		GG_m=GG_ma-GG_mn;
	}
	else{
		GG_m=GG_ma-GG_mn;
	}
	GG_a=GG_aa-GG_an;

cout<<"//=======Nombre del programa: LA EDAD"<<endl;
cout<<"//====Archivo: GironGenesis-laedad.cpp"<<endl;
cout<<"//====Autor: Giron Genesis"<<endl;
cout<<"//====Fecha de elaboración: 02-05-2022"<<endl;
cout<<"//====Fecha de última actualización: 19-05-2022"<<endl;

cout<<"Usted tiene: " <<GG_a<< "años" <<GG_m<< "meses" "y" <<GG_d<< "dias";
 return(0);
}
