// Declaring outside class
#include<iostream>
#include<string>
using namespace std;
class car
{
	public:
		string car_company;
		int car_number;
		
void car_speed();
void car_wheelers();
};
void car::car_speed()
{
	cout<<"car company:"<<car_company<<endl;
}
void car::car_wheelers()
{
	cout<<"car has number:"<<car_number<<endl;
}

int main()
{
	car c1;
	c1.car_company="Maruti";
	c1.car_number=1234;
	c1.car_speed();
	c1.car_wheelers();
	return 0;
}
