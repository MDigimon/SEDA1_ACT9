#include <iostream>

#include "templates.h"

using namespace std;

int main() {
	List<string> list1;
    int element,dimention,pos,dat;
    string id_ ,nombre_,correo_,numero_,direccion_;
    char opc;
    do{
    		
        cout<<"1-.Agregar contacto \n";
        cout<<"2-.Buscar contacto.\n";
        cout<<"3-.Eliminar contacto.\n";
        cout<<"4-.Buscar por posicion\n";
        cout<<"5-.Invertir\n";
        cout<<"6-.Buscar por nombre\n";
        cout<<"7-.Ordenar alfabeticamente\n";
        cout<<"8-.Imprimir datos\n";
        cout<<"9-.Modificar\n";
        cout<<"10-.Eliminar Todo\n";
        cout<<"0-.Salir..\n";
        cout<<"Seleccione un opcion\n";
         do{
		 cin.sync();
		 cin>>opc;
        if(opc<='0' || opc>='9'){
                 	cout<<"Ingresa puros numeros"<<endl;
				}
		}while(opc<='0'|| opc>='9');
         
         
         
         switch (opc){
             case '1':{
             	system ("CLS");
             	cin.sync();
				  cout<<"ID \n";
             	do{
             		
                getline(cin,id_);
                
                   	if(id_<="0" || id_>="9"){
                 		cout<<"Ingresa puros numeros"<<endl;
					 }
				}while(id_<="0"|| id_>="9");
				 
               
                cout<<"Nombre \n";
                getline(cin,nombre_);
             

                list1.add_head(id_,nombre_);
                list1.print();
                break;
             }
            
             case '2':{
                 getline(cin,id_);
                cout<<"Busca un elemento\n";
               do{
			   	
			    getline(cin,id_);
			    	if(id_<="0" || id_>="9"){
                 		cout<<"Ingresa puros numeros"<<endl;
					 }
                }while(id_<="0"|| id_>="9");
                list1.Search(id_);
                break;
             }
             case '3':{
                cout<<"Elimina posicion\n";
                cin>>pos;
                list1.delete_position(pos);
                list1.print();
                break;
             }
             case '4':{
                cout<<"Ingresa la posicion que quieres buscar\n";
                cin.sync();
                cin>>element;
                list1.buscar_pos(element);
                break;
             }
             case '5':{
             
             break;
             }
             case '6':{
            
                break;
             }
             case '7':{
                    list1.print();
                    list1.Ordenar();
                    list1.print();
                    break;
             }
             case '8':{
                list1.print();
                break;
             }
             case '9':{
                cout<<"Ingresa la posicion del dato a modificar\n";
                cin.sync();
                cin>>dat;
                list1.Modificar(dat);
                break;
             }
              case '0':{
                    list1.Eliminar_Todo();
                    break;
              }

        }
        cout<<endl;
        system("pause");
        system("cls");
    }while(opc!=0);
	
	
	return 0;
}
