#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       
      int n;
      cin>>n;
      int sum=0;
      int d;
      while(n!=0){
         d=n%10;
         sum+=d;
         n=n/10;
          
      }
      cout<<sum<<endl;
        
        
    }

    return 0;
}