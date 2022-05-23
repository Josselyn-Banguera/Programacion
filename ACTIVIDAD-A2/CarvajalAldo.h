// Menu de Carvajal Aldo
//
//
//
//
//
//
//

int CarvajalAldoCompara(){
	float CA_A,CA_B;
	cout<<"ingrese CA_A:";
	cin>>CA_A;
	cout<<"ingrese CA_B:";
	cin>>CA_B;
	if(CA_A==CA_B) {
	cout<<"El valor de CA_A= "<<CA_A<<" es igual a CA_B "<<CA_B<<endl;

	}else{
		if(CA_A<CA_B){

cout<<"//=======Nombre de programa: Compara de dos numeros"<<endl;
cout<<"//====Archivo: AldoCarvajalk-Compara.cpp"<<endl;
cout<<"//====Autor: Carvajal Aldo"<<endl;
cout<<"//====Fecha de elaboracion: 03-05-2022"<<endl;
cout<<"//====Fecha de ultima actualizacion:19-05-2022"<<endl;

cout<<"El valor de CA_A=" <<CA_A<<" es menor a CA_B="<<CA_B<<endl;
		}else{
	cout<<"El valor de CA_B="<<CA_B<<" es menor a CA_A="<<CA_A<<endl;
		}
	}
	return 0;
}

int CarvajalAldoCuentaMoneda(){
	int CA_n, CA_c=0, CA_c1=0, CA_c2=0;
	float CA_x, CA_a=0, CA_a1=0, CA_a2=0;
	cout<<"Ingrese la cantida de monedas: ";
	cin>>CA_n;
	do{
	cout<<"Ingrese cual es el valor de la moneda (0.10,0.25) : ";
	cin>>CA_x;
	CA_c=CA_c+1;
	CA_a=CA_a+CA_x;
	if(CA_x==0.10){

		CA_c1=CA_c1+1;
		CA_a1=CA_a1+CA_x;
	}else{
		CA_c2=CA_c2+1;
		CA_a2=CA_a2+CA_x;
	}
	}while(CA_c<CA_n);
	cout<<"El resultado es : "<<endl;
	cout<<"Cantidad de monedas ingresadas : "<<CA_c<<endl;
	cout<<"El total del dinero contado es de : "<<CA_a<<endl;
	cout<<"Monedas ingresadas de 0.10 ctvos es de :"<<CA_c1<<endl;
	cout<<"Cantidad total de monedas de 0.10 ctvos es de : "<<CA_a1<<endl;
	cout<<"Monedas ingresadas de 0.25 ctvos es de : "<<CA_c2<<endl;
	cout<<"Cantidad total de monedas de 0.25 ctvos es de : "<<CA_a2<<endl;

cout<<"//=======Nombre del programa: Cuenta Moneda "<<endl;
cout<<"//====Archivo: AldoCarvajalk-CuebtaMoneda.cpp"<<endl;
cout<<"//====Autor: Carvajal Aldo"<<endl;
cout<<"//====Fecha de creacion: 03-05-2022"<<endl;
cout<<"//====Fecha de ultima actualizacion: 19-05-2022"<<endl;

	return (0);
}

int CarvajalAldolaedad(){
	int CA_aa,CA_ma,CA_da,CA_an,CA_mn,CA_dn,CA_a,CA_m,CA_d;
	cout<<"Ingrese la fecha actual (Dia Mes Año): ";
	cin>>CA_da>>CA_ma>>CA_aa;
	cout<<"Ingrese su fecha de nacimiento (Dia Mes Año):";
	cin>>CA_dn>>CA_mn>>CA_an;
	if(CA_da<CA_dn){
	CA_da=CA_da+30;
	CA_ma=CA_ma-1;
	CA_da=CA_da-CA_dn;
	}else{
	CA_d=CA_da-CA_dn;
	}
	if(CA_ma<CA_mn){
		CA_ma=CA_ma+12;
		CA_aa=CA_aa-1;
		CA_m=CA_ma-CA_mn;
	}else{
	CA_m=CA_ma-CA_mn;
	}
	CA_a=CA_aa-CA_an;

cout<<"//=======Nombre del programa: la edad "<<endl;
cout<<"//====Archivo: AldoCarvajalk-laEdad.cpp "<<endl;
cout<<"//====Autor: Carvajal Aldo "<<endl;
cout<<"//====Fecha de creacion: 03-05-2022 "<<endl;
cout<<"//====Fecha de ultila actualizacion: 19-05-2022 "<<endl;

	cout<<"Usted tiene "<<CA_a<<" años "<<CA_m<<" meses  y"<<CA_d<<" dias "<<endl;
	return(0);
}

