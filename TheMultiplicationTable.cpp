// Написать программу, которая выводит на экран таблицу
// умножения на k, где k — номер варианта.Например, для 7 - го  варианта 

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int userInputK = 0, border = 10;

    cout << "Для вывода таблицы умножения введите k: ";
    cin >> userInputK;

    for (int i = 0; i <= border; i++)    
        cout << userInputK << " * " << i << " = " << userInputK * i << endl;
   
}

