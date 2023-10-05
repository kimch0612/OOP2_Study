#include "header.h"

void ft_whitespaces(string device)
{
    cout << '-';
    int i, index = -1, size, flag = 1;
    size = 24 - device.size();
    for (i=0; i <= 37 - (13 + device.size()); i++)
    {
        if (i <= size/2 - 1)
            cout << " ";
        else if (i >= size/2 + 1)
            cout << " ";
        else
            cout << "device name: " << device;
    }
    cout << '-' << endl;
}

void print_screen(string device)
{
    string line("---------------------------------------");
    string title("-          Remote Controller          -");
    cout << line << endl;
    cout << title << endl;
    ft_whitespaces(device);
}