#include<iostream>
using namespace std;
void para(int a, string b="Erick"){
	cout<<a<<endl;
	cout<<b<<endl;
}
int add(float a, int b, double c){
	return a+b+c;
}
int main(){
	int a,b,c;
	string H;
	cout<<"Enter an integer number: "<<endl;
	cin>>a>>b>>c;
	cout<<"Enter a string: "<<endl;
	cin>>H;
	para(a,H);
	para(0);
	cout<<add(a,b,c);//note: when variable a= decimal value the program will not perform inputr of other values and display unsatisfactory results.
	return 0;
}