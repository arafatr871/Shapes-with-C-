/* Hollow Square Pattern */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                cout<<"*";
                cout<<" ";
            }
            else{
                cout<<" ";
                cout<<" ";
            }
        }

        cout<<""<<endl;
    }
    return 0;
}
