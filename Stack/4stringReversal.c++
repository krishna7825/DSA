#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> s;
    string name = "krishnayadav";

    // Insertion
    for (char c : name) {
        s.push(c);
    }

    // Retrieval
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}