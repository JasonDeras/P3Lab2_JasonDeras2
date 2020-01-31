#include <iostream>
#include <cstdlib>
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
	cout<<"\n\n\n";
	return opcion;

}//Fin del metodo del menu

int mdc(int a,int b){

        if (a<b) {
            cout<<a;
            return 0;
        } else {
            return 1+mdc(a,b-a);
        }

}//Fin del me maximo comun divisior

void Ejercicio2(int size){

	int* arreglo=new int[size];

	for(int i=0;i<size;++i){
		arreglo[i]=(rand()%99);
	}//Fin del for del llenado 
		

	cout<<"Arreglo Original"<<endl;
        for(int j=0;j<size;++j){
		cout<<arreglo[j]<<endl;
	}//Fin del for de la impresion
          
	sort(arreglo,size);
	
	cout<<"Arreglo ordenado"<<endl;

        for(int j=0;j<size;++j){
                cout<<arreglo[j]<<endl;
        }//Fin del for de la impresion

	delete arreglo[];
}//Fin del metodo del segundo ejercicio

void sort(int* arr, int n){
        if (n == 1)
            return;

        for (int i=0; i<n-1; i++)
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }

        sort(arr, n-1);

}//Fin del metodo para ordenar el arreglo

int main(){

	int usuario;//Controla que sea repetitivo
	

	do{

		switch(usuario=menu()){

			case 1:

				int numero1;
				int numero2;

				cout<<"Inregres el primer numero: ";
				cin>>numero1;
				
				while(numero1<0){
					cout<<"EL numero no puede ser nagtivo\n\n";

					cout<<"Ingrese el primer numero: ";
					cin>>numero1;
				}//Valida el primer numero

				cout<<"Ingrese el segundo numero: ";
				cin>>numero1;

				while(numero1<=0){
					cout<<"El numero no pueder cero o menor que cero\n\n";
				       	cout<<"Ingrese el segundo numero: ";
					cin>>numero2;	
				}//Valida el segundo numero

				mdc(numero1,numero2);

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
			break;		
		}//Fin del case de las opciones

	}while(usuario!=4);

	return 0;

}//Fin del main
