/* Left Half Pyramid */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=1;
    int l=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-k; j++)
        {
            cout<<" ";
        }
        k++;
        for(int j=0; j<l; j++)
        {
            cout<<"*";
        }
        l++;
        cout<<""<<endl;
    }

    return 0;
}
