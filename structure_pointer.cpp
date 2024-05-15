//structure pointer in c++
#include<bits/stdc++.h>
using namespace std;

struct point
{
  int x,y;  
};
//Driver code
int main()
{
    point p1={1,3}; //object
//Declatre ponter variable
 struct point *ptr=&p1;
 
 
    cout<<ptr->x<<" "<<ptr->y<<" ";
   
    return 0;
    
}
