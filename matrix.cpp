#include <iostream>
using namespace std;
int main()
{
    int a[10][20], b[10][20], m, n, count = 0, digits = 0, k = 0;

    cout << "ENTER THE NUMBER OF ROWS";
    cin >> n;
    cout << "ENTER THE NUMBER OF COLUMNS ";
    cin >> m;
    cout << "Enter the Elements in matrix\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] != 0)
            {
                digits++;
            }
            else
            {
                count++;
            }
        }
    }
    cout << "\nNUMBERS OF DIGITS" << digits;
    cout << "\nNUMBER OF ZEROS" << count;
    cout << "\nELEMENTS IN MATRIX";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "THREE COLUMN REP:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }
}