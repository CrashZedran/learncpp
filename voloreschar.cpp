#include <iostream>

using namespace std;

// muestra los valores asii de 32 a 127
int main()
{
    for(int i = 32; i < 128; i++)
    {
       cout << (char) i;
    }
    cout << endl;
    return 0;
}
