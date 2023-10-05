#include "header.h"

void title_whitespace(string device)
{
    string title("Device name: ");
    cout << '-';
    int i, index = -1, size;
    size = 24 - device.size();
    for (i=0; i <= 37 - (title.size() + device.size()); i++)
    {
        if (i <= size/2 - 1)
            cout << " ";
        else if (i >= size/2 + 1)
            cout << " ";
        else
            cout << title << device;
    }
    cout << '-' << endl;
}

void print_screen(string device)
{
    cout << "---------------------------------------" << endl;
    cout << "-          Remote Controller          -" << endl;
    title_whitespace(device);
    cout << "-                                     -" << endl;
    cout << "-                                     -" << endl;
    cout << "-                                     -" << endl;
    cout << "-    C                           V    -" << endl;
    cout << "-                                     -" << endl;
    cout << "-    ↑                           ↑    -" << endl;
    cout << "-                  M                  -" << endl;
    cout << "-    ↓                           ↓    -" << endl;
}