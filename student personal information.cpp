//student  personal information

#include<iostream>
#include<iomanip>

using namespace std;
// make new data type
struct student
{
	char name[30];
	int age;
	int marks;
 	
}s1;

//define function
displaystudent(struct student s1)
{
	cout<<"Enter the student name:"<<endl;
	cin>>s1.name;
	cout<<"Enter the student age:"<<endl;
	cin>>s1.age;
	cout<<"Enter the student mark:"<<endl;
	cin>>s1.marks;
//display student information
	cout<<"\nname\n"<<setw(5)<<s1.name;
	cout<<"\nage\n"<<setw(5)<<s1.age;
	cout<<"\nmarks\n "<<setw(5)<<s1.marks;	
}



int main()
{
	struct student s1;
	displaystudent(s1);//call the function
	return 0;
}

