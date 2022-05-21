// MENU DE BANGUERA JOSSSELYN
//
//
//
//
//
//
//


int BangueraJosselynSumaN()
{
int BJ_c=0, BJ_n;
	float BJ_s=0, BJ_x;
	cout<<"Ingrese la cantidad de numeros a sumar : ";
	cin>>BJ_n;
	do{
         
		cout<<"Ingrese un numero :";
		cin>>BJ_x;
		BJ_c=BJ_c+1;
		BJ_s=BJ_s+BJ_x;
	}while(BJ_c<BJ_n);

	cout<<"//================================================"<<endl;
cout<<"//=======Nombre del programa: Suma de dos numeros"<<endl;
cout<<"//====Archivo: BangueraJosselyn-SumaN.cpp"<<endl;
cout<<"//====Autor: Banguera Josselyn"<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;                            cout<<"//====Fecha de ultima actializacion: 14-05-2022"<<endl;                   cout<<"//================================================"<<endl;

	cout<<"La suma de los numeros es :"<<BJ_s<<endl;
	
  return 0;

}

int BangueraJosselynCompara(){
	
float BJ_A,BJ_B;
	cout<<"ingrese BJ_A:";
	cin>>BJ_A;
	cout<<"ingrese BJ_B:";
	cin>>BJ_B;
	if(BJ_A==BJ_B) {
	cout<<"El valor de BJ_A= "<<BJ_A<<" es igual a BJ_B "<<BJ_B<<endl;

	}else{
		if(BJ_A<BJ_B){

cout<<"//================================================"<<endl;
cout<<"//=======Nombre del programa: Suma de dos numeros"<<endl;
cout<<"//====Archivo: BangueraJosselyn-SumaN.cpp"<<endl;
cout<<"//====Autor: Banguera Josselyn"<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;                            cout<<"//====Fecha de ultima actializacion: 14-05-2022"<<endl;                   cout<<"//================================================"<<endl;

	cout<<"El valor de BJ_A=" <<BJ_A<<" es menor a BJ_B="<<BJ_B<<endl;
		}else{
	cout<<"El valor de BJ_B="<<BJ_B<<" es menor a BJ_A="<<BJ_A<<endl;
		}
	}
return 0;
	
}

int BangueraJosselynPuntoVenta()
{
	
int BJ_c=0, BJ_P;
	float BJ_A=0,BJ_x,BJ_Tb,BJ_Piva,BJ_Pdsc,BJ_iva=0.12,BJ_dsc=0.30,BJ_vt;
	cout<<"Ingrese la cantidad de productos: ";
	cin>>BJ_P;
	do{
		cout<<"Ingrese el valor de los productos: ";
		cin>>BJ_x;
		BJ_c=BJ_c+1;
		BJ_A=BJ_A+BJ_x;
		BJ_Piva=BJ_A*BJ_iva;
		cout<<"El valor del iva de la compra es de: $"<<BJ_Piva<<endl;
		BJ_Pdsc=BJ_A*BJ_dsc;
		cout<<"El valor del descuento de su compra es de:$"<<BJ_Pdsc<<endl;
		BJ_Tb=BJ_Piva+BJ_Pdsc;
	}while(BJ_c<BJ_P);
	if(BJ_Tb==BJ_A){
		cout<<"Su compra aplica para un descuento: "<<BJ_Tb<<endl;
	BJ_iva=BJ_Tb*BJ_Piva/100;
	BJ_dsc=BJ_Tb*BJ_Pdsc/100;
}else{
	BJ_vt=BJ_A+BJ_Piva-BJ_Pdsc;

cout<<"//================================================"<<endl;
cout<<"//=======Nombre del programa: Suma de dos numeros"<<endl;
cout<<"//====Archivo: BangueraJosselyn-SumaN.cpp"<<endl;
cout<<"//====Autor: Banguera Josselyn"<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;                            cout<<"//====Fecha de ultima actializacion: 14-05-2022"<<endl;                   cout<<"//================================================"<<endl;

	cout<<"El valor total es de:$ "<<BJ_vt<<endl;
}

	

return 0;
}

