#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string symbol, str;
    cout << "Введите символ: ";
    cin >> symbol;
    if (symbol.size() == 1) {
        cout << "Введите строку: ";
        cin >> str;
        if (str.size() > 1) {
            if (str.find(symbol) == -1) {
                cout << "Символ в строке не найден!";
            }
            else {
                cout << "Номер символа в строке: " << str.find(symbol) + 1;
            }
        }
    }
}
