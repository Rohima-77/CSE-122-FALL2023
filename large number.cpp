#include<iostream>
using namespace std;

int main()
{
    int x,y,z;
     cin >> x >>y >> z;
     if(x>y && x>z)
     {
         cout<<"x is large number"<<endl;
     }
     else if(x<y && y>z)
     {
         cout<<"y is large number"<<endl;
     }

     else if(z>x && z>y)
     {
         cout<<"z is larger number"<<endl;
     }



     return 0;
}
