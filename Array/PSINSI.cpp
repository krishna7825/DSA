#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 
void previous_smallerelement(int h[])
{
    stack<int>s;
     vector<int>psi(8);
      for(int i=8-1;i>=0;i--)
      {
          while((!s.empty()) && (h[s.top()]>=h[i]))
          {
              s.pop();
          }
          if(s.empty())
          {
             psi[i]=8;
          }
          else
          psi[i]=s.top();
          
          s.push(i);
      }
      for(int i=0;i<8;i++)
      {
          cout<<psi[i]<<" ";
      }
      cout<<endl;
    
}

void next_smallerelement(int h[])
{
  stack<int>st;
        vector<int>nsi(8);
      for(int i=0;i<8;i++)
      {
          while((!st.empty()) && (h[st.top()]>=h[i]))
          {
              st.pop();
          }
          if(st.empty())
          {
             nsi[i]=-1;
          }
          else
          nsi[i]=st.top();
          
          st.push(i);
      }
      for(int i=0;i<8;i++)
      {
          cout<<nsi[i]<<" ";
         
      }
}


int main()
{
   int h[]={10,7,8,12,4,3,6,7};
    
    previous_smallerelement(h);
    //next_smallerelement(h);

    return 0;
}