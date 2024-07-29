// inclusion de bibliotecas y uso del namespace std
#include <iostream>
#include <cmath>
using namespace std;

//prototipado de funciones
int sumar(int, int);
int restar(int, int);
int multiplicar(int, int);
float dividir (float, float);
int potencia(int, int);
double raiz(int);

int main() {
	int opcion = 0;
	int a, b, c;
	float d, e, f;
	do {
		cout << "Bienvenido al Programa Calculadora v0.0\n";
		cout << "Que desea hacer?\n";
		cout << "1.-Sumar\n";
		cout << "2.-Restar\n";
		cout << "3.-Multiplicar\n";
		cout << "4.-Dividir\n";
		cout << "5.-Raiz\n";
		cout << "6.-Potencia\n";
		cout << "7.-Salir\n";

		cin >> opcion;

		switch (opcion) {
			case 1:
				cout << "Ingrese el numero a\n";
				cin >> a;
				cout << "Ingrese el numero b\n";
				cin >> b;
				c = sumar(a, b);
				cout << "El resultado es: " << c << endl;
			break;
			case 2:
				cout << "Ingrese el numero a\n";
				cin >> a;
				cout << "Ingrese el numero b\n";
				cin >> b;
				c = restar(a, b);
				cout << "El resultado es: " << c << endl;
			break;
			case 3:
				cout << "Ingrese el numero a\n";
				cin >> a;
				cout << "Ingrese el numero b\n";
				cin >> b;
				c = multiplicar(a, b);
				cout << "El resultado es: " << c << endl;
			break;
			case 4:
				cout << "Ingrese el numero a\n";
				cin >> d;
				cout << "Ingrese el numero b\n";
				cin >> e;
				f = dividir(d, e);
				cout << "El resultado es: " << f << endl;
			break;
			case 5:
				cout << "Ingrese el numero a\n";
				cin >> d;
				e = raiz(d);
				cout << "El resultado es: " << e << endl;
			break;
			case 6:
				cout << "Ingrese el numero a\n";
				cin >> a;
				cout << "Ingrese el numero b\n";
				cin >> b;
				c = potencia(a, b);
				cout << "El resultado es: " << c << endl;
			break;
			case 7:
				cout << "Saliendo...\n";
			break;
		}

	} while (opcion != 7);



	/*
	int num1, num2, num3;
	cout << "Suma De Dos Numeros\n";
	cout << "Ingrese el Numero 1: ";
	cin >> num1;
	cout << "Ingrese el Numero 2: ";
	cin >> num2;
	num3 = num1 + num2;
	cout << "EL resultado es: " << num3 << endl;
	*/


	//int num;
	//cout << "Numeros pares, Impares\n";
	//cout << "Ingrese el numero a comprobar\n";
	//cin >> num;
	//if (num % 2 == 0) {
	//	cout << "el numero es par\n";
	//}
	//else {
	//	cout << "el numero es impar\n";
	//}

	//int num;
	//cout << "Tabla de multiplicar\n";
	//cout << "Ingrese un numero: ";
	//cin >> num;
	//for (int i = 0; i <= 10; i++) {
	//	cout << num << "x" << i << "=" << num * i << "\n";
	//}

	/*int num1, num2;
	cout << "Suma con funciones\n";
	cout << "ingrese el numero 1: ";
	cin >> num1;
	cout << "ingrese el numero 2: ";
	cin >> num2;
	cout << "el resultado es: " << sumar(num1, num2);*/

	return 0;
}


int sumar(int a, int b) {
	int resultado = a + b;
	return (resultado);
}
int restar(int a, int b) {
	int resultado = a - b;
	return (resultado);
}

int multiplicar(int a, int b) {
	int resultado = a * b;
	return(resultado);
}
float dividir(float a, float b) {
	float resultado = a / b;
	return(resultado);
}
int potencia(int a, int b) {
	int resultado = pow(a, b);
	return(resultado);
}
double raiz(int a) {
	double resultado = sqrt(a);
	return(resultado);
}


