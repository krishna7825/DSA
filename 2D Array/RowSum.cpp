 #include<iostream>
 #include<vector>
 using namespace std;
 void Print_2DA(int arr[][3],int rowSize ,int colSize){
    for(int i =0;i<rowSize;i++){
      for(int j =0;j<colSize;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
 }
 void Row_Sum(int arr[][3],int rowSize ,int colSize){
    cout<<"Row wise sum => "<<endl;
    for(int i =0;i<rowSize;i++){
        int sum =0;
      for(int j =0;j<colSize;j++){
       sum = sum + arr[i][j];
      }
      cout<<sum<<endl;
    }

 }
 int main (){

    int arr[3][3]={10,20,30,40,50,60,70,80,90};
    int rowSize = 3;
    int colSize =3;
    Print_2DA(arr,rowSize,colSize);
    Row_Sum(arr,rowSize,colSize);


//  int arr[3][3];
//     cout<<"Enter the 2 D Array";
//     for(int i=0;i<3;i++){
//         for(int j = 0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Print row wise"<<endl;
//     // Row wise print kiya hai
//     for(int i =0;i<3;i++){
//         for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//         }cout<<endl;  
//     }
//       for(int i =0;i<3;i+[+){
//     int sum =0; 
//         for(int j=0;j<3;j++){
//        sum = sum + arr[i][j]; 
//         } 
//         cout<<sum<<endl;

//     }
    return 0;
 }