#include <iostream>
using namespace std;
int add(int x, int y = 5, int z = 8) //if any parameter is default to uske baad ke share defaut honge vrna error hoga
{                                          
return (x+y+z);
}
int main()
{
    cout<<add(2)<<endl;
    cout<<add(2,4)<<endl;
    cout<<add(2,6,7)<<endl;

     return 0;
}