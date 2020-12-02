#ifndef templates
#define templates

#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

template<typename T>
class Nodo{
public:
    Nodo();
    Nodo(T,T);
    ~Nodo();
    Nodo *next;
    T id;
    T nombre;  
    void print();
};


template<typename T>
Nodo<T>::Nodo()
{   id= NULL;
    nombre=NULL;
    next=NULL;
}


template<typename T>
Nodo<T>::Nodo(T id_,T nombre_ )
{
    id=id_;
    nombre=nombre_;  
    next=NULL;
}


template<typename T>
void Nodo<T>::print()
{
    cout<<"Id:"<<id<<endl;
    cout<<"Nombre:"<<nombre<<endl;
  
}


template<typename T>
Nodo<T>::~Nodo(){}


template<class T>
class List
{
private:
    Nodo<T> *ptrHead;
    int number_nodo;
public:
        List();
        ~List();

        void add_head(T,T);
        void add_end(T,T);
        void add_sort(T,T);
        void delete_position(int);
        void print();
        void Search(T);
        void buscar_pos(int);
        void invertir();
        void buscar_nom(T);
        void Eliminar_Todo();
        void Ordenar();
        void Modificar(int);
};


template<typename T>
List<T>::List()
{
    number_nodo=0;
    ptrHead=NULL;
}


 template<typename T>
 List<T>::~List(){}


		//Insertar al inicio
template<typename T>
void List<T>::add_head(T id_,T nombre_)
{
    Nodo<T> *new_nodo=new Nodo<T>(id_,nombre_);
    Nodo<T> *temp = ptrHead;
    if(!ptrHead){
        ptrHead=new_nodo;
    }
    else{
        new_nodo->next=ptrHead;
        ptrHead= new_nodo;
        while(temp){
            temp=temp->next;
        }
    }
    number_nodo++;
}


template<typename T>
void List<T>::add_end(T id_,T nombre_)
{
    
}



template <typename T>
void List<T>::add_sort(T id_,T nombre_)
{
    Nodo<T> *new_nodo= new Nodo<T> (id_,nombre_);
    Nodo<T> *temp=ptrHead;
    if (!ptrHead){
        ptrHead=new_nodo;
    }
    else{
            if(ptrHead->id==id_){
                new_nodo->next=ptrHead;
                ptrHead=new_nodo;
            }
            else{
                while(temp->next!=NULL){
                    temp= temp->next;
                }
                new_nodo->next=temp->next;
                temp->next=new_nodo;
            }
    }
    number_nodo++;
}

template<typename T>
void List<T>::delete_position(int pos){
	
   
}


template<typename T>
void List<T>::print()
{
 Nodo<T> *temp=ptrHead;
    if(!ptrHead){
        cout<<"La Agenda esta vacia\n";
 }
    else{
        while(temp){
            temp->print();
            cout<<"\n\n";
                temp=temp->next;
        }
    }

}

template<typename T>
void List<T>::Search(T id_)
{
    Nodo<T> *temp=ptrHead;
    int count1=1,count2=0;
    while(temp){
        if(temp->id==id_){
            cout<<"Encontrado en la posicion:"<<count1<<endl;
            count2++;
        }
        temp=temp->next;
        count1++;
    }
    if(count2==0){
        cout<<"No existe el dato\n";
    }
    cout<<"\n\n";
}


template<typename T>
void List<T>::buscar_pos(int pos)
{
    int band=0;
    Nodo<T> *aux=ptrHead;
    if(number_nodo==0)
        cout<<"Agenda esta vacia\n";
    else{
    if(pos<number_nodo+1&&pos>0){
        for(int i=1;i<pos;i++){
            cout<<"aux"<<i<<"="<<aux->id<<endl;
                aux=aux->next;
        }
    cout<<"Id-."<<aux->id<<endl;
    cout<<"Nombre-."<<aux->nombre<<endl;
   
        }
        else
        cout<<"Posicion invalida\n";
    }
}

template<typename T>
void List<T>::invertir()
{
   
}

template<typename T>
void List<T>::buscar_nom(T nom)
{
   
}

template<typename T>
void List<T>::Eliminar_Todo()
{
   
}

template<typename T>
void List<T>::Ordenar()
{
   
}

template<typename T>
void List<T>::Modificar(int pos)
{
    if(ptrHead==NULL)
        cout<<"La agenda esta vacia\n";
    else{
            if(pos>number_nodo)
                cout<<"posicion invalida\n";
            else if(pos<0)
                cout<<"posicion invalida\n";
    else{
            char opc;
            string cad;
            Nodo<T>* aux1=ptrHead;
            for(int i=1;i<pos;i++){
                aux1=aux1->next;
            }

            do{
            cout<<"1-.Cambiar ID\n";
            cout<<"2-.Cambiar Nombre\n";
           
            cout<<"0-.Salir\n";
            cin.sync();
            cin>>opc;
            switch(opc){
                case '1':{
                    getline(cin,cad);
                    cout<<"Ingresa el nuevo Id\n";
                    getline(cin,cad);
                    aux1->id=cad;
                    break;
                }
                case '2':{
                    getline(cin,cad);
                    cout<<"Ingresa el nuevo nombre\n";
                    getline(cin,cad);
                    aux1->nombre=cad;
                break;
                }
              
               }
               system("cls");
            }while(opc!='0');
        }
    }
}


#endif
