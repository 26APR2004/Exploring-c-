//Create multiple objects of one class
#include<iostream>
#include<string>
using namespace std;

class apps
{
 public:
    string founder;
    int storage;
    int stars;
    string feedback;
};

int main()
{
//create an object of app

apps facebook,telegram;
facebook.founder="Marks Zuckerberg";
facebook.storage=714;
facebook.feedback="Good";

telegram.founder="Pavel Valeryevich Durov";
telegram.storage=320;
telegram.feedback="Bad";

//print attribute values

cout<<"Founder of facebook:  "<<facebook.founder<<"\n"<<"storage of facebook:  "<<facebook.storage<<" \n"<<"feedback of facebook: "<<facebook.feedback<<"\n"<<endl;

cout<<"Founder of telegram:  "<<telegram.founder<<" \n"<<"storage of telegram:  "<<telegram.storage<<"\n "<<"feedback of telegram: "<<telegram.feedback<<" \n"<<endl;
}
