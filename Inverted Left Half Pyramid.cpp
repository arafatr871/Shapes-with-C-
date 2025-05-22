/* Inverted Left Half Pyramid */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=4;
    int l=5;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n-k; j++)
        {
            cout<<" ";
        }
        k--;
        for(int j=0; j<l; j++)
        {
            cout<<"*";
        }
        l--;
        cout<<""<<endl;
    }
    return 0;
}
