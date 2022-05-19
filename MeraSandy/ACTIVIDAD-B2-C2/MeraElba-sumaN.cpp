#include<iostream>
 using namespace std;

   int main ()
     {
	     int c=0,n;
	     float s=0,x;
	 cout<<"ingrese los numeros a sumar : ";
         cin>>n;
	 do{
		 cout<<"ingrese un numero : ";
		 cin>>x;
		 c=c+1;
		 s=s+x;


	  }while(c<n) ;
	  cout<<"la suma es : "<<s<<endl;
	 return(0);
 }
