#include<iostream>

int main(){
	typedef int entero;
	
	std::cout<<"Realicemos una suma con typedef\n";
	std::cout<<"\nIngrese un numero: ";
	entero num1, num2, suma;
	std::cin>>num1;
	std::cout<<"\nIngrese otro numero: ";
	std::cin>>num2;
	suma=num1+num2;
	std::cout<<"\nEl resultado es: "<<suma;
	
	return 0;
}
