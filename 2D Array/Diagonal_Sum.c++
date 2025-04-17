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
 // Right to left 
 void Diagonal1_Sum(int arr[][3],int rowSize ,int colSize){
    cout<<"Diagonal wise sum => "<<endl;
        int sum = 0;
    for(int i =0;i<rowSize;i++){
      for(int j =0;j<colSize;j++){
       if(i == j){
        sum = sum + arr[i][j];
       }
      }
    }
    cout<<sum<<endl;
 }
 // Left to right 
 void Diagonal_Sum(int arr[][3],int rowSize ,int colSize){
    cout<<"Diagonal wise sum => "<<endl;
        int sum = 0;
    for(int i =0;i<=rowSize;i++){
      for(int j =0;j<=colSize;j++){
       if(i + j == rowSize){
        sum = sum + arr[i][j];
       }
      }
    }
    cout<<sum<<endl;
 }

 int main (){

    int arr[3][3]={10,20,30,40,50,60,70,80,90};
    int rowSize = 3;
    int colSize = 3;
    Print_2DA(arr,rowSize,colSize);
    //Diagonal1_Sum(arr,rowSize,colSize);
    //Diagonal_Sum(arr,rowSize,colSize);




    return 0;
 }