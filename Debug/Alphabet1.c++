//Aphabet 1
            // #include <iostream>
            // using namespace std;

            // int main()
            // {
            //     char c;
            //     cin >> c;
            //     if ('a' <= c && c <= 'z')
            //     {
            //         cout << 0;
            //     }
            //     else if ('A' <= c && c <= 'Z')
            //     {
            //         cout << 1;
            //     }
            //     else
            //     {
            //         cout << -1;
            //     }
            // }


//Pattern 2
            // #include<iostream>
            // using namespace std;
            // int main(){
            //     int n=5;
            //     int i=1;
            //     while(i<n){
            //         int j = i,count = 1;
            //         while(count<=i){
            //             cout<<j;
            //             j = j + 1;
            //             count = count + 1;
            //         }
            //         cout<<"\n";
            //         i = i + 1;
            //     }
            // }


//Pattern 3
/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
        #include<iostream>
        using namespace std;
        int main(){
        int n;
        cin>>n;
        int i=1;
        while(i<n){
        int j = i,count = 2*n+1,gaps=(n-i-1),k=1;
        while(k<gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 1,ch = count - 2*gaps;
        while(m<ch){
            cout<<"*";
            m = m + 1;
        }
        k = 1;
        while(k<gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
       }
     }