#include<iostream>
#include<time.h>
using namespace std;

int main(){
	int numAlum;
	cout<<"ingrese el numero de alumnos: ";
	cin>>numAlum;
	cout<<endl;
	
	int cal[numAlum];
	float calTotal;
	for(int x=0; x<numAlum; x++){
		cout<<"ingrese su calificacion: ";
		cin>>cal[x];
		calTotal+=cal[x];
	}	
	
	calTotal=calTotal/numAlum;
	if(calTotal>9.4){
		calTotal=10;
	}
	
	cout<<"\ncalificacion final del salon: "<<calTotal;
	return 0;
}
