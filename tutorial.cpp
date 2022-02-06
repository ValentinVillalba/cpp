#include <iostream>
#include <string>
using namespace std;

//FUNCIONES:
int addNumbers(int num1, int num2){
	return num1 + num2;
}

double division(int a, int b){
	if(b==0){
		throw "ERROR DIVISION POR 0!"; //LANZA el error
	}

	return (a/b);
}
//CLASES:
class Book{
	private:
		string title;
		string author;
	public:
		//CONSTRUCTOR:
		Book(string title, string author){
			this->setTitle(title);
			this->setAuthor(author);;
		}

		void readBook(){
			cout << "Leyendo: " + this->title + " por " + this->author << endl;
		}
		
		//GETTERS Y SETTERS:
		string getTitle(){
			return this->title;
		}
		string getAuthor(){
			return this->author;
		}

		void setTitle(string title){
			this->title = title;
		}
		void setAuthor(string author){
			this->author = author;
		}

}; //LAS CLASES SIEMPRE TIENEN QUE TERMINAR CON ;

int main(){

	//IMPRIMIR:
	cout << "Hello" << endl;
	cout << "World";
	cout << "!" << endl;

	string name;
	cout << "What's your name: ";
	cin >> name;
	cout << "Your name is " << name << endl;

	//IF Y ELSE:
	if (name == "Kenfal"){
		cout << "Jaja el Kenfal" << endl;
	}

	else{
		cout << "You are not Kenfal" << endl;
	}

	//PUNTEROS:
	int num = 10;
	cout << &num << endl;

	int *pnum = &num;
	cout << pnum << endl;
	cout << *pnum << endl;

	//MANIPULACIÓN DE STRINGS:
	string example = "Hello";

	cout << "Longitud: " << example.length() << endl;
	cout << "Caracter de la posición 0: " << example[0] << endl;
	cout << "En qué posición está 'llo': " << example.find("llo") << endl;
	cout << "Nuevo string a partir de la posición 2: " << example.substr(2) << endl;
	cout << "Nuevo string desde 0 hasta 4 (sin incluirlo): " << example.substr(0, 4) << endl;

	//ARREGLOS:
	int numArray[] = {4, 6, 9, 24, 16, 30};
	numArray[0] = 5; //cambia la posicion 0 de 4 a 5

	int numArrayGrid[2][3] = {{9, 7, 3},{1, 2, 8}}; //grilla de dos arreglos con 3 items cada uno
	numArrayGrid[0][1] = 5; //cambia la posicion 1 del arreglo 0

	//FUNCIONES:
	int num1 = 4;
	int num2 = 2;
	
	cout << "La suma de 4 y 2 da: " << addNumbers(num1, num2) << endl;

	//SWITCH:
	char myGrade = 'A'; //LOS CHAR VAN SIEMPRE CON COMILLA SIMPLE
	switch(myGrade){
		case 'A':
			cout << "Aprobado" << endl;
			break; //sale del switch
		case 'F':
			cout << "Desaprobado" << endl;
			break;
		default: //ante cualquier otro caso hace lo siguiente:
			cout << "Nota invalida" << endl;
			//no hace falta poner break en default
	}

	//WHILE:
	cout << "While:" << endl;
	int index = 0;
	while(index <= 5){
		cout << index << endl;
		index++;
	}

	cout << "Do While:" << endl;
	index = 0;

	do{
		cout << index << endl;
		index++;
	}while(index <=5);

	//FOR:
	cout << "For:" << endl;
	//indice, condicion para CONTINUAR, qué hacer en cada iteración.
	for(int i = 0; i < 5; i++){
		cout << i << endl;
	}

	//EXCEPCIONES:
	try{
		division(10,0);
	}
	catch (const char* msg){ //ATRAPA el error lanzado por la funcion division() y muestra el mensaje de error.
		cerr << msg << endl; //el mensaje se imprimo con cerr en lugar de cout (C ERROR)
	}

	//CLASES:
	//los atributos abstractos se llaman VIRTUAL
	Book book1("Fight Club", "Dartron");
	book1.readBook();
	cout << book1.getAuthor() << endl;

	return 0;
}

//FIN DEL PROGRAMA.
