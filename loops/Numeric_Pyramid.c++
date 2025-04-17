#include <iostream>
using namespace std;
void Number_pyramid(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void Inverted_Number_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}
void Numeric_holow_Pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || i == n - 1 || i == j)
            {
                cout << j + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void Inverted_hollow_Pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == n - i - 1)
            {
                cout << j + 1;
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void Numeric_Palindrome_equivalent_Pyramid(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        // Print spaces
        for (int j = 1; j <= n - i; ++j)
        {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; ++j)
        {
            cout << j;
        }

        // Print decreasing numbers (excluding the last one)
        for (int j = i - 1; j >= 1; --j)
        {
            cout << j;
        }

        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number = ";
    cin >> n;
    // Number_pyramid(n);
    // Inverted_Number_pyramid(n);
    // Numeric_holow_Pyramid(n);
    // Inverted_hollow_Pyramid(n);
    Numeric_Palindrome_equivalent_Pyramid(n);
  
  
    return 0;
}