//nOTACION POSTFIJA
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Nodo{
int operador;
Nodo *next;
};

void agregar_elementos(Nodo *&, int );
void sacar_elemetos(Nodo *&,int &);

int main(){
	
	Nodo *pila=NULL;
	char *inf = new char[401];
	int tamanio;
	char *inf2=new char [500];


 

    cout<<"INGRESA LA OPERACION EN NOTACION INFIJA QUE QUIERAS CONVERTIR A NOTACION POSTFIJA: ";
    cin>>inf;
    tamanio=strlen(inf);
    

		for(int i=0;i<tamanio;i++){
		
		if(inf[i]=='('){
		
			
		}
		else
		if(inf[i]=='*'||inf[i]=='/'||inf[i]=='+'||inf[i]=='-'){
			if(inf[i]=='*'||inf[i]=='/'){
				
		      cout<<inf[i];
		    void sacar_elemetos(Nodo *&,int &);
			}
			else
			if((inf[i]=='+'||inf[i]=='-')&&inf[i]==tamanio){
			  void agregar_elementos(pila,inf[i]);	
			}
			
		
	
		}
		else 
		if(inf[i]==')'){
			
			cout<<inf2[i];
		}
		else{
			
			cout<<inf[i];
		}
			
	}

getch();
return 0;
}

void agregar_elementos(Nodo *&pila, int n ){
Nodo *nodo_siguiente = new Nodo();//reservar memora para el nodo
nodo_siguiente->operador=n;//igualar el dato insertado y ponerlo en el nodo 
nodo_siguiente->next=pila;//el puntero igualado a pila 
pila=nodo_siguiente; // igualar pila al nuevo nodo 
}

void sacar_elemetos(Nodo *&pila,int &n){
	Nodo *aux=pila;
	n=aux->operador;
	pila=aux->next;
	delete aux;
}
