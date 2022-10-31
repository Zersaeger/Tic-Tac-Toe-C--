#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char field[9];
    for (int i = 0; i < 9; i++)
    {
        field[i] = '/';
    }

    bool run = true;
    int turn = 0;
    while (run)
    {
        for (int i = 0; i < sizeof(field); i++)
        {
            if (i == 2 || i == 5 || i == 8)
            {
                cout << field[i] << endl;
            }
            else
            {
                cout << field[i];
            }
        }
        int input;
        cin >> input;
        if (input < 1 || input > 9 || field[input - 1] != '/')
        {
            continue;
        }
        if (turn % 2 == 0)
        {
            field[input - 1] = 'X';
            ++turn;
        }
        else
        {
            field[input - 1] = 'O';
            ++turn;
        }
    }
    return 0;
}