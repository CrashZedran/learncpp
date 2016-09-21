#include <iostream>

using namespace std;

int Add(int first, int second)
{
    cout << "En Add() recibido " << first << " y " << second << " \n";
    return (first + second);
}

int main()
{
    cout << "Escribe dos números:\n";
    int num1, num2, suma;
    cin >> num1;
    cin >> num2;
    suma = Add(num1,num2);
    cout << "La suma es igual a: " << suma << "\n\n";
    return 0;
}
