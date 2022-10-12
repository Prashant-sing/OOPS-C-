#include<iostream>
using namespace std;
class Employee{
	int Id;
	static int count;
	public:
		void setData(void){
			cout<<"Enter the Id"<<endl;
			cin>>Id;
			count++;
		}
		void getData(void){
			cout<<"The Id of this employee is "<<Id<<" and this is employee number "<<count<<endl;
			
		}

    //int Employee :: count=1000;//static variable
   static void getCount(void){
   	cout<<"The value of count is"<<count<<endl;
   }
};

    int Employee :: count;
    
    int main(){
    	Employee harry,rohan,lovish;
    	
    	harry.setData();
    	harry.getData();
    	Employee :: getCount(); 
    	rohan.setData();
    	rohan.getData();
    	Employee :: getCount();
    	lovish.setData();
    	lovish.getData();
    	Employee :: getCount(); 
    	return 0;
    	
    	
    	
    	
    	
    	
    	
    	
    	
	}
