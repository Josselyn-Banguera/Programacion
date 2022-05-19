//=======Nombre del programa: La edad
//====Archivo: Merelba-edad.cpp
//====Autor: Mera Sandy
//====Fecha de elaboracion: 02-05-2022
//====Fecha de ultima actualizacion: 19-05-2022
//include<iostream>
using namespace std;
int main()
{
	int MS_da,MS_ma,MS_aa,MS_dn,MS_mn,MS_an,MS_a,MS_m,MS_d;
	cout<<"Ingrese la fecha actual: Dia Mes y Año :";
	cin>>MS_da>>MS_ma>>MS_aa;
	cout<<"Ingrese su fecha de nacimiento: Dia Mes Año :";
	cin>>MS_dn>>MS_mn>>MS_an;
	if(MS_da<MS_dn){
		MS_da=MS_da+30;
		MS_ma=MS_ma-1;
		MS_d=MS_da-MS_dn;
	}
	else{
		MS_d=MS_da-MS_dn;
	}
	if(MS_ma<MS_mn){
		MS_ma=MS_ma+12;
		MS_aa=MS_aa-1;
		MS_m=MS_ma-MS_mn;
	}
	else{
		MS_m=MS_ma-MS_mn;
	}
	MS_a=MS_aa-MS_an;

	cout<<"//=======Nombre de programa: Compara de dos numeros"<<endl;
cout<<"//====Archivo: Meraelba-edad.cpp"<<endl;
cout<<"//====Autor: Mera Sandy "<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//====Fecha de ultima actializacion: 19-05-2022"<<endl;
        cout<<"Usted tiene: " <<MS_a<< "años" <<MS_m<< "meses" <<MS_d<< "y" <<MS_d<< "dias"<<endl;
	return(0);
}
