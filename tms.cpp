#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
main()
{
    string file, s;
    int a[54][29];
    int coin[54];
    int row = 0;
    int count = 0;
    int c;
    int max = 0, pos = -1;
    for (int i = 0; i < 54; i++)
        coin[i] = 0;
    for (int i = 0; i < 54; i++)
    {
        file = to_string(i + 1) + ".txt";

        ifstream in(file);
        for (int j = 0; j < 29; j++)
        {
            getline(in, s);
            stringstream satvik(s);
            satvik >> a[i][j];
        }
    }
    for (int i = 0; i < 54; i++)
    {
        for (int j = 0; j < 29; j++)
        {
            if (a[i][j] == i + 1)
                cout << "\n"
                     << i + 1;
        }
    }
}