#include<iostream>
using namespace std;
int add(int a, int b){
	return a+b;
}// this is function overload for the parameters have the same datatype as that of the function ("int").
int main(){
	int x,y,z;
	cout<<"Enter two adding integers: "<<endl;
	cin>>x>>y;
	z=add(x,y);
	cout<<z<<endl;
	return 0;
}