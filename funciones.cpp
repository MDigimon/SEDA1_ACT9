#include "funciones.h"

int ordenar_alf(string a, string b){
	if(a.size() < b.size()){
		for(int i=0; i<a.size(); i++){
			if(a[i] < b[i])
				return 1;
			else if(a[i] > b[i])
				return 2;
		}
		return 1;
	}
	else{
		for(int i=0; i<b.size(); i++){
			if(a[i] < b[i])
				return 1;
			else if(a[i] > b[i])
				return 2;
		}
		if(a.size() == b.size())
			return 1;
		return 2;
	}
}

int comprobar(string dato){
	for(int i=0; i < dato.size(); i++){
		if(isdigit(dato[i]) == 0){
			if(dato[i] != 0){
				return 0;
			}
		}
	}
	return 1;
}
