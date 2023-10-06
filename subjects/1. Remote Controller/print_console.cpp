#include "header.h"

void title_whitespace(string device)
{
    string title("Device name: ");
    cout << '-';
    int i, size;
    size = 24 - device.size();
    for (i=0; i <= 37 - (title.size() + device.size()); i++)
    {
        if (i <= size/2 - 1 || i >= size/2 + 1)
            cout << " ";
        else
            cout << title << device;
    }
    cout << '-' << endl;
}

void status_whitespace(TV tv, int flag)
{
    cout << '-';
    int i, size;
    string tmp, tmp1, tmp2;
    switch(flag)
    {
        case 0:
            if (tv.get_status(0) == 1)
                tmp = "On";
            else
                tmp = "Off";
            size = 37 - tmp.size();
            for (i=0; i <= 37 - tmp.size(); i++)
            {
                if (i <= size/2 - 1 || i >= size/2 + 1)
                    cout << " ";
                else
                    cout << tmp;
            }
            break;
        case 1:
            tmp1 = to_string(tv.get_status(1));
            tmp2 = to_string(tv.get_status(2));
            size = 8 - (tmp1.size() + tmp2.size());
            for (i=0; i <= 37; i++)
            {
                if (i <= size/2 - 1 || i >= size/2 + 1)
                    cout << " ";
                else if (i == 19)
                    cout << "M";
                else if (i >= size/2 - 1 || i < 19)
                    cout << tv.get_status(1);
                else
                    cout << tv.get_status(2);
            }
            break;
    }
    cout << '-' << endl;
}

void print_screen(TV tv, string device)
{
    cout << "---------------------------------------" << endl;
    cout << "-          Remote Controller          -" << endl;
    title_whitespace(device);
    cout << "-                                     -" << endl;
    cout << "-                  P                  -" << endl;
    status_whitespace(tv, 0);
    cout << "-                                     -" << endl;
    cout << "-    C                           V    -" << endl;
    cout << "-                                     -" << endl;
    cout << "-    ↑                           ↑    -" << endl;
    status_whitespace(tv, 1);
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