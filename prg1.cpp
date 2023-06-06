#include<iostream>
using namespace std;

	class data{		
		public:
			int id,age;
			char name[20],course[20],mail[20],city[20],collage[20];
			
			void setter(){
				cout<<"enter id:-";
				cin>>id;
				
				cout<<"enter a age:-";
				cin>>age;
				
				cout<<"enter name:-";
				cin>>name;
				
				cout<<"enter a course:-";
				cin>>course;	
				
				cout<<"enter a mail:-";
				cin>>mail;
				
				cout<<"enter city:-";
				cin>>city;
				
				cout<<"enter a collage:-\n\n";
				cin>>collage;
			}
			void getter(){
				
				cout<<"id="<<id<<endl;
				cout<<"age="<<age<<endl;
				cout<<"name="<<id<<endl;
				cout<<"course="<<course<<endl;
				cout<<"mail="<<mail<<endl;
				cout<<"city="<<city<<endl;
				cout<<"collage="<<collage<<endl;
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


