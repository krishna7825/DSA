#include<iostream>
#include<vector>
using namespace std;
int find_oddTimes(vector<int>arr,int n,int target){
    int s =0;
    int e = n-1;
    int mid = s +((e-s)/2);
    while(s<=e){
        if(s == e){
            // ek hi element hai vhi answer hoga;
            return s;
        }
        // duplicate element exist nhi karta
        if( mid -1 >0 && arr[mid] != arr[mid -1]  && mid + 1< n && arr[mid] != arr[mid + 1] ){
            return mid;
        }
        // duplicate element left me exist kr rha hai
        if(arr[mid] == arr[mid-1]){
            int pairstartingindex = mid -1;
            if(pairstartingindex & 1){
                // pair  starting index odd hai
                // hum right  me hai
                //move karna hoga left me
                e = mid -1;
            }
            else{
                // pair  starting index even hai
                // hum left  me hai
                //move karna hoga right me
                s = mid +1;

            }
        }
        // duplicate element right me exist kr rha hai
        if(arr[mid] == arr[mid+1]){
            int pairstartingindex = mid;
            if(pairstartingindex & 1){
                // pair  starting index odd hai
                // hum right  me hai
                //move karna hoga left me
                e = mid -1;
            }
            else{
                // pair  starting index even hai
                // hum left  me hai
                //move karna hoga right me
                s = mid +1;

            }
        }
        mid = s +((e-s)/2);
        }
    return -1; 
}
int main (){
    vector<int>v{1,1,2,2,3,3,4,5,5,3,3};
    int n = v.size();
    int target = 1;
    int ans = find_oddTimes(v,n,target);
    cout<<"Target index = "<<ans<<endl;
    cout<<"Target  = "<<v[ans];
    return 0;
}