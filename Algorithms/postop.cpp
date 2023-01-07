#include <iostream>

using namespace std;
int main(){
	int max=0;
	int pos = 0;
	string cadena="x+z*w";
	//string cadena="x+z*w/t^y-v";
	string epos="";
	char pila[7];
	int size= cadena.length();
	while(size > pos){ // 7 0
		if(cadena[pos]=='+' || cadena[pos]=='*' || cadena[pos]=='/'|| cadena[pos]=='^'){
			 
			pila[max]=cadena[pos];
			cout << "Pila " << max << " " << pila[max] << endl;
			max++;
	    }else{
			epos+=cadena[pos];
			
		}
		cout << "Iteracion " << pos << " - " << epos << endl; 
		pos++;
		
	}
	int i=0;
	while(i<=max){
		epos+=pila[i];
		cout << pila[i];
		i++;
	}
	cout << endl << endl << "Valor inicial " << cadena << " " << endl << " Resultado : ";
	cout << epos;
}
