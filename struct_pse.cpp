#include<bits/stdc++.h>
using namespace std;

struct person
{
    public:
     string name;
     int age;
     float height;
     
};
struct student:private person
{
    public:
     string subject;
     int marks;
     float  student_id;
     
};
struct employee: private person
{
    public:
     string compny;
    int  package;
    int employee_id;
     
};

void displayperson(struct person p1)
{
    cout<<setfill('-');
    cout<<setw(50)<<"\n";
    cout<<"name:"<<p1.name<<"\n";
    cout<<"age:"<<p1.age<<"\n";
    cout<<"height:"<<p1.height<<"\n";
}
void displaystudent(struct student s1)
{
     cout<<setfill('-');
     cout<<setw(50)<<"\n";
    cout<<"subject:"<<s1.subject<<"\n";
    cout<<"marks:"<<s1.marks<<"\n";
    cout<<"student_id:"<<s1.student_id<<"\n";
}
void displayemployee(struct employee e1)
{
     cout<<setfill('-');
     cout<<setw(50)<<"\n";
    cout<<"compny nmae:"<<e1.compny<<"\n";
    cout<<"package:"<<e1.package<<"\n";
    cout<<"employee_id:"<<e1.employee_id<<"\n";
}

int main()
{
  struct person p1;  
  struct student s1;
  struct employee e1;
  p1.name="sujal";
  p1.age=20;
  p1.height=67;
  s1.subject="science";
  s1.marks=89;
  s1.student_id=234567;
  e1.compny="infocys";
  e1.package=2000000;
  e1.employee_id=4567;
    displayperson( p1);
   displaystudent( s1);
   displayemployee( e1);
return 0;
}
