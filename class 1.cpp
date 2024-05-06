  #include<iostream>
  #include<string>
  using namespace std;
  class B_Div
  {
  	// Acess specifier
  	public:
    // Data members
    string my_name;
    string myfriend_name;
    int my_rollnumber;
    //Member function
    void printdetails()
    {
    	cout<<"My name is:"<<my_name<<"\n";
    	cout<<"my friend name is:"<<myfriend_name<<"\n";
    	cout<<"my roll number is:"<<my_rollnumber<<"\n";
	}
  };
  
  int main()
  {
  	//Declare an object of class
  	 B_Div s1;
  	 // Acessing Data member
  	 s1.my_name="sujal vijay mane";
  	 s1.myfriend_name="rishab mehata";
  	 s1.my_rollnumber=12;
  	 //Acessing member function
  	 s1.printdetails();
  	 return 0;
  }
