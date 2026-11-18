
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF8");
    double a, b;
    char operation;

    cout << "=== УЛУЧШЕННЫЙ КАЛЬКУЛЯТОР ===" << endl;

    while (true)
    {
        cout << "\nВведите операцию (+, -, *, /, ^, %) или q для выхода: ";
        cin >> operation;

        if (operation == 'q')
        {
            cout << "Программа завершена." << endl;
            break;
        }

        cout << "Введите первое число: ";
        cin >> a;

        cout << "Введите второе число: ";
        cin >> b;

        switch (operation)
        {
        case '+':
            cout << "Результат: " << a + b << endl;
            break;

        case '-':
            cout << "Результат: " << a - b << endl;
            break;

        case '*':
            cout << "Результат: " << a * b << endl;
            break;

        case '/':
            if (b != 0)
                cout << "Результат: " << a / b << endl;
            else
                cout << "Ошибка: деление на ноль!" << endl;
            break;

        case '^':
            cout << "Результат: " << pow(a, b) << endl;
            break;

        case '%':
            if (b != 0)
                cout << "Результат: " << fmod(a, b) << endl;
            else
                cout << "Ошибка: деление на ноль!" << endl;
            break;

        default:
            cout << "Неизвестная операция!" << endl;
        }
    }

    return 0;
}
