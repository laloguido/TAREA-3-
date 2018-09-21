//B PALABRA PAINDROMA

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct nodo{
      char dato;
      struct nodo *control;
};

typedef struct nodo *pila;



pila crearNodo(char x)
{
      pila nuevo_nodo = new(struct nodo);
      nuevo_nodo->dato = x;
      return nuevo_nodo;
}

void push(pila &top, char x)
{
     pila aux = crearNodo(x);
     aux->control = top;
     top = aux;
}

char pop(pila &top)
{
     int c ;
    pila aux;
     
     aux = top ;
     c = aux->dato;  
     top = aux->control ;
     delete(aux);
     return c;
}


void CHECApalindromo(pila &p, string cad)
{
     pila aux;     
     
  
     for(int i=0; i<cad.size(); i++)
          if(cad[i]==32)
              cad.erase(i,1);  
     
    
     for(int i=0; i<cad.size(); i++)
          push(p, cad[i]);    


     
     for(int i=0; i<cad.size(); i++)
     {
          aux = p;   
          
          if(cad[i]== aux->dato)
               pop( p );
          else
             break;
     }
     
     if( p==NULL)
        cout << "ES PALINDROMA" << endl;
     else
        cout << "NO ES PALINDROMA" << endl;
}


int main()
{
    pila pila1 = NULL;    
    string palabra;
    
    cout<<"INGRESE UNA PALABRA"<<"\n";
    getline(cin, palabra);
    CHECApalindromo( pila1, palabra );
    
    system("pause");
    return 0;
}
