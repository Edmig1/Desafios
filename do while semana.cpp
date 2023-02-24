#include <iostream>

using namespace std;

main(){
	
	int mes;
	
	do{
		cout << "informe um número de 1 a 7";
		cin >> mes;
		switch(mes){
			case 0: cout << "saindo do programa";
			break;
			case 1: cout << "segunda\n";
			break;
			case 2: cout << "terca\n";
			break;
			case 1: cout << "quarta\n";
			break;
			case 1: cout << "quinta\n";
			break;
			case 1: cout << "segunda\n";
			break;
		}
	} while(mes != 0);
