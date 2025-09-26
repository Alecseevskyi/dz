#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    
    if (age < 18) cout << "Младше 18";
    else if (age <= 60) cout << "От 18 до 60";
    else cout << "Старше 60";
    return 0;
}
