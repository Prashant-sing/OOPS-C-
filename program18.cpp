#include<iostream>
using namespace std;
//base class
class Employee{
	public :
		int id;
		float salary;
		Employee(int inpId){
			id = inpId;
			salary = 34.0;
		}
		Employee(){}//default constructor
		
};
//derived class syntax
/*class {{derived -class-name}}: {{visibility-mode}} {{base-class-name}}
  {
  classs members /methods/etc.
}
Note :-
1.default visibility mode is private.
2.Public visibility mode: public members of the base class becomes public members of the derived class.
3.private visibility mode: public members of the base class becomes private members of the derived class.
4.private members are never inherited.*/
// Creating a programmer class derived from Employee base class.
class Programmer : public Employee
{
	public:
		int languageCode:
			Programmer(int inpId)
			{
				id = inpId;
				languagecode = 9;
				
			}
			void getData(){
				cout<<id<<endl;
				
			}
};
 int main(){
 	Employee harrry(1),rohan(2);
 	cout<<harry.salary<<endl;
 	cout<<rohan.salary<<endl;
 	Programmer skillF(10);
 	cout<<skillF.languageCode<<endl;
 	cout<<skillF.id<<endl;
 	skillF.getData();
 	return 0;
 }
