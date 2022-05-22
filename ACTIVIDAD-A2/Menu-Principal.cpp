// Autores: Banguera Josselyn, Carvajal Aldo, Giron Genesis, Mera Sandy
// Fecha de creacion: 2022-05-12
// Fecha de ultima actualizacion: 2022-05-21

#include<iostream>
#include<stdlib.h>
using namespace std;




int main()
{
   
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS**************"<<endl<<endl;
			cout<<"1.- Trabajos de Banguera Josselyn. \n";
			cout<<"2.- Trabajos de Carvajal Aldo.\n";
			cout<<"3.- Trabajos de Geneis Giron. \n"; 
			cout<<"4.- Trabajos de Mera Sandy. \n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE BANGUERA JOSSELYN "<<endl;
					
					break;
				case 2:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE CARVAJAL ALDO ";
					break;
				case 3:
					
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE GENESIS GIRON ";
					break;
				case 4:
				
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE MERA SANDY  ";
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   
	}while(op!=0);
	
         cout<<endl<<"// Autores: Banguera Josselyn, Carvajal Aldo, Giron Genesis, Mera Sandy   \n";
	 cout<<"=================================================================================\n";
         cout<<"//                     Fecha de creacion: 2022-05-12                             \n";
	 cout<<"//===============================================================================\n";
         cout<<"//                 Fecha de ultima actualizacion: 2022-05-21                     \n";
	 cout<<"//===============================================================================\n";
         system("color 2");
	return(0);

}
