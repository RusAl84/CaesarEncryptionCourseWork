#include <iostream>
#include <string>
#include "ClassCaesarEncryption.h"
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251);
    cout << "CaesarEncryptionCourseWork!"<<endl
         << "Введите строку для шифрования" << endl;
    string inString = "dummy";
    ClassCaesarEncryption ce = ClassCaesarEncryption();
    while (inString.length() > 1)
    {
        cin >> inString;
        string outString = ce.getEncryptionSting(inString);
        cout << "Зашифрованная строка: " << endl
             << outString << endl
             << "Введите строку для шифрования" << endl;
    }
    return 0;
}

