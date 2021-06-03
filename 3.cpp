#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[3][3];
    for (int i = 0; i < 3; i++) { // ввод матрицы
        for (int j = 0; j < 3; j++) {
            int temp;
            cin >> temp;
            a[i][j] = temp;
        }
    }
    // расчет определителя
    int opr = (a[0][0] * a[1][1] * a[2][2])
        + (a[0][1] * a[1][2] * a[2][0])
        + (a[1][0] * a[2][1] * a[0][2])
        - (a[0][2] * a[1][1] * a[2][0])
        - (a[0][1] * a[1][0] * a[2][2])
        - (a[0][0] * a[1][2] * a[2][1]);
    cout << "Определитель: " << opr;
}