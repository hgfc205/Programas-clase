#include<iostream>

using namespace std;

int suma(int x, int y){
	return x+y;
}

int main(){
	int num1,num2;
	cout<<"ingrese 2 numeros: ";
	cin>>num1>>num2;
	
	int resultado=suma(num1,num2);
	
	cout<<endl<<"\nEl resultado es: "<<resultado;
	return 0;
}
