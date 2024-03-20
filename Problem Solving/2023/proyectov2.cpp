#include <bits/stdc++.h>
using namespace std;

void menu();                         //funciones
void op1();
void op2();
void op3();
void op4();
void op5();

int resp,pmen,aux2,aux3,aux4;                            //variables globales
char comp[6],aux[6];

struct equipos{                    //struct 
	string nombre;
	int puntos;
}Equipos[8];

int main(){                           //main + switch
	menu();
	system("cls");
	switch(resp) {                    //menu switch
		case 1: 
		op1();
		return main();
		break;
		
		case 2: 
		op2();
		return main();
		break;
		
		case 3: 
		op3();
		return main();
		break;
		
		case 4: 
		op4();
		return main();
		break;
		
		case 5:
		op5();
		return main();
		break;
		
	    case 6:  
		break;
	default: cout << "El dato ingresado no es una opcion valida" << endl;
	}
	getch();
	return 0;
}

void menu() {            //Menu principal
    cout << "\nPresione cualquier tecla para continuar\n***************************************"<<endl;
	getch();
	system ("cls");
	cout << "Digite un numero segun la opcion que desea ejecutar"  << endl; 
	cout << " 1. Cargar equipos \n 2. Registrar partido \n 3. Registrar usuario \n 4. Registrar prediccion \n 5. Consultar prediccion \n 6. Salir" << endl; cin>>resp;

}
int cantidad_equipos;
void op1(){            //Leer txt
	cout << "Cantidad de equipos" << endl;
	cin >> cantidad_equipos;
    FILE *p;
    p=fopen("carros.txt","r");
    
   for (int i=0; i<n; i++){     //Guardar datos en el struct 
	    fscanf(p , "%s" , Equipos[i].nombre);
	    //fscanf(p , "%d" , &Vehiculo[i].Modelo);
	}
	fclose(p);        // Cerrar .txt
}

void op2(){     // Ingresar equipos y guardar resultados del partido despues de usar op1();
	/*string team[2];
	int goles[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "Ingrese el nombre del equipo "<<i+1 << endl; cin >> team[i];
		cout << "Ingrese los goles del equipo "<<i+1 << endl; cin >> goles[i];
	}
	int resultado = goles[0] - goles[1]; // if 0 empate <0 gana team 1 if >0 gana team2*/
	pairt<string, int> = p1  ;
	string nombreMatch;
    int a,b,f;
    cin >> nombreMatch;
    cin >> a >> b;
    f=a-b;
    pair.push_back({match,f})
	for (int i = 0; i < cantidad_equipos; i++)
	{
		if (strcmp(team[i],Equipos.nombre)==0)
		{
			
		}
	}
	
	
}

void op3(){    // Guardar persona
   vectorPersona <string, int , double>;
  cout << "Ingrese su nombre" << endl;
   string n; cin >> n;
   cout << "Ingrese su cedula" << endl;
   int c; cin >> c;
   cout << "Ingrese su inscripcion" << endl;
   double p; cin >> p;
   vectorPersona.push_back(n,c,p);
}

void op4(){ // Realizar prediccion correspondiente


}
void op5(){ // Colsultar predicciones

}


