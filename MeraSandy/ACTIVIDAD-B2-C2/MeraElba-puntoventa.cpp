 #include<iostream>
 using namespace std;
   int main ()
  {
	  int c=0 ,P;
	  float A=0,x,Tb,piva,pdsc,iva=0.12,dsc=0.30,vt;
	  cout<<"Ingrese la cantidad de los productos: ";
	  cin>>P;
	  do{
   .     cout<<"Ingrese el valor de los productos: ";
         cin>>x;
	 c=c+1;
	 A=A+x;
	 Piva=A*iva;
	 cout<<"El valor del iva de la compra es de: $"<<Piva<<endl;
	 Psdc=A*dsc;
	 cout<<"El valor del descuento de su compra es:$"<<Psdc<<endl;
	 Tb=Piva+Psdc;
 }while(c<P);
   if(Tb==A) {
	   cout<<"Su compra aplica para un descuento: "<<Tb<<endl;
	   iva=Tb*Piva/100;
	   dsc=Tb*Psd/100;
   }else{
	   vt=A+Piva-Psdc;
	   cout<<"El valor total es de: $"<<endl;
   }
	  return(0);
  }
