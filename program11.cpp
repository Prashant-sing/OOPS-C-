//FRIEND CLASSES AND MEMBER FRIEND FUNCTIONS
#include<iostream>
using namespace std;
//forward declaration
class complex;
class calculator{
	public:
		int add(int a, int b){
			return (a+b);
		}
		int sumRealComplex(Complex,Complex);
		int sumImagComplex(complex,Complex);
		
};
 class complex{
 	int a,b;
 	//Individually declaring functions as friends 
 	//friend int calculator :: SumRealComplex(Complex,Complex);
 	//friend int calculator :: SumImagComplex(Complex,Complex);
 	//Alter : Declaring the friend calculator class as a friend.
 	
    friend class calculator;
    public:
    	void setNumber(int n1, int n2){
    		a=n1;
    		b=n2;
    		
		}
		void printNumber(){
			cout<<"Your number is"<<a<<"+"<<b<<"i"<<endl;
			
		}
 };
 
 
    int calculator :: SumRealComplex(Complexo1,Complexo2){
    	return (o1.a+o2.a);
	}
	int calculator :: SumImagComplex(Complexo1,Complexo2){
		return(o1.b + o2.b);
	}
	int main(){
		Complex o1,o2;
		o1.setNumber(1,4);
		o2.setNumber(5,7);
		calculator calc;
		int res = calc.sumRealComplex(o1,o2);
		cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
		int resc = calc.sumImagComplex(o1,o2);
		cout<<"The sum of Imaginary part of o1 and o2 is "<<resc<<endl;
		return 0;
		
	}
