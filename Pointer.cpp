#include<iostream>
using namespace std;
int main(){
	int a=0, r=7;
	string food="rice";
	string *p=&food;
	int *P;
	cout<<&a<<" "<<&r<<endl;
	cout<<*p<<endl;
	cout<<&food<<endl;
	cout<<p<<endl;
	cout<<*P<<" "<<&P;
	
	return 0;
}