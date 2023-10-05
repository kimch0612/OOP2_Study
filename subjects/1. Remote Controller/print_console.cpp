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

void status_whitespace(int flag)
{
    int i;
    string tmp;
    switch(flag)
    {
        case 0:
            if (tv.get_status(0) == 1)
                tmp = "On";
            else
                tmp = "Off";
            for (i=0; i <= 37 - tmp.size(); i++)
            {

            }
    }
}

void print_screen(string device)
{
    cout << "---------------------------------------" << endl;
    cout << "-          Remote Controller          -" << endl;
    title_whitespace(device);
    cout << "-                                     -" << endl;
    cout << "-                  P                  -" << endl;
    status_whitespace(0);
    cout << "-                                     -" << endl;
    cout << "-    C                           V    -" << endl;
    cout << "-                                     -" << endl;
    cout << "-    ↑                           ↑    -" << endl;
    cout << "-                  M                  -" << endl;
    cout << "-    ↓                           ↓    -" << endl;
    cout << "-                                     -" << endl;
    cout << "-                                     -" << endl;
    cout << "-    1             2              3   -" << endl;
    cout << "-                                     -" << endl;
    cout << "-    4             5              6   -" << endl;
    cout << "-                                     -" << endl;
    cout << "-    7             8              9   -" << endl;
    cout << "-                                     -" << endl;
    cout << "-                  0                  -" << endl;
    cout << "-                                     -" << endl;
    cout << "---------------------------------------" << endl;
}