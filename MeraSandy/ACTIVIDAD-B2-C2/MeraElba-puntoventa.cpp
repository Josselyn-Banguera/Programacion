//=======Nombre del programa: Punto de venta
//====Archivo: MeraElba-puntoventa.cpp
//====Autor: Mera Sandy
//====Fecha de elaboracion: 02-05-2022
//====Fecha de ultima actualizacion: 19-05-2022
//include<iostream>
 using namespace std;
   int main ()
  {

	  int MS_c=0 ,MS_P;
	  float MS_A=0,MS_x,MS_Tb,MS_piva,MS_pdsc,MS-iva=0.12,MS_dsc=0.30,MS_vt;
	  cout<<"Ingrese la cantidad de los productos: ";
	  cin>>MS_P;
	  do{
   .     cout<<"Ingrese el valor de los productos: ";
         cin>>MS_x;
	 MS_c=MS_c+1;
	 MS_A=MS_A+MS_x;
	 MS_Piva=MS_A*MS_iva;
	 cout<<"El valor del iva de la compra es de: $"<<MS_Piva<<endl;
	 MS_Psdc=A*MS_dsc;
	 cout<<"El valor del descuento de su compra es:$"<<MS_Psdc<<endl;
	 MS_Tb=MS_Piva+MS_Psdc;
 }while(MS_c<MS_P);
   if(MS_Tb==MS_A) {
	   cout<<"Su compra aplica para un descuento: "<<MS_Tb<<endl;
	   MS_iva=MS_Tb*MS_Piva/100;
	   MS_dsc=MS_Tb*MS_Psd/100;
   }else{
	   MS_vt=MS_A+MS_Piva-MS_Psdc;

       cout<<"//=======Nombre de programa: Punto de venta"<<endl;
       cout<<"//====Archivo: MeraElba-puntoventa.cpp"<<endl;
      cout<<"//====Autor: Mera Sandy "<<endl;
      cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
     cout<<"//====Fecha de ultima actializacion: 19-05-2022"<<endl;
       cout<<"El valor total es de: $"<<endl;
   }
	  return(0);
  }
