#include<iostream>
using namespace std;
int main()
{
    // (power a,b)
    int a;
    int b;
    int ans =1;
cout<<"Enter the value of a :"<<endl;
cin>>a;
cout<<"Enter the value of b :"<<endl;
cin>>b;
for(int i=1; i<=b;i++)
{
    ans=a*ans;

}
cout<<"The Power of "<< a <<"and"<<b<<":"<<ans<<endl;
}