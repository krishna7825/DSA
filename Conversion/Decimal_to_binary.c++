
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
void Binary_to_Decimal1(int n){
    int decimal = 0;
    int i =0;
    while (n)
    {
      int bit = n % 10;
      decimal = bit*pow(2,i++) + decimal;
      n = n/10;
    }
    cout<<decimal;
    
}
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    Binary_to_Decimal1(n);
    return 0;
}

