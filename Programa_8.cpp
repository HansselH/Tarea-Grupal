#include<iostream>
using namespace std;
void Programa_8(){
	int tabla=0, res=0; 
	cout<<"Que tabla de multiplicar desea: ";
	cin>>tabla;
	for(int i=1; i<=10; i++){
		res=tabla*i;
		cout<<tabla<<" X "<<i<<" = "<<res<<endl;
	}
	system("pause");
}
