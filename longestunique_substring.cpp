#include <bits/stdc++.h>
using namespace std;
  
 int main()
  {
    int T;
    string str;
    cin>>T;

    while(T--)
    {

      cin>>str;
      
    int n = str.size(); 
  
    int res = 0; // result 
  
    // last index of all characters is initialized 
    // as -1 
    vector<int> lastIndex(256, -1); 
  
    // Initialize start of current window 
    int i = 0; 
  
    // Move end of current window 
    for (int j = 0; j < n; j++) { 
  
        // Find the last index of str[j] 
        // Update i (starting index of current window) 
        // as maximum of current value of i and last 
        // index plus 1 
        i = max(i, lastIndex[str[j]] + 1);    //"geeksforgeeks"
 
        // Update result if we get a larger window 
        res = max(res, j - i + 1); 
  
        // Update last index of j. 
        lastIndex[str[j]] = j; 
    } 
    cout<<res<<endl;
      
      
    }
    //write your code here
    
    return 0;
  }