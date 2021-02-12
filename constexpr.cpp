#include<iostream>
using namespace std;
constexpr int add(int a, int b){return a+b;}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<add(a,b);
	return 0;
}
