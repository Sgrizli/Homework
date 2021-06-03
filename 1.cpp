#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a[10];
    cout << "Введите числа массиа через пробел: ";
    for (int i = 0; i < 10; i++) {
        int temp;
        cin >> temp;
        a[i] = temp;
    }
    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            a[i] = 0;
        }
    }
    cout << "Результат: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << ' ';
    }
    return 0;
};