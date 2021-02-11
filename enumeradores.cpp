#include<iostream>
#include<string>
using namespace std;


enum comida{tacos, pizza, espagueti, pollo, chocomilk};
struct comer{
	string A;
	comida tipo;
};

int main(){
		
	comer cmda[5];
	
	cmda[0].A="Juan";
	cmda[0].tipo=tacos;
	
	cmda[1].A="Charles";
	cmda[1].tipo=pizza;
	
	cmda[2].A="Gerardo";
	cmda[2].tipo=pollo;
	
	cmda[3].A="Cesar";
	cmda[3].tipo=chocomilk;
	
	cmda[4].A="Manuel";
	cmda[4].tipo=espagueti;
	
	
	for(int i=0;i<6;i++){
		switch(cmda[i].tipo){
			case pollo:
				cout<<cmda[i].A<<" comio pollo"<<endl;
			break;
			case tacos:
				cout<<cmda[i].A<<" comio tacos"<<endl;
			break;
			case espagueti:
				cout<<cmda[i].A<<" comio espagueti"<<endl;
			break;
			case pizza:
				cout<<cmda[i].A<<" comio pizza"<<endl;
			break;
			case chocomilk:
				cout<<cmda[i].A<<" tomo chocomilk"<<endl;
			break;
		}
	}
	return 0;
}
