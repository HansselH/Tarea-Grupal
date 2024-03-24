#include<iostream>
using namespace std;
void Programa_11(){
	int decimal;
	short binario[8];
	cout<<"Ingrese el numero decimal: ";
	cin>>decimal;
	
	for(int i=0; i<8; i++){
		binario[i] = decimal % 2;
		decimal /= 2;
	}
	cout<<"El numero binario es: ";
	for(int i=7; i>=0; i--){
		cout<<binario[i];
	}
	cout<<endl;
	system("pause");
}

