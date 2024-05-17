#include <iostream>
#include <Windows.h>

using namespace std;

bool isOddThreeDigitNumber(int number) {
    // Проверка, что число трехзначное и непарное
    return (number >= 100 && number <= 999) && (number % 2 != 0);
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    cout << "Введите целое положительное число: ";
    cin >> number;

    if (isOddThreeDigitNumber(number)) {
        cout << "Число является непарным тризначным." << endl;
    }
    else {
        cout << "Число НЕ является непарным тризначным." << endl;
    }

    return 0;
}