int CarvajalAldoPuntoVenta(){
	int CA_c=0, CA_P;
	float CA_A=0,CA_x,CA_Tb,CA_Piva,CA_Pdsc,CA_iva=0.12,CA_dsc=0.30,CA_vt;
	cout<<"Ingrese la cantidad de productos: ";
	cin>>CA_P;
	do{
		cout<<"Ingrese el valor de los productos: ";
		cin>>CA_x;
		CA_c=CA_c+1;
		CA_A=CA_A+CA_x;
		CA_Piva=CA_A*CA_iva;
		cout<<"El valor del iva de la compra es de: $"<<CA_Piva<<endl;
		CA_Pdsc=CA_A*CA_dsc;
		cout<<"El valor del descuento de su compra es de:$"<<CA_Pdsc<<endl;
		CA_Tb=CA_Piva+CA_Pdsc;
	}while(CA_c<CA_P);
	if(CA_Tb==CA_A){
		cout<<"Su compra aplica para un descuento: "<<CA_Tb<<endl;
	CA_iva=CA_Tb*CA_Piva/100;
	CA_dsc=CA_Tb*CA_Pdsc/100;
}else{
	CA_vt=CA_A+CA_Piva-CA_Pdsc;

cout<<"//======Nombre del programa: Punto de venta"<<endl;
cout<<"//====Nombre del archivo: AldoCarvajalk-PuntoVenta.cpp "<<endl;
cout<<"//====Autor: Carvajal Aldo "<<endl;
cout<<"//====Fecha de elaboracion: 03-05-2022 "<<endl;
cout<<"//====Fecha de ultima actualizacion: 19-02-2022 "<<endl;

	cout<<"El valor total es de:$ "<<CA_vt<<endl;
}
return(0);
}

int CarvajalAldoSumaN(){
int CA_c=0, CA_n;
	float CA_s=0, CA_x;
	cout<<"Ingrese la cantidad de numeros a sumar : ";
	cin>>CA_n;
	do{

		cout<<"Ingrese un numero :";
		cin>>CA_x;
		CA_c=CA_c+1;
		CA_s=CA_s+CA_x;
	}while(CA_c<CA_n);

cout<<"//=======Nombre del programa: Suma de dos numeros"<<endl;
cout<<"//====Archivo: AldoCarvajalk-SumaN.cpp"<<endl;
cout<<"//====Autor: Carvajal Aldo"<<endl;
cout<<"//====Fecha de elaboracion: 03-05-2022"<<endl;
cout<<"//====Fecha de ultima actializacion: 19-05-2022"<<endl;

	cout<<"La suma de los numeros es :"<<CA_s<<endl;
	return(0);
}

int CarvajalAldomenu()
{
	int op,flag3;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE Carvajal Aldo**************"<<endl<<endl;
			cout<<"1.- COMPARA DE DOS NUMEROS \n";
			cout<<"2.- MAQUINA CUENTA MONEDA.\n";
			cout<<"3.- CALCULA LA EDAD \n";
			cout<<"4.- PUNTO DE VENTA. \n";
			cout<<"5.- SUMA VARIOS NUMEROS.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					cout<<"\n Compara 2 nueros ";
					CarvajalAldoCompara();
					break;
				case 2:
					system("clear");
					cout<<"\n MAQUINA CUENTA MONEDA ";
					CarvajalAldoCuentaMoneda();
					break;
				case 3:
					system("clear");
					cout<<"\n CALCULA EDAD ";
					CarvajalAldolaedad();
					break;
				case 4:
					system("clear");
					cout<<"\n PUNTO DE VENTA ";
					CarvajalAldoPuntoVenta();
					break;
				case 5:
					system("clear");
					cout<<"\n SUMA VARIOS NUMEROS ";
					CarvajalAldoSumaN();
					break;

				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				        flag3=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla

	}while(op!=0);

        cout<<"===========================================\n";
        cout<<"             Carvajal Aldo                 \n";
         cout<<" Gmail:aldo.carvajal.klinger@utelvt.edu.ec\n";
        cout<<"===========================================\n";

	return(0);

}
