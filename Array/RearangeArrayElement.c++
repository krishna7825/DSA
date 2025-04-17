
#include<bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int>A){
int m = A.size();
int p=0,n=1;
vector<int>ans(m,0);
for(int i =0;i<m;i++){
    if(A[i]<0){
        ans[n] = A[i];
        n +=2;
    }
    else{
        ans[p] = A[i];
        p+=2;
    }
}
return ans ;

    
}

int main() {
    
  // Array Initialisation.
  
  vector<int> A = {3,1,-2,-5,2,-4};

  vector<int> ans = RearrangebySign(A);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}