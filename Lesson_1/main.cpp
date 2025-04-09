#include <iostream>
#include <cmath>

void printMenu() {
    std::cout << "Виберіть дію, яку потрібно виконати:\n";
    std::cout << "1. Додавання (+)\n";
    std::cout << "2. Віднімання (-)\n";
    std::cout << "3. Множення (*)\n";
    std::cout << "4. Ділення (/)\n";
    std::cout << "5. Піднесення до степеня (^)\n";
    std::cout << "6. Квадратний корінь (√)\n";
}

int main() {
    double num1, num2;
    int choice;

    printMenu();
    std::cout << "Введіть номер дії: ";
    std::cin >> choice;

    if (choice == 6) {
        std::cout << "Введіть число для обчислення квадратного кореня: ";
        std::cin >> num1;
        std::cout << "Результат: " << sqrt(num1) << std::endl;
    } else {
        std::cout << "Введіть перше число: ";
        std::cin >> num1;
        std::cout << "Введіть друге число: ";
        std::cin >> num2;

        switch (choice) {
        case 1:
            std::cout << "Результат: " << num1 + num2 << std::endl;
            break;
        case 2:
            std::cout << "Результат: " << num1 - num2 << std::endl;
            break;
        case 3:
            std::cout << "Результат: " << num1 * num2 << std::endl;
            break;
        case 4:
            if (num2 != 0) {
                std::cout << "Результат: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Помилка: ділення на нуль!" << std::endl;
            }
            break;
        case 5:
            std::cout << "Результат: " << pow(num1, num2) << std::endl;
            break;
        default:
            std::cout << "Невірний вибір!" << std::endl;
        }
    }

    return 0;
}
