#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    // Запрос ввода трех чисел
    cout << "Введите три числа: ";
    cin >> num1 >> num2 >> num3;

    // Вычисление суммы
    int sum = num1 + num2 + num3;

    // Вывод результата
    cout << "Сумма трех чисел: " << sum << endl;

    return 0;
}
