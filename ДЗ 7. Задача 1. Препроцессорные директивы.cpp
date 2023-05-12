#include <iostream>
#define __MODE__ 1

#if __MODE__ == 1
int add(int a, int b)
{
    return a + b;
}
#endif

int main()
{
    setlocale(LC_ALL, "Russian");

#ifdef __MODE__
    std::cout << "Константа определена"<<std::endl;

     #if __MODE__ ==0
    std::cout << "Работаю в режиме тренировки" << std::endl;

    #elif  __MODE__ == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    int num1, num2;
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    int result;
    result = add(num1,num2);
    std::cout << "Результат сложения: " << result;
    #else 
    std::cout << "Неизвестный режим. Завершение работы " << std::endl;

    #endif
#else
    #error "Необходимо определить __MODE__" 
#endif
}











