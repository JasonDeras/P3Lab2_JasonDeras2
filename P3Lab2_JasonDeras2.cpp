#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

int menu(){

	int opcion;//Variable de las opciones del menu

	cout<<"Menu\n\n";
	cout<<"1. Ejercicio 1"<<endl;
	cout<<"2. Ejercicio 2"<<endl;
	cout<<"3. Elercicio 3\n\n";
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	cout<<"\n\n\n";
	return opcion;

}//Fin del metodo del menu

int main(){
	int usuario=1;//Controla que sea repetitivo


	while(usuario==1){

		switch(menu()){

			case 1:
			break;
			
			case 2:
			break;

			case 3:
			break;

			default:
				cout<<"Opcion no valida\n\n\n";
			break;	
		
		
		}//Fin del case de las opciones


		cout<<"Volver al menu[1-Si/2.-No]: ";
		cin>>usuario;
	}//Fin del while del menu
	return 0;

}//Fin del main
