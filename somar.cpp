#include <iostream>

using namespace std;

main(){
	float n, result;
	do{
		cout<< "Digite um numero positivo";
		cin >> n;
		if(n>=0){
			result += n;
		}
	}
	while(n>= 0);
	if(result==0){
		cout<< "nenhum numero foi digitad";
	} else{
		cout<< "o valor da soma foi "<<result;
	}
	
		cout<< "o resultado da soma foi " <<result;
	}


