
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int secondSmallest(vector<int>&arr)
{
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < arr.size(); i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   cout<<second_small<<endl;     
}

void Sec_lar(vector<int>&arr){
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < arr.size(); i++) {
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }
    cout<<second_large<<endl;  
    }
int main(){
   vector<int>arr{12,35,1,10,34,1};
   Sec_lar(arr);
   secondSmallest(arr); 
    return 0;
}