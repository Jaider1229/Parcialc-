#include<iostream>

using namespace std;

struct Nodo{
       int dato;
       Nodo *siguiente;
       };
       void insertarlista(Nodo *&,int);
       void mostarlista(Nodo *);
       void menu();
       Nodo *lista = NULL;
       int main(){
           menu();
           return 0;
           }
 void menu(){
      int opcion,dato;
	
	do{
		
	cout<<"\t. MENU \n";
	cout<<"\n1. Ingresar un numero";
	cout<<"\n2.Salir";
	cout<<"\nOpcion:   ";
	cin>>opcion;
	
	switch(opcion){
		case 1: 
		cout<<"Ingresar un numero";
		cin>>dato;
		insertarlista(lista,dato);
		break;
	}
	
	}while(opcion!=2);
}
              
 void insertarlista(Nodo *&lista, int n){
      Nodo *nuevo_nodo = New Nodo();
      nuevo_nodo->dato = n;
      
      Nodo *aux1 = lista;
      Nodo *aux2;
      
      while((aux!=NULL)&&(aux1->dato<n)){
      	aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista==aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	nuevo_nodo ->siguiente = aux1;
	
	cout<<"El numero "<< n <<" se ingreso correctamente";
}

void mostrarlista(Nodo *lista){
	Nodo *actual = new Nodo;
	actual=lista;
	
	while (actual!=NULL){
		
		cout<<actual->dato<<" -> ";
		actual = actual->siguiente;
	}
}

 
           
