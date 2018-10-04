/*una empresa necesita calcular la cantidad de bebidas al dia y los insumos requeridos
para la elaboracion de los refrescos de acuerdo a la siguiente tabla 
soda---agua    azucar
       500ml    800g
jugo----600ml   700g
hacer un programa q permita ingresar la producion diaria y muestre en pantalla
los insumos requeridos.
validar*/
#include <cstdlib>
#include <iostream>

using namespace std;

void insumosdesoda(float produccionsoda); //Declaracion de la funcion que no retorna valores

void insumosdejugos(float produccionjugos);//declaracion de la funcion que no retorna valores 


int main(int argc, char** argv) {

	system("color 2E");
	
	float produccion = 0;//variable de tipo flotante que recibira un valor inicializado en cero

	int opc; //variable de tipo entero para que el usuario elija la opcion de soda o jugo
	
	cout<<"Desea calcular\n1.Soda\n2.jugo"<<endl; cin>>opc; //se le pregunta que tipo de refresco desea calcular
	
	switch(opc){// se utiliza la sentencia switc para evaluar la variable opcion
		case 1:// se realizara este caso si elige soda 
			cout<<"Digite la produccion de soda: "; cin>>produccion;//le pedimos al usuario que dijite la cantidad de sodas
			insumosdesoda(produccion);
			break;

		case 2://si elige este caso hara la  de jugo
				cout<<"Digite la produccion de jugos: "; cin>>produccion;//le pedimos al usuario que digite la cantidad de jugo
			insumosdejugos(produccion);
			break;
			
	}
	
    system("pause");

	return 0;
}


void insumosdesoda(float produccionsoda){// implementacion para la funcion de sodas
	float agua = 0; //variable de tipo flotante para la cantidad de agua

float azucar = 0;//variable de tipo flotante para la cantidad de azucar
	
	agua = produccionsoda* 500;//la cantidad de produccion por los 500ml de agua

	azucar = produccionsoda * 800;//la cantidad de produccion por los 500ml de azucar

		//se le muestra los insumos requeridos tanto de agua como de ae azucar al usuario para la soda
	cout<<"los insumos requeridos son:\nDe agua necesita "<<agua<<"ml"<<"\nDe azucar necesita "<<azucar<<"g"<<endl;
}


void insumosdejugos(float produccionjugos){ // implementacion para la funcion de jugos
	float agua=0;//variable de tipo flotante para la cantidad de agua
	
	float azucar=0;//variable de tipo flotante para la cantidad de azucar

	agua = produccionjugos * 600;//la cantidad de produccion por los 600ml de agua
	
	azucar = produccionjugos *700;//la cantidad de produccion por los 700ml de azucar
	
		//se le muestra los insumos requeridos tanto de agua como de ae azucar al usuario para los jugos
	cout<<"los insumos requeridos para "<<produccionjugos<<" jugos son:\nDe agua necesita "<<agua<<"ml"<<"\nDe azucar necesita "<<azucar<<"g"<<endl;	
	
}

