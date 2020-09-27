#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
  int main()
  {
    //write your code here
    int N,M;
    cin>>N>>M;
    int ar1[N][M];
    int ar2[N][M];
    for(int i = 0 ; i<N;i++)
    {
      for(int j = 0;j<M;j++)
      {
        cin>>ar1[i][j];
      }
    }
    for(int i = 0 ; i<N;i++)
    {
      for(int j = 0;j<M;j++)
      {
        cin>>ar2[i][j];
      }
    }

    for(int i = 0 ; i<N;i++)
    {
      for(int j = 0;j<M;j++)
      {
        cout<<ar1[i][j] + ar2[i][j] <<" ";
      }
    cout<<endl;
    }
    
    // for(int i = 0 ; i<N;i++)
    // {
    //   for(int j = 0;j<M;j++)
    //   {
    //     cout << ar1[i][j] * ar2[j][i]  << endl;
    //   }
    // }    
    return 0;
  }