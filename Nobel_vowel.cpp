#include <bits/stdc++.h>
  using namespace std;

bool isvow(char s)
{
  if(s == 'a' || s == 'e' ||s == 'i' ||s == 'o' ||s == 'u')
    return true;
  else 
    return false;
}
  
  int main()
  {
    //write your code here
    int T;
    string text;
    cin>>T;
    while(T--)
    {
      cin>>text;
      bool flag= false;

      for(int i = 0;i<text.length();i++)
      {
        if(!isvow(text[i]) && text[i] != 'n')
        {
          if(isvow(text[i+1]))
            continue;
          else
          {
            flag = true;
            break;
          }
        }

      }


      
      
      if(flag)
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl;
    }
    return 0;
  }