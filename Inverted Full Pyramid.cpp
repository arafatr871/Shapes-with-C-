/* Inverted Full Pyramid */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int l=n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=l; j++)
        {
            cout<<"*";
            cout<<" ";
        }
        l--;
        cout<<""<<endl;
    }
    return 0;
}
