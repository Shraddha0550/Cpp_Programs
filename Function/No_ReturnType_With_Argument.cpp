#include<iostream>
using namespace std;
void sum(int a , int b)
{
    int res = 0;

    res = a + b;
    cout<<res;

}

int main()
{
   int x, y;
   cout<<"Enter First Number: ";
   cin>> x;

   cout<<"Enter second Number: ";
   cin>>y;

   sum(x,y);

    return 0 ;
}
