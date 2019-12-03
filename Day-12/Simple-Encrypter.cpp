#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[1000];
    cin.getline(name, sizeof(name));
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] != ' ')
        {
            char a = name[i];
            a = char((97 - (int)((int)a - 97)) + 25);
            name[i] = a;
        }
    }
    cout << name << endl;
}
