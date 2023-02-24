#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, qnt;
	cout<< "Informe o número para a tabuada";
	cin>> numero;
	cout<< "informe até qual numero";
	cin>> qnt;
	
	for (int x = 0; x <= qnt; x++){
		cout<< numero << " x " << x << "=" << numero * x << endl;
	}
}


