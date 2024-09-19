#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    char choice;

    do {
        cout << "Введіть кількість елементів: ";
        cin >> n;

        cout << "Числа Фібоначчі: ";
        for (int i = 0; i < n; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;

        cout << "Бажаєте повторити? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}