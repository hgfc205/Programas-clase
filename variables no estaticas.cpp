#include <iostream>

int cont;

void incremento(){
	std::cout<<cont<<"\n";
	cont++;
}

void incr_estatica(){
	int static x=0;
	std::cout<<x++<<"\n";
}

void incr_estatica2(){
	int x=0;
	std::cout<<x++<<"\n";
}

int main(){
	std::cout<<"\nvariable global (sin estatica)\n";
	for (int i=1; i<=11; i++){
		incremento();
	}
	
	std::cout<<"\nvariable local con estatica\n";
	for(int s=0; s<=10; s++){
		incr_estatica();
	}
	
	std::cout<<"\nvariable local sin estatica\n";
	for(int f=0; f<10; f++){
		incr_estatica2();
	}
	return 0;
}
