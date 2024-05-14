//To acess  structure elements
#include<bits/stdc++.h>
using namespace std;

struct point
{
    int x,y;
};

int main()
{
    point p1={10,40};
    //Acessing members of point p1
    p1.x=20;
    cout<<"x="<<p1.x<<",y="<<p1.y;
    return 0;
}
