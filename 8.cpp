#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    
    for (char c : s) {
        if (string("aeiouAEIOU").find(c) != string::npos) {
            count++;
        }
    }
    cout << count;
    return 0;
}