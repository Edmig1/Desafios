#include <iostream>

using namespace std;

void impremeMensagem(){
cout << "Ola, mundo!";	
}
float somar(float a, float b){
	return a+b;
}

main(){
	impremeMensagem();
	
	float numero, numero2;
	
	cout<< "informe o 1 numero";
	cin >> numero;
	
	cout<< "informe o 2 numero";
	cin >> numero2;
	
	cout<< somar (numero, numero2);
}
