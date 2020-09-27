#include <bits/stdc++.h>
  using namespace std;
  
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T--)
    {
      int p,q;
      cin>>p>>q;
      cout << gcd(p,q)<<endl;
      
    }
    return 0;
  }