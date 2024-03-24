#include<iostream>
using namespace std;

void Programa_9(){

	int res=0;
	
	for(int i=1; i<=10; i++){
		cout<<"\nTabla de multiplicar del "<<i<<endl;
		for(int ii=1; ii<=10; ii++){
			res=i*ii;
			cout<<i<<" X "<<ii<<" = "<<res<<endl;
		}
	}
	
	
	system("pause");
}
