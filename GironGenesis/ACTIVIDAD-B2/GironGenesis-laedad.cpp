#include<iostream>
using namespace std;
int main()
{
	int da,ma,aa,dn,mn,an,a,m,d;
	cout<<"Ingrese la fecha actual: Dia Mes Año :";
	cin>>da>>ma>>aa;
	cout<<"Ingrese su fecha de nacimiento: Dia Mes Año :";
	cin>>dn>>mn>>an;
	if(da>=dn){
		d=da-dn;
	}
	else{
		da=da+30;
                ma=ma-1;
                d=da-dn;
	}
	if(ma>=mn){
		ma=ma+12;
		aa=aa-1;
		m=ma-mn;
	}
	else{
		a=aa-an;
	}
	a=aa-an;
        cout<<"Usted tiene: " <<a<< "años" <<m<< "mese" <<d<< "y" <<d<< "dias";
	return(0);
}
