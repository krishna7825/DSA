 #include<iostream>
 #include<vector>
 using namespace std;
 void Print_2DA(int arr[][4],int rowSize ,int colSize){
    for(int i =0;i<rowSize;i++){
      for(int j =0;j<colSize;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
 }
 void col_Sum(int arr[][4],int rowSize ,int colSize){
    cout<<"Row wise sum => "<<endl;
    for(int i =0;i<colSize;i++){
        int sum =0;
      for(int j =0;j<rowSize;j++){
       sum = sum + arr[j][i];
      }
      cout<<sum<<endl;
    }

 }
 int main (){

    int arr[3][4]={10,20,30,40,50,60,70,80,90,100,110,120};
    int rowSize = 3;
    int colSize =4;
    Print_2DA(arr,rowSize,colSize);
    col_Sum(arr,rowSize,colSize);



    return 0;
 }