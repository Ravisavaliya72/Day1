#include<iostream>
using namespace std;
main(){
	int a1,a2,a3,a4,a5,arr[4],i;
	cout<<"Enter First Number = ";
	cin>>a1;
	cout<<"Enter Second Number = ";
	cin>>a2;
	cout<<"Enter Third Number = ";
	cin>>a3;
	cout<<"Enter Fourth Number = ";
	cin>>a4;
	cout<<"Enter Fifth Number = ";
	cin>>a5;
	a1=a1*a1*a1;
	a2=a2*a2*a2;
	a3=a3*a3*a3;
	a4=a4*a4*a4;
	a5=a5*a5*a5;
	arr[0]=a1;
	arr[1]=a2;
	arr[2]=a3;
	arr[3]=a4;
	arr[4]=a5;
	cout<<"Your Array of Cubes as follow\n";
	cout<<"arr[0]="<<a1<<endl;
	cout<<"arr[1]="<<a2<<endl;
	cout<<"arr[2]="<<a3<<endl;
	cout<<"arr[3]="<<a4<<endl;
	cout<<"arr[4]="<<a5<<endl;
}
