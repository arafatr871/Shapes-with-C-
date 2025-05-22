/* Inverted Right Half Pyramid */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int l=5;
    for(int i=0; i<n; i++)
    {        
        for(int j=0; j<l; j++)
        {
            cout<<"*";
        }
        l--;
        cout<<""<<endl;
    }

    return 0;
}
