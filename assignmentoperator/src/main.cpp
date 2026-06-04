#include <iostream>
using namespace std;

int main() {

    int num {10};

    cout << "num is " << num << endl;

    num += 10;
    cout << "num += 10 : " << num << endl;

    num -= 10;
    cout << "num -= 10 : " << num << endl;

    num *= 10;
    cout << "num *= 10 : " << num << endl;

    num /= 10;
    cout << "num /= 10 : " << num << endl;

    num %= 3;
    cout << "num %= 3 : " << num << endl;

    return 0;
}

