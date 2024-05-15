//structure array in c++
#include<bits/stdc++.h>
using namespace std;

struct point
{
  int x,y;  
};
//Driver code
int main()
{
    point p[15]; //object
    //acess member
     for(int i=0;i<15;i++)
   { cin>>p[i].x;
    cin>>p[i].y;}
   //print out members
    for(int i=0;i<15;i++)
    cout<<p[i].x<<" "<<p[i].y<<" ";
    return 0;
    
}
