#include<iostream>
#include<cmath>
using namespace std;
 void myFx(){
 	cout<<"Hello! Welcome to Blak Enterprices."<<endl;
 }
 int add(int a,int b,int c){
 	a+b+c;
 	return (a+b+c);
 }
 int main(){
 	myFx();
 	int x,y,z;
 	cout<<"Enter two values to add: "<<endl;
 	cin>>x;
 	cin>>y;
 	z=add(x,y,0);
 	cout<<z;
 	return 0;
 }