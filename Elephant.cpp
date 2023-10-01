#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n , minimumstep;
    cin >> n;
 
    if(n % 5 == 0)
    {
        minimumstep = n / 5;
    }
    else
    {
        minimumstep = n / 5 + 1;
    }
    cout << minimumstep << endl;
    return 0;
}

