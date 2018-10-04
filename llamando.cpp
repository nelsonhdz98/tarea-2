//nelson gudiel hernandez fuentes
/*una empresa de telefonia necesita calcular el total a pagar por cada cliente 
segun la siguiente tabla
1---10min----$0.05ctvs
11min---15min---$0.08ctvs
+ 15min---$0.10*/
#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <MMSystem.h>
using namespace std;

float total_pagar(float minutos);//declaracion de la funcion que recibe valores de tipo flotantes
void hz(); //declaracion de la funcion no retorna/no recibe parametros

int main()  {
	
	system("color 3E");

	int respuesta; //variable para que el usuario ingrese si desea hacer consultar otra vez
	
	do{ //blucle donde validara los datos
	system("cls");
	float min =0; // variable para los minutos
	float pagando=0; //variable para el resultado de pago
	
	do{ 
		cout<<"Digite el total de minutos: "<<endl;cin>>min; //se le pide al usuario que ingrese la cantidad de minutos
	 
	}while(min<0);
    	
	pagando = total_pagar(min);
	
	cout<<"El total a pagar es: $"<<pagando<<endl<<endl; //imprime el total de pago al usuario

	cout<<"Desea consultar otra vez \n1.Si\n2.No"<<endl; cin>>respuesta; //pide al usuario si quiere realizar otra consulta.

	}while(respuesta == 1); //o lo igualara en 1
	hz();
	cout<<"programa desarrollado por NELSON HERNANDEZ"<<endl;
	hz();
	
	
	system("pause");
	return 0;
	
	
}


//funcion para calcular el total a pagar por el usuario
float total_pagar(float minutos){
	float pagar=0; //variable 
	
	if(minutos <=10){// sentencia para los minutos menores o igual a 10
		pagar = minutos * 0.05;
	}
	else if(minutos > 10 && minutos <= 15 ){ //si la sentencia anterior no se cumple pasara a esta sentencia
		pagar = minutos * 0.08;
	}
	else if(minutos > 15){//si lo que el usuario a ingresado es mayor a quince entonces pasa a esta sentencia
		pagar = minutos * 0.1;
	}
	
	
	return pagar;// retorna en pagar
}

void hz(){
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
}