int BangueraJosselynlaedad(){
	
int BJ_da,BJ_ma,BJ_aa,BJ_dn,BJ_mn,BJ_an,BJ_a,BJ_m,BJ_d;
	cout<<"Ingrese la fecha actual: Dia Mes A :";
	cin>>BJ_da>>BJ_ma>>BJ_aa;
	cout<<"Ingrese su fecha de nacimiento: Dia Mes A :";
	cin>>BJ_dn>>BJ_mn>>BJ_an;
	if(BJ_da<BJ_dn){
		BJ_da=BJ_da+30;
		BJ_ma=BJ_ma-1;
		BJ_d=BJ_da-BJ_dn;
	}
	else{
		BJ_d=BJ_da-BJ_dn;
	}
	if(BJ_ma<BJ_mn){
		BJ_ma=BJ_ma+12;
		BJ_aa=BJ_aa-1;
		BJ_m=BJ_ma-BJ_mn;
	}
	else{
		BJ_m=BJ_ma-BJ_mn;
	}
	BJ_a=BJ_aa-BJ_an;

cout<<"//================================================"<<endl;
cout<<"//=======Nombre del programa: Suma de dos numeros"<<endl;
cout<<"//====Archivo: BangueraJosselyn-SumaN.cpp"<<endl;
cout<<"//====Autor: Banguera Josselyn"<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;                            cout<<"//====Fecha de ultima actializacion: 14-05-2022"<<endl;                   cout<<"//================================================"<<endl;

        cout<<"Usted tiene: " <<BJ_a<< "a" <<BJ_m<< "mese" <<BJ_d<< "BJ_y" <<BJ_d<< "dias"<<endl;
        
        
return 0;


}

int BangueraJosselynCuentaMoneda(){
	
 int BJ_n, BJ_c=0, BJ_c1=0, BJ_c2=0;
       float BJ_x,BJ_a=0, BJ_a1=0, BJ_a2=0;
       cout<<"Cuantas monedas va a ingresar: ";
       cin>>BJ_n;
       do{
      cout<<"Ingrese el valor de la moneda (0.10, 0.25): ";
      cin>>BJ_x;
      BJ_c=BJ_c+1;
      BJ_a=BJ_a+BJ_x;
      if(BJ_x==0.10){

	      BJ_c1=BJ_c1+1;
	      BJ_a1=BJ_a1+BJ_x;
      }else{
	      BJ_c2=BJ_c2+1;
	      BJ_a2=BJ_a2+BJ_x;
      }
       }while(BJ_c<BJ_n);

cout<<"//================================================"<<endl;
cout<<"//=======Nombre del programa: Suma de dos numeros"<<endl;
cout<<"//====Archivo: BangueraJosselyn-SumaN.cpp"<<endl;
cout<<"//====Autor: Banguera Josselyn"<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;                          
cout<<"//====Fecha de ultima actializacion: 14-05-2022"<<endl;                  
cout<<"//================================================"<<endl;


       cout<<"El resultado es :"<<endl;
       cout<<"Cantidad de monedas ingresadas :"<<BJ_c<<endl;
       cout<<"Total del dinero contado :"<<BJ_a<<endl;
       cout<<"Cantidad de monedas de 0.10ctv ingresadas :"<<BJ_c1<<endl;
       cout<<"Total del dinero de monedas de 0.10ctv :"<<BJ_a1<<endl;
       cout<<"Cantidad de monedas de 0.25ctv ingresadas :"<<BJ_c2<<endl;
       cout<<"Total del dinero de monedas de 0.25ctv :"<<BJ_a2<<endl;




return 0;
	
}



int BangueraJossselynmenu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE BANGUERA JOSSELYN**************"<<endl<<endl;
			cout<<"1.- SUMA VARIOS NUMEROS \n";
			cout<<"2.- COMPARA 2 NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n"; 
			cout<<"4.- CALCULA LA EDAD. \n";
			cout<<"5.- MAQUINA CUANTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					cout<<"\n SUMA VARIOS NUMEROS  "<<endl;
					 BangueraJosselynSumaN();			
					break;
				case 2:
					system("clear");
					cout<<"\nCOMPARA 2 NUIMEROS ";
					BangueraJosselynCompara();
					break;
				case 3:
				        system("clear");
					cout<<"\n PUNTO DE VENTA ";
					BangueraJosselynPuntoVenta();
					break;
				case 4:
					system("clear");
					cout<<"\n CALCULA LA EDAD ";
					BangueraJosselynlaedad();
					break;
				case 5:
					system("clear");
					cout<<"\n MAQUINA CUANTA MONEDAS ";
					BangueraJosselynCuentaMoneda();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   
	}while(op!=0);
	
	cout<<"================================================\n";
	cout<<"                 Banguera Josselyn               \n";
	cout<<" Gmail:josselyn.banguera.tircio@utelvt.edu.ecu  \n";
	cout<<"=================================================\n";

	return(0);

}
