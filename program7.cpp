//            OOPS           //
#include<iostream>
using namespace std;
class Employee{
	private :
		int a,b,c;
		public:
		int d,e;
		void setdata(int a1,int b1,int c1);
		void getdata(){
		cout<<"The value of a is :"<<a<<endl;	
	    cout<<"The value of b is :"<<b<<endl;
	    cout<<"The value of c is :"<<c<<endl;
	    cout<<"The value of d is :"<<d<<endl;
	    cout<<"The value of e is :"<<e<<endl;	
		}
			
};
void Employee :: setdata (int a1,int b1,int c1){
	a=a1;
	b=b1;
	c=c1;
}
int main(){
	Employee harry;
	harry.d=34;
	harry.e=89;
	
	harry.setdata(23,34,45);
	harry.getdata();
	return 0;
	}

// NESTING OF MEMBER FUNCTIONS 
/*class binary {
   string s;
   public:
   void read (void);
   void chk_bin(void);
   void ones_compliment(void);
   void display(void);	
};
void binary :: read (void)
{cout<<"Enter a binary number"<<endl;
 cin>>s;
}
void binary :: chk_bin(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0'&& s.at(i)!='1'){
			cout<<"Incorrect binary format"<<endl; 
			exit(0);
		}
	}
}
void binary :: ones_compliment(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='0'){
			s.at(i)='1';
		}
	else{
		s.at(i)='0';
	
	  }	
	}
}







void binary :: display(void){
	cout<<"Displaying your binary number"<<endl;
	for(int i=0;i<s.length();i++){
		cout<<s.at(i);
	}
	cout<<endl;
}
 int main(){
 	binary b;
 	b.read();
 	b.chk_bin();
 	b.display();
 	b.ones_compliment();
 	b.display();
 	return 0;
 } */




