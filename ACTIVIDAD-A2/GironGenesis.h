// MENÚ DE GIRÓN GÉNESIS 
//
//
//
//
//
//
//

int GironGenesisSumaN() 
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
cout<<endl<<"//=========================================="<<endl;
cout<<"//=======Nombre del programa: SUMA DE DOS NÚMEROS"<<endl;
cout<<"//====Archivo: GironGenesis-SumaN.cpp"<<endl;
cout<<"//====Autor: Giron Genesis"<<endl;
cout<<"//====Fecha de elaboración: 02-05-2022"<<endl;
cout<<"//====Fecha de última actualización: 19-05-2022"<<endl;
cout<<endl<<"//=========================================="<<endl;

cout<<"La suma de los elementos fue : "<<GG_s<<endl;

return(0);
}


int GironGenesisCompara(){
	float GG_A,GG_B;
	cout<<" ingrese GG_A: ";
	cin>>GG_A;
	cout<<" ingre GG_B: ";
        cin>>GG_B;
	if(GG_A==GG_B){
cout<<"el valor de GG_A="<< GG_A<<" es igual a GG_B  "<<GG_B<<endl;


	}else{
        if (GG_A<GG_B){
		cout<<"el valor de GG_A=" <<GG_A<<"es menor a GG_B= "<<GG_B<<endl;                                                                                                                      }else{                                             cout<<"el valor de GG_B="<<GG_B<<"es menor a  GG_A= "<<GG_A<<endl;
		}
	}

cout<<endl<<"//=========================================="<<endl;
cout<<"//=======Nombre del programa: Compara de dos números"<<endl;
cout<<"//====Archivo: GironGenesis-Compara.cpp"<<endl;
cout<<"//====Autor: Giron Genesis"<<endl;
cout<<"//====Fecha de elaboración: 02-05-2022"<<endl;
cout<<"//====Fecha de última actualización: 17-05-2022"<<endl;
cout<<endl<<"//=========================================="<<endl;
 
	return 0;
}



int GironGenesisPuntoVenta()
{

	int GG_c=0, GG_P;
	float GG_a=0, GG_x, GG_tb, GG_viva, GG_vdes, GG_iva=0.12, GG_des=0.30, GG_vf;
	cout<<"Ingrese la cantidad de productos: ";
	cin>>GG_P;
	do{
	cout<<"Ingrese el valor de los productos: ";
		cin>>GG_x;
		GG_c=GG_c+1;
		GG_a=GG_a+GG_x;
		GG_viva=GG_a*GG_iva;
cout<<"El valor del iva de la compra es de: $"<<GG_viva<<endl;
		GG_vdes=GG_a*GG_des;
cout<<"El valor del descuento de su compra es de:$"<<GG_vdes<<endl;
		GG_tb=GG_viva+GG_vdes;
	}while(GG_c<GG_P);
	if(GG_tb==GG_a){
cout<<"Su compra aplica para un descuento: "<<GG_tb<<endl;
	GG_iva=GG_tb*GG_viva/100;
	GG_des=GG_tb*GG_vdes/100;
}else{
	GG_vf=GG_a+GG_viva-GG_vdes;

	cout<<"El valor final es de:$ "<<GG_vf<<endl;


	cout<<endl<<"//=========================================="<<endl;
cout<<"//=======Nombre del programa: PUNTO VENTA"<<endl;
cout<<"//====Archivo: GironGenesis-PuntoVenta.cpp "<<endl;
cout<<"//====Autor: Giron Genesis "<<endl;
cout<<"//====Fecha de elaboración: 02-05-2022 "<<endl;
cout<<"//====Fecha de última actualización: 19-05-2022 "<<endl;
cout<<endl<<"//=========================================="<<endl;

}
return 0;
}


int  GironGenesislaedad(){
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

	cout<<"Usted tiene: " <<GG_a<< "años" <<GG_m<< "meses" "y" <<GG_d<< "dias";

cout<<endl<<"//=========================================="<<endl;
cout<<"//=======Nombre del programa: LA EDAD"<<endl;
cout<<"//====Archivo: GironGenesis-laedad.cpp"<<endl;
cout<<"//====Autor: Giron Genesis"<<endl;
cout<<"//====Fecha de elaboración: 02-05-2022"<<endl;
cout<<"//====Fecha de última actualización: 19-05-2022"<<endl;
cout<<endl<<"//=========================================="<<endl;

 return(0);
}

int GironGenesisCuentaMoneda(){
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

cout<<"El resultado fue:"<<endl;
cout<<"Cantidad de monedas ingresadas : "<<GG_c<<endl;
cout<<"Cantidad total en dinero contado : "<<GG_a<<endl;
cout<<"Cantidad de monedas de 0.10c ingresadas: "<<GG_c1<<endl;
cout<<"Cantidad total en dinero de monedas de 0.10cc : "<<GG_a1<<endl;
cout<<"Cantidad de monedas de 0.25cc ingresadas : "<<GG_c2<<endl;
cout<<"Cantidad total en dinero de mpnedas de 0.25cc : "<<GG_a2<<endl;

cout<<endl<<"//=========================================="<<endl;
cout<<"//=======Nombre del programa: CUENTA  MONEDA"<<endl;;
cout<<"//====Archivo: GironGenesis-CuentaMoneda.cpp"<<endl;
cout<<"//====Autor: Giron Genesis"<<endl;
cout<<"//====Fecha de elaboración: 02-05-2022"<<endl;
cout<<"//====Fecha de última actualización: 19-05-2022"<<endl;
cout<<endl<<"//=========================================="<<endl;

return 0;
}

int GironGenesismenu()
{
	int op, flag;

	do{
	
	system("cls");
cout<<"**************PROGRAMAS DE GIRON GENESIS **************"<<endl<<endl;
			cout<<"1.- SUMA VARIOS NUMEROS \n";
			cout<<"2.- COMPARA 2 NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n";
			cout<<"4.- CALCULA LA EDAD. \n";
			cout<<"5.- MAQUINA CUANTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; 
			cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
			system("cls");
		cout<<"\n SUMA VARIOS NUMEROS  "<<endl;
				GironGenesisSumaN();
					break;
				case 2:
					system("cls");
					cout<<"\nCOMPARA 2 NUIMEROS ";
					GironGenesisCompara();
					break;
				case 3:
				        system("cls");
					cout<<"\n PUNTO DE VENTA ";
					GironGenesisPuntoVenta();
					break;

				case 4:
					system("cls");
					cout<<"\n CALCULA LA EDAD ";
					GironGenesislaedad();
					break;
				case 5:
					system("cls");
					cout<<"\n MAQUINA CUANTA MONEDAS ";
					GironGenesisCuentaMoneda();
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
	cout<<"                 Giron Genesis              \n";
	cout<<" Gmail:genesis.giron.lupu@utelvt.edu.ecu  \n";
	cout<<"=================================================\n";

	return(0);
}
