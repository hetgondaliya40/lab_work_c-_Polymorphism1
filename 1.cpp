#include <iostream>
using namespace std;

class Number {
public:
    int value;
public:
    Number(int num) {
        value = num;
    }

     operator<(int Number& other) int {
        return value < other.value;
    }
};

int main() {
    Number num1(5);
    Number num2(10);

    if (num1 < num2) {
        cout << "num2 contains a higher value than num1." << endl;
    } else {
        cout << "num1 contains a higher value than or equal to num2." << endl;
    }

    return 0;
}
