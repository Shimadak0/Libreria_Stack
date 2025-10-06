#include<iostream>
#include<stack>

using namespace std;

stack <int> pilaint;


int main() {


	// Primero preguntar cuantos numeros, luego n numeros

	int opcion;
	int numeroIngresado;
	char menu;
	char opcionN;

	cout << "Quiere ingresar un numero determinado de numeros? S/N ";
	cin >> menu;

	if (menu == 'S' || menu == 's') {
		cout << "Cuantos numeros quiere ingresar? ";
		cin >> opcion;
		cout << endl;

		while (opcion != 0) {
			cin >> numeroIngresado;
			pilaint.push(numeroIngresado);
			opcion--;
		}

		cout << "La pila tiene los valores de: ";
		while (pilaint.size() != 0) {
			cout << pilaint.top();
			pilaint.pop();
			cout << endl;
		}
	}
	else {
	numeroN:

		cout << "Ingrese un numero: ";
		cin >> numeroIngresado;		
		pilaint.push(numeroIngresado);
		cout << "Quiere ingresar otro numero? S/N" ;
		cin >> opcionN;
		cout << endl;
		if (opcionN == 'S' || opcionN == 's') {
			goto numeroN;
		}
		else {
			cout << "La pila tiene los valores de: ";
			while (pilaint.size() != 0) {
				cout << pilaint.top();
				pilaint.pop();
				cout << endl;
			}
		}

	}



	
















	return 0;




	/*pilaint.push("rogelio");
	pilaint.push("diego");
	pilaint.push("annet");
	pilaint.push("alberto");

	cout << "El peso de la pila es: ";
	cout << pilaint.size() << endl;


	cout << "El valor de esta celda en la pila es: ";
	cout << pilaint.top() << endl;
	pilaint.pop();

	cout << "El valor de esta celda en la pila es: ";
	cout << pilaint.top() << endl;
	pilaint.pop();*/

}