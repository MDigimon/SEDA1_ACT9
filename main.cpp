#include <iostream>

#include "templates.h"
#include "funciones.h"

using namespace std;

int main() {
	List<string> list1;
    string id_, nombre, pos, opc;
    int f=1;
    while(f == 1){
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
        
		cin.sync();
		getline(cin,opc);
		
        
        if(opc == "1"){
			system ("CLS");
            cin.sync();
			cout<<"ID \n";
            do{
            	getline(cin,id_);
            	if(id_<="0" || id_>="9"){
            	cout<<"Ingresa puros numeros"<<endl;
				}
			}while(id_< "0"|| id_ > "9");
			
            cout<<"Nombre \n";
            getline(cin,nombre);
            cout << endl << "1-.Agregar al inicio \n";
        	cout << "2-.Agregar al final\n";
        	cout << "2-.Agregar n una Posicion\n";
			cout << "0-.Cancelar\n";
			
			do{
				cout << "Seleccione un opcion:";
				cin.sync();
				cin>>opc;
				if(opc != "1" && opc != "2" && opc != "0"){
                cout<<"Ingresa puros numeros"<<endl;
            	}
			}while(opc != "1" && opc != "2" && opc != "3" && opc != "0");
			
			if(opc == "1")
				list1.add_head(id_, nombre);
			else if(opc == "2")
				list1.add_end(id_, nombre);
			else if(opc == "3")
				list1.add_sort(id_, nombre);
		}
    	
        else if(opc == "2"){
        	while(true){
        		cout << "ID a buscar: ";
        		getline(cin,id_);
        		if(comprobar(id_) == 1){
        			break;
				}
				cout << "Dato Incorrecto" << endl << endl;
			}
        	
        	list1.Search(id_);
		}
        
        else if(opc == "3"){
        	while(true){
        		cout << "Posicion a Eliminar: ";
        		getline(cin,pos);
        		if(comprobar(pos) == 1){
        			break;
				}
				cout << "Solo se Admiten Numeros" << endl << endl;
			}
        	list1.delete_position(stoi(pos));
		}
		
		else if(opc == "4"){
			while(true){
        		cout << "Posicion a Buscar: ";
        		getline(cin,pos);
        		if(comprobar(pos) == 1){
        			break;
				}
				cout << "Solo se Admiten Numeros" << endl << endl;
			}
			list1.buscar_pos(stoi(pos));
		}
		
		else if(opc == "5"){
			list1.invertir();
		}
		
		else if(opc == "6"){
			cout << "Nombre a Buscar: ";
        	getline(cin,nombre);
        	list1.buscar_nom(nombre);
		}
		
		else if(opc == "7"){
			list1.Ordenar();
		}
		
		else if(opc == "8"){
			list1.print();
		}
		
		else if(opc == "9"){
			while(true){
        		cout << "Posicion a Modificar: ";
        		getline(cin,pos);
        		if(comprobar(pos) == 1){
        			break;
				}
				cout << "Solo se Admiten Numeros" << endl << endl;
			}
			list1.Modificar(stoi(pos));
		}
		
		else if(opc == "10"){
			list1.Eliminar_Todo();
		}
		else if(opc == "0"){
			cout << "FIN DEL PROGRAMA" << endl;
			f = 0;
		}
		else{
			cout << "Opcion Incorrecto" << endl;
		}

        cout<<endl;
        system("pause");
        system("cls");
    }
	
	
	return 0;
}
