#include<iostream>

int main(){
	
	std::cout<<verdadero<<" "<<falso <<'\n';  
	std::cout.setf(std::ios::boolalpha);  
	std::cout<<verdadero<<" "<<falso<<'\n'; 
	std::cout<<std::noboolalpha<<verdadero<<" "<<falso<<"\n'; 
	std::cout<<std::boolalpha<<verdadero<<falso<<'\n';
	
	std::ios::showpos
	
	//std::ios::showpos
	
	std::cout<<"showpos: "<<std::showpos<<42<<' '<<3.14<<' '<<0<<'\n';
	std::cout<<"noshowpos: "<<std::noshowpos<<42<<' '<<3.14<<' '<<0<<'\n';
	
	std::ios::uppercase
	//std::ios::uppercase
	
	std::cout <<std::hex<<std::showbase<<"0x2a with uppercase: "<<std::uppercase<<0x2a<<'\n'
	<< "0x2a with nouppercase: " << std::nouppercase << 0x2a << '\n'
    << "1e-10 with uppercase: " << std::uppercase << 1e-10 << '\n'
	<< "1e-10 with nouppercase: " << std::nouppercase << 1e-10 << '\n';
	
	  	
	return 0;
}
