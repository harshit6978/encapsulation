#include<iostream>
using namespace std;

	class data{		
		public:
			int id,age;
			char name[20],bname[20],number[20],city[20],validity[20];
			
			void setter(){
				cout<<"enter id:-";
				cin>>id;
				
				cout<<"enter a age:-";
				cin>>age;
				
				cout<<"enter name:-";
				cin>>name;
				
				cout<<"enter a brand name:-";
				cin>>bname;	
				
				cout<<"enter a mobile number:-";
				cin>>number;
				
				cout<<"enter city:-";
				cin>>city;
				
				cout<<"enter a validity:-";
				cin>>validity;
			}
			void getter(){
				
				cout<<"id="<<id<<endl;
				cout<<"age="<<age<<endl;
				cout<<"name="<<name<<endl;
				cout<<"brand name="<<bname<<endl;
				cout<<"number="<<number<<endl;
				cout<<"city="<<city<<endl;
				cout<<"validity="<<validity<<endl;
			}
	};
	
	int main(){
		
		data obj,obj2,obj3,obj4,obj5;
		obj.setter();
		obj2.setter();
		obj3.setter();
		obj4.setter();
		obj5.setter();
		
		
		obj.getter();
		obj2.getter();
		obj3.getter();
		obj4.getter();
		obj5.getter();
		
		return 0;
	}


