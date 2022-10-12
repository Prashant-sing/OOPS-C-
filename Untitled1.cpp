#include<iostream>
using namespace std;
class shop{
	int ItemId[100];
	int ItemPrice[100];
	int counter;
	public:
		void initCounter(void){counter=0;}
		void setPrice(void);
		void displayPrice(void);
};
void shop :: setPrice(void){
	cout<<"Enter Id of your item no."<<counter+1<<endl;
	cin>>ItemId[counter];
	cout<<"Enter price of your item"<<endl;
	cin>>ItemPrice[counter];
	counter++;
}

void shop :: displayPrice(void){
	for(int i=0;i<counter;i++){
		cout<<"The Price of item with Id"<<ItemId[i]<<"is"<<ItemPrice[i]<<endl;
	
		
	}
}

int main(){
	Shop   dukaan;
	dukaan.initCounter();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.displayPrice();
	return 0;
}

















