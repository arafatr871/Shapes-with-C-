/* Palindrome triangle code c++ */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l=0;

    for(int j=1; j<=n; j++)
    {
        for(int i=1; i<=n-j; i++)
        {
            cout<<" ";
        }
        int p=j;
        for(int i=1; i<=(j+l); i++)
        {
           while(p!=1 && p<=j){
           cout<<p;
           p--;
           }
           if(p==1)
           {
               cout<<p;
               while(p<j)
               {
                   p++;
                   cout<<p;
               }
           }
           break;
        }
        l+=1;
        cout<<""<<endl;
    }

    return 
