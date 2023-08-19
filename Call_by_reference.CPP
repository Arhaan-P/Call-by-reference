#include <iostream.h>
#include <conio.h>
void swap(int&x, int&y);
void main() {
	clrscr();
	int a,b;
	cout<<"Enter two numbers \n" ;
	cin>>a>>b ;
	cout<<"Before swapping \n "<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	swap(a,b);
	cout<<"After swapping \n";
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	getch();
}
void swap(int&x, int&y){
	int t=x;
	    x=y;
	    y=t;
}