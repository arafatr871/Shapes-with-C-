/* Full Pyramid */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        cout<<" ";
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
            if(i!=j)
            {
                cout<<" ";
            }
        }

        cout<<""<<endl;
    }
    return 0;
}
