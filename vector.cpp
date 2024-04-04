//vector & constant
#include<iostream>
#include<vector>
# define MAX 100

using namespace std;

int main()
{
vector<int>arr(MAX);
int n,sum=0;
cin>>n;
for(int i=0;i<n;i++)
{
arr[i]=i;
sum+=arr[i];
}
cout<<"Array of sum:"<<sum<<endl;
return 0;
}
