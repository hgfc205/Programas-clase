#include<iostream>
using namespace std;
int doubleNumber(int x){
	int doble;
	
	doble=x*2;
	
	return doble;
}

int main(){
	int num,doble;
	cout<<"ingrese un numero: ";
	cin>>num;
	
	doble=doubleNumber(num);
	
	cout<<"El doble del numero ingresado es: "<<doble;
	return 0;
}
