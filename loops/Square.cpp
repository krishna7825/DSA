#include<iostream>
using namespace std;
void Square(int n){
    for(int i =0;i<5;i++){
        for(int j = 0;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void Hollow_Square(int n){
        for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            // First approch
            //  if((i ==1|| i ==2 || i ==3)&&(j ==1||j==2||j==3)){
            //      cout<<" ";
            //  }
            //  else{
            //      cout<<"*";
            //  }

            //    second approch
            if(i ==0||j==0 ||i==4||j==4 || i == j ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            // third Approch
            // int n = 5;
            // if (i == 0 || i == n - 1)
            // {
            //     cout << "*";
            // }
            // else
            // {
            //     if (j == 0 || j == n - 1)
            //     {
            //         cout << "*";
            //     }
            //     else
            //     {
            //         cout << " ";
            //     }
            // }
        }
        cout << endl;
    }
}
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    //Square(n);
    Hollow_Square(n);
    return 0;
}