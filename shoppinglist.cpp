// shopping list c++ program using Array
#include<iostream>
using namespace std;
const int m=50;
class item
{
  int iteamcode[m];
  int iteamprice[m];
  int count;

 public:

    void cnt()
{
count=0;
}
void getitem();
void display();
void  displaysum();
void remove();
void displayitem();

};

void item :: getitem()
{
  cout<<"Enter the iteam code: "<<endl;
  cin>>iteamcode[count];
  cout<<"Enter the iteam cost : ";
  cin>>iteamprice[count];
  count++;
}

void item :: displaysum()
{
float sum=0;
for(int i=0;i<count;i++)
{
 sum=sum+iteamprice[i];
}
cout<<"Total value :"<<sum<<endl;

}

void item :: remove()
{
int a;
cout<<"Enter the iteam code: "<<endl;
cin>>a;
for(int i=0;i<count;i++)
 if(iteamcode[i]==a)
   iteamprice[i]=0;
}

void item :: displayitem()
{
cout<<"code price\n";
for(int i=0;i<count;i++)
{
cout<<iteamcode[i]<<"\n";
cout<<iteamprice[i];
}
}
int main()
{
item order;
order.cnt();

int x;
do{
   cout<<"\n 1: Add an  iteam"<<endl;
   cout<<"\n 2: Display total value";
   cout<<"\n 3: Delete an iteam";
   cout<<"\n 4: Display all iteams";
   cout<<"\n 5: quit";
   cout<<"\n\n choice :";
   cin>>x;
switch(x)
{
  case 1:
         order.getitem();
         break;
  case 2:
         order.displaysum();
         break;
  case 3:
         order.remove();
         break;
  case 4:
         order.displayitem();
         break;
  case 5:
         break;
  default:
         cout<<"Invalid output\n";
}
}while(x!=5);
}
