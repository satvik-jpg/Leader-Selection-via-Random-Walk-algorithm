#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
main()
{
    string file, s;
    int a[54][29];
    long long int coin[54];
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
    srand(15042022);
    while (count < 100000000)
    {
        c = a[row][rand() % 29];
        if (c != 0)
        {
            coin[c - 1]++;
            row = c - 1;
            count++;
        }
    }
    for (int j = 0; j < 54; j++)
    {
        coin[j] *= 1000;
        coin[j] += (j + 1);
    }
    sort(coin, coin + 54);
    for (int j = 0; j < 54; j++)
    {

        cout << "\n"
             << j + 1 << ":" << coin[j];
    }
}
