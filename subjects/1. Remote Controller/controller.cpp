#include "header.h"

string device;

int TV:: power_controll()
{
    if (power == false)
        power = true;
    else
        power = false;
    return (0);
}

int TV:: upChannel()
{
    if (channel == 100)
        return (1);
    else
        channel++;
        return (0);
}

int TV:: downChannel()
{
    if (channel == 0)
        return (1);
    else
        channel--;
        return (0);
}

int TV:: setChannel(int num)
{
    if (num > 100 || num < 0)
        return (1);
    else
        channel = num;
    return (0);
}

int TV:: upVolume()
{
    if (volume == 100)
        return (1);
    else
        volume++;
        return (0);
}

int TV:: downVolume()
{
    if (volume == 0)
        return (1);
    else
        volume--;
        return (0);
}

int TV:: setVolume(int num)
{
    if (num > 100 || num < 0)
        return (1);
    else
        volume = num;
    return (0);
}

int main(void)
{
    cout << "사용할 TV: ";
    cin >> device;
    print_screen(device);
    // int task = 0;
    // TV samsung;
    // while (1)
    // {
    //     cout << "---------------------------------------" << endl;
    //     cout << "-          Remote Controller          -" << endl;
    //     cout << "-         device name: samsung         -" << endl;
    //     cout << "-                                     -" << endl;
    //     cout << "-                                     -" << endl;
    //     cin >> task;
    //     switch(task)
    //     {
    //         case(10): break;
    //     }
    //     continue;
    // }
}