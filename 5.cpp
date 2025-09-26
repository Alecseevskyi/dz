#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool div3 = n % 3 == 0;
    bool div5 = n % 5 == 0;
    
    if (div3 && div5) cout << "Делится на 3 и 5";
    else if (div3) cout << "Делится на 3";
    else if (div5) cout << "Делится на 5";
    else cout << "Не делится на 3 или 5";
    return 0;
}
