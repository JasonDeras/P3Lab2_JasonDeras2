#include <stdlib.h>
#include <time.h>
#include<iostream>
#include <array>

using namespace std;
void sort(int *arreglo,int);

int menu(){

	int opcion;//Variable de las opciones del menu

	cout<<"Menu\n\n";
	cout<<"1. Ejercicio 1"<<endl;
	cout<<"2. Ejercicio 2"<<endl;
	cout<<"3. Elercicio 3"<<endl;
	cout<<"4. Salir\n\n";
	cout<<"Ingrese una opcion: ";	
	cin>>opcion;
	cout<<"\n\n";
	return opcion;

}//Fin del metodo del menu

int Ejercicio1(int a,int b){

	if(a<b){
		return Ejercicio1(b,a);
	}else if(b==0){
		return a;
	}else{
		return Ejercicio1(b,a%b);
	}

  
}//Fin del maximo comun divisior

void Ejercicio2(int size){
	
	srand(time(NULL));

	int* arreglo=new int[size];

	for(int i=0;i<size;++i){
		arreglo[i]=rand()%100;
	}//Fin del for del llenado 
		

	cout<<"Arreglo Original"<<endl;
        for(int j=0;j<size;++j){
		cout<<arreglo[j]<<endl;
	}//Fin del for de la impresion
        cout<<"\n\n\n";

	sort(arreglo,size);
	
	cout<<"Arreglo ordenado"<<endl;

        for(int j=0;j<size;++j){
                cout<<arreglo[j]<<endl;
        }//Fin del for de la impresion
	
	cout<<"\n\n\n\n";
	delete[] arreglo;

}//Fin del metodo del segundo ejercicio

void sort(int* arreglo, int index){

	//Caso base
        if (index == 1)
            return;

        for (int i=0; i<index-1; i++)

            if (arreglo[i] > arreglo[i+1]){
                
		int temp = arreglo[i];
                arreglo[i] = arreglo[i+1];
                arreglo[i+1] = temp;

            }//Fin del if

        sort(arreglo, index-1);

}//Fin del metodo para ordenar el arreglo

int main(){

	int usuario;//Controla que sea repetitivo
	

	do{

		switch(usuario=menu()){

			case 1:

				int numero1;
				int numero2;
				int resultado;

				cout<<"Inregres el primer numero: ";
				cin>>numero1;
				
				while(numero1<0){
					cout<<"EL numero no puede ser nagtivo\n\n";

					cout<<"Ingrese el primer numero: ";
					cin>>numero1;
				}//Valida el primer numero

				cout<<"Ingrese el segundo numero: ";
				cin>>numero2;

				while(numero2<=0){
					cout<<"El numero no pueder cero o menor que cero\n\n";
				       	cout<<"Ingrese el segundo numero: ";
					cin>>numero2;	
				}//Valida el segundo numero


				resultado=Ejercicio1(numero1,numero2);

				cout<<"mdc("<<numero1<<","<<numero2<<")="<<resultado<<"\n\n\n";


			break;
			
			case 2:

				int size;//Tamaño del arreglo

				cout<<"Ingrese el size del arreglo: ";
				cin>>size;

				while(size<=1){
					
					cout<<"El tamaño del arreglo no es valido\n\n\n";

					cout<<"Ingrese el tamaño del arreglo: ";
					cin>>size;

				}//Valida que el arreglo tiene mas elementos

				Ejercicio2(size);
			break;

			case 3:
				int numero;

				cout<<"Ingrese un numero: ";
				cin>>numero;

			break;		
		}//Fin del case de las opciones

	}while(usuario!=4);

	return 0;

}//Fin del main
