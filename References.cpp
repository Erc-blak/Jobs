#include<iostream>
using namespace std;
int main(){
	string food="rice";
	string &meal=food; //reference to food with the sign &
	
	cout<<food<<endl;
	cout<<meal<<endl;
	cout<<&meal<<endl;//reference to address of food
	cout<<&food<<endl;//reference to address of food
	return 0;
}