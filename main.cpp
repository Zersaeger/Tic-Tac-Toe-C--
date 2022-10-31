#include <iostream>
#include <string.h>
using namespace std;

int checkForWin(char field[])
{
    if (field[0] == field[1] && field[1] == field[2] && field[0] != '/')
    {
        cout << field[0] << " wins! Congratulations!!!\n";
    }
    else if (field[0] == field[3] && field[3] == field[6] && field[0] != '/')
    {
        cout << field[0] << " wins! Congratulations!!!\n";
    }
    else if (field[0] == field[4] && field[4] == field[8] && field[0] != '/')
    {
        cout << field[0] << " wins! Congratulations!!!\n";
    }
    else if (field[1] == field[4] && field[4] == field[7] && field[1] != '/')
    {
        cout << field[1] << " wins! Congratulations!!!\n";
    }
    else if (field[2] == field[5] && field[5] == field[8] && field[2] != '/')
    {
        cout << field[2] << " wins! Congratulations!!!\n";
    }
    else if (field[3] == field[4] && field[4] == field[5] && field[3] != '/')
    {
        cout << field[3] << " wins! Congratulations!!!\n";
    }
    else if (field[6] == field[7] && field[7] == field[8] && field[6] != '/')
    {
        cout << field[6] << " wins! Congratulations!!!\n";
    }
    else if (field[2] == field[4] && field[4] == field[6] && field[2] != '/')
    {
        cout << field[2] << " wins! Congratulations!!!\n";
    }
    else
    {
        return 0;
    }
    return 1;
}

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
        if (checkForWin(field) == 1)
        {
            run = false;
        }
    }
    return 0;
}