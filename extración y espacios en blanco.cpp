#include<iostream>

int main()
{
	char ch;
	while(std::cin>>ch){
		std::cout<<ch;
	}
	while(std::cin.get(ch)){
		std::cout<<ch;
	}

	char strBuf[11];
	std::cin.get(strBuf,11);
	std::cout<<strBuf<<'\n';

	std::cin.get(strBuf,11);
	std::cout<<strBuf<<'\n';

	char strBuf[100];
	std::cin.getline(strBuf, 100);
	std::cout<<strBuf<<'\n';
	std::cout<<std::cin.gcount()<<" caracteres fueron leídos "<<std::endl;
	return 0;
}
