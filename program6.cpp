//USER DEFINED FUNCTION//
#include<iostream>
using namespace std;
 /* int sum(int a, int b){
	int c=a+b;
	return c;
}
int main(){
	int num1,num2;
	cout<<"Enter first number :"<<num1;
	cin>>num1;
	cout<<"Enter second number :"<<num2;
	cin>>num2;
	cout<<"The sum of two numbers is :"<<sum(num1,num2);
	return 0;
}*/
// APPLICATION OF FUNCTION PROTOTYPE//
/* sum(int,int);int
void g();
int main(){
	int num1,num2;
	cout<<"Enter the value of num1";
	cin>>num1;
	cout<<"Enter the value of num2";
	cin>>num2;
	cout<<"The sum of num1 and num2 is:"<<sum(num1,num2)<<endl;
	cout<<"Hello Good Morning!";
	return 0;
	
}
int sum(int a,int b){
	int c=a+b;
	return c;
}*/
//user defined function--TSRN--
//call by reference//
/*void swap(int* a,int* b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main(){
	int x=4,y=5;
	swap(&x,&y);
	cout<<"swapped value of x is:"<<x<<endl;
	cout<<"swapped value of y is:"<<y<<endl;
	return 0;
}*/
/*call by reference using reference variables
void swapReferenceVar(int &a,int &b){
	a=a+b;
	b=a-b;
	a=a-b;
}
int main(){
    int x=6,y=5;
	swapReferenceVar(x,y);
	cout<<"swapped value of x is:"<<x<<endl;
	cout<<"swapped value of y is:"<<y<<endl;
	return 0;	
}*/
//RETURN BY REFERENCE//
/*int & swapReferenceVar(int &a,int &b){
	a=a+b;
	b=a-b;
	a=a-b;
	return a;
}
int main(){
	int x=45,y=34;
	swapReferenceVar(x,y)=766;
	cout<<"swapped value of x is:"<<x<<endl;
	cout<<"swapped value of y is:"<<y<<endl;
	return 0;
}*/
//--RECURSIONS AND RECURSIVE FUNCTIONS
/*factorial
int factorial(int n){
	if(n<=1){
		return 1;
	}
	return n*factorial(n-1);
}
int main(){
	int a;
	cout<<"Enter the value of a "<<endl;
	cin>>a;
	cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
	return 0;
	
}*/
//FUNCITONS OVERLOADING //
int sum(int a,int b){
	cout<<"using functions with 2 arguements"<<endl;
	return a+b;
}
int sum(int a,int b, int c){
	cout<<"using functions with 3 arguements"<<endl;
	return a+b+c;
}
//volume of cylinder
int volume(float r,int h){
	return (3.14*r*r*h);
}
//volume of cube 
int volume(int a){
	return (a*a*a);
}
//volume of cuboid 
int volume(int l,int b, int h){
	return (l*b*h);
	
}

int main(){
	cout<<"The sum of 3 and 6 is:"<<sum(3,6)<<endl;
	cout<<"The sum of 3,7 and 6 is:"<<sum(3,7,6)<<endl;
	cout<<"The volume of cuboid is:"<<volume(3,7,6)<<endl;
	cout<<"The volume of cube is:"<<volume(3)<<endl;	
	cout<<"The volume of cylinder is:"<<volume(3,6)<<endl;
    return 0;
}














