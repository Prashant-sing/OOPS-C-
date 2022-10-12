//FRIEND FUNCTION//
#include<iostream>
using namespace std;
class complex{
	int a,b;
	friend Complex sumComplex(ComplexO1,ComplexO2);
	public:
		void setNumber(int n1, int n2){
			a=n1;
			b=n2;
		}
		
		void printNumber(){
			cout<<"Your number is"<<a<<"+"<<b<<"i"<<endl;
		}
};
Complex SumComplex(ComplexO1,ComplexO2){
	Complex O3;
	O3.setNumber((O1.a+O2.a),(O1.b+O2.b));
	return O3;
}
int main(){
	Complex C1,C2,sum;
	C1.setNumber(1,4);
	C1.PrintNumber();
	
	C2.setNumber(5,8);
	C2.printNumber();
	sum=sumComplex(C1,C2);
	sum.printNumber();
	return 0;
}










