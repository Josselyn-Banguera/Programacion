//=======Nombre del programa: Suma de dos numeros
//====Archivo: MeraElba-sumaN.cpp
//====Autor: Mera Sandy
//====Fecha de elaboracion: 02-05-2022
//====Fecha de ultima actualizacion: 19-05-2022
//include<iostream>
 using namespace std;

   int main ()
     {
	     int MS_c=0,MS_n;
	     float MS_s=0,MS_x;
	 cout<<"ingrese los numeros a sumar : ";
         cin>>MS_n;
	 do{
		 cout<<"ingrese un numero : ";
		 cin>>MS_x;
		 MS_c=MS_c+1;
		 MS_s=MS_s+MS_x;


	  }while(MS_c<MS_n) ;

   cout<<"//=======Nombre de programa:suma de dos numeros"<<endl;

	cout<<"//====Archivo: MeraElba-sumaN.cpp"<<endl;
   cout<<"//====Autor:Mera Sandy "<<endl;
   cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
   cout<<"//====Fecha de ultima actializacion: 19-05-2022"<<endl;
	  cout<<"la suma es : "<<MS_s<<endl;
	 return(0);
 }
