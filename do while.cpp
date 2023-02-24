#include <iostream>

using namespace std;

main(){
	
	int mes;
	
	do{
		cout << "informe o digito do mes";
		cin >> mes;
		switch(mes){
			case 0: cout << "saindo do programa";
			break;
			case 1: cout << "janeiro\n";
			break;
			case 2: cout << "fevereiro\n";
			break;
			
		}
	} while(mes != 0);
	
}
