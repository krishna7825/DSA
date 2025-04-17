// Division Method 
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
void Decimal_To_Binary1(int n){
    // Division Method 
    int binaryno = 0;
    int i =0;
    while (n>0)
    {
      int bit = n % 2;
      cout<<"bits :"<<bit<<endl;
      binaryno = binaryno + bit*pow(10,i++);
      cout<<"1binaryno :"<<binaryno<<endl;
      n = n/2;
      cout<<"n :"<<n<<endl;
    }
    cout<<binaryno;
    
}
void Decimal_To_Binary2(int n){
    // Bitwise Method 
    int binaryno = 0;
    int i =0;
    while (n>0)
    {
      int bit = (n & 1);
      binaryno = bit*pow(10,i++)+binaryno;
      n = n>>1;
    }
    cout<<binaryno;
    
}
int main(){
    int n ;
    cout<<"Enter the number :";
     cin>>n;
    Decimal_To_Binary1(n);
    //Decimal_To_Binary2(n);
    return 0;
}

// #include<iostream>
// using namespace std;

// void Decimal_To_Binary(int n){
//     int binary[32]; // Assuming integers are represented using 32 bits
//     int i = 0;
    
//     while (n > 0) {  
//         binary[i] = n % 2;
//         n = n / 2;
//         i++;
//     }
    
//     for (int j = i - 1; j >= 0; j--) {
//         cout << binary[j];
//     }
// }

// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     cout << "Binary equivalent: ";
//     Decimal_To_Binary(n);
//     return 0;
// }
