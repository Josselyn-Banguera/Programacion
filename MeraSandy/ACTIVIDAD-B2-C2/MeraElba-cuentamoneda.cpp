 //=======Nombre del programa: Cuenta moneda
//====Archivo:MeraElba-cuentamoneda.cpp
//====Autor: Mera Sandy
//====Fecha de elaboracion: 02-05-2022
//====Fecha de ultima actualizacion: 19-05-2022
//include<iostream>
using namespace std;
int main()
{
       int MS-n, MS_c=0,S_c1=0, MS_c2=0;
       float MS_x,MS_a=0, MS_a1=0, MS_a2=0;
       cout<<"¿Cuantas monedas va a ingresar?: ";
       cin>>MS_n;
       do{
      cout<<"Ingrese el valor de la moneda (0.10, 0.25): ";
      cin>>MS_x;
      MS_c=MS_c+1;
      MS_a=MS_a+MS_x;
      if(MS_x==0.10){

	      MS_c1=MS_c1+1;
	      MS_a1=MS_a1+MS_x;
      }else{
	      MS_c2=MS_c2+1;
	      MS_a2=MS_a2+MS_x;
      }
       }while(MS_c<MS_n);
       cout<<"El resultado es :"<<endl;
       cout<<"Cantidad de monedas ingresadas :"<<MS_c<<endl;
       cout<<"Total del dinero contado :"<<MS_a<<endl;
       cout<<"Cantidad de monedas de 0.10ctv ingresadas :"<<MS_c1<<endl;
       cout<<"Total del dinero de monedas de 0.10ctv :"<<MS_a1<<endl;
       cout<<"Cantidad de monedas de 0.25ctv ingresadas :"<<MS_c2<<endl;
       cout<<"Total del dinero de monedas de 0.25ctv :"<<MS_a2<<endl;

    cout<<"//=======Nombre de programa: Cuenta moneda"<<endl;
cout<<"//====Archivo: MeraElba-cuentamoneda.cpp"<<endl;
cout<<"//====Autor: Mera Sandy "<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//====Fecha de ultima actializacion: 19-05-2022"<<endl;
       return(0);
}
