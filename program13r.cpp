// CONSTRUCTORS //
//constructor is a special member functions with the same name as of the class
//It is used to initialise the objects of its class.
//It is automatically invoked whenever an object is created.
#include<iostream>
using namespace std;
class Complex{
	int a,b;
	public:
		Complex(void);//constructor declaration
		void printNumber(){
			cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
		}
		
};
 Complex :: Complex(void)//---> This is a default constructor as it takes no parameters 
 {
 	a=0;
 	b=0;
 }
  int main(){
  	Complex c1,c2,c3;
  	c1.printNumber();
  	c2.printNumber();
	c3.printNumber();
	return 0;
  }
  
  
  
 /* class Complex{
  	int a,b;
  	public:
  		Complex(int,int);
  		
  		void printNumber(){
			cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
		}
  		
  };
    Complex :: Complex(int x, int y)//--> this is a parametrized constructor as it takes 2 parameters
  {
  	a=x;
  	b=y;
  }
  
  int main(){
  	//implicit call
  	Complex a(4,6);
  	//explicit call
  	Complex b(5,7);
  	 
  	a.printNumber();
  	b.printNumber();
  	
  	return 0;
  }*/
  
  
  /*class point{
  	int x,y;
  	public :
  		point(int a, int b){
  			x=a;
  			y=b;
  			
		  }
	void displayPoint(){
		cout<<"The point is ("<<x<<","<<y<<")"<<endl;
	}	  
		  
		  
  };
  int main(){
  	point p(1,1);
  	p.displayPoint();
  	 
  	point q(4,6);
  	q.displayPoint();
  	
  	return 0;
  }*/
  
  
  
