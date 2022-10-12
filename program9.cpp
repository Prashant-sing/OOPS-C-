#include<iostream>
using namespace std;
/*class Employee{
	int id;
	int salary;
	public:
		void setid(void){
			salary=122;
			cout<<"Enter the id of employee"<<endl;
			cin>>id;
		}
		void getid(void){
			cout<<"The id of this employee is:"<<id<<endl;
			
		}
};
int main(){
	Employee harry,rohan,lovish,shruti;
	Employee fb[4];
	for(int i=0;i<4;i++){
		fb[i].setid();
		fb[i].getid();
	}*/
	
class complex{
	int a;
	int b;
	public:
		void setData(int v1,int v2){
			a=v1;
			b=v2;
		}
		void setDataBySum(complex O1,complex O2){
			a=O1.a + O2.a;
			b=O1.b + O2.b;
		}
		void printNumber(){
			cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
		}
};	
	int main(){
		complex c1,c2,c3;
		c1.setData(1,2);
		c1.printNumber();
		
		c2.setData(3,4);
		c2.printNumber();
		
		c3.setDataBySum(c1,c2);
		c3.printNumber();
	
	
	
	return 0;
}
