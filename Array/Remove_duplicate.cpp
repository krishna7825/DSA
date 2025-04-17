#include<iostream>
#include<vector>
using namespace std;
// Approch 1
int Remove_duplicate(vector<int>arr){
    int count =1;
        for(int i =1;i<arr.size();i++){
       if (arr[i] != arr[i - 1]) { // Compare with the previous element
                arr[count] = arr[i];    // Place the unique element at the next position.
                count++;
            }
    }
    return count;
     int i =1;
        int j =0;
        while(i<arr.size()){
            if(arr[i] == arr[j]){
                i++;
            }
            else{
                j++;
                arr[j]=arr[i];
                i++;
            }
        }
        return j - 0+1;
}
// Approch 2 two pointer approch;
int Remove_duplicate2(vector<int>arr){
     int i =1;
        int j =0;
        while(i<arr.size()){
            if(arr[i] == arr[j]){
                i++;
            }
            else{
                j++;
                arr[j]=arr[i];
                i++;
            }
        }
        return j - 0+1;
}


int main(){
    vector<int>arr{0,0,1,1,1,2,2,3,3,4};
    int ans = Remove_duplicate2(arr);
    cout<<ans;
    return 0;
}