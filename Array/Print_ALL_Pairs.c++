// #include<iostream>
// using namespace std;
// void Print_All_Array(int arr [],int n){
//     for(int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             cout<<"("<<arr[i]<<","<<arr[j]<<")";
//         }
//         cout<<endl;
//     }
// }
// bool Check_Two_Sum(int arr[],int n,int target){
//     for(int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 return true;
//             }
//         }
//     }
//    return false;
    
// }
// pair<int,int>Check_two_Sum(int arr[],int n,int target){

//     pair<int,int> ans = make_pair(-1,-1);
//     for(int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 ans.first = arr[i];
//                 ans.second = arr[j];
//                 return ans;
//             }
//         }
//     }
//    return ans;
// }
// void print_All_triplet(int arr[],int n){
//       for(int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             for(int k =0;k<n;k++){
//                  cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
              
//             }
//         }
//         cout<<endl;
//     }

// }
// int main(){
//     int arr[] = {10,20,30,40,50};
//     int n = 5;
//     int target = 70 ;
//     print_All_triple(arr,n);
//     //1
//     //Print_All_Array(arr ,n);

//     //2
//     // bool ans = Check_Two_Sum(arr,n,target);
//     // if(ans == true ){
//     //     cout<<"Found";
//     // }
//     // else {
//     //     cout<<"Not found";
//     // }

//     //3
//     // pair<int,int> ans = Check_two_Sum(arr,n,target);
//     // if(ans.first == -1 && ans.second == -1 ){
//     //     cout<<" Pair Not Found";
//     // }
//     // else {
//     //     cout<<"Pair found : "<<ans.first<<","<<ans.second<<endl;
//     // }
    

//     //4
//     // print_All_triple(arr,n);
   
//     return 0;
// }


#include<iostream>
using namespace std;

void Print_All_Array(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "(" << arr[i] << "," << arr[j] << ")";
        }
        cout << endl;
    }
}

bool Check_Two_Sum(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] + arr[j] == target){
                return true;
            }
        }
    }
    return false;
}

pair<int, int> Check_two_Sum(int arr[], int n, int target){

    pair<int, int> ans = make_pair(-1, -1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] + arr[j] == target){
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}

void print_All_Triplets(int arr[], int n){
    int count =0 ;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")"<<endl;
                count++;
            }
        }
        cout << endl;
    }
    cout<<"No. of pairs "<<count;
}

int main(){
    int arr[] = {10, 20, 30, 40,50};
    int n = 5;
    int target = 70;
    print_All_Triplets(arr, n);

    // Uncomment and use as needed
    // bool ans = Check_Two_Sum(arr, n, target);
    // if(ans) {
    //     cout << "Found";
    // } else {
    //     cout << "Not found";
    // }

    // pair<int, int> ans = Check_two_Sum(arr, n, target);
    // if(ans.first == -1 && ans.second == -1) {
    //     cout << "Pair Not Found";
    // } else {
    //     cout << "Pair found: " << ans.first << "," << ans.second << endl;
    // }

    return 0;
}