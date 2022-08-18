#include<iostream>
using namespace std;
main(){
	int a,b;
	cout<<"If you want to find leap year\n\n Please enter a year between = ";
	cin>>a;
	cout<<"To = ";
	cin>>b;
	while(a<=b){
		if(a%4==0)
		cout<<a<<" is a leap year\n";
		a++;
	}
}
