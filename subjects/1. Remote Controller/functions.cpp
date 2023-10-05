#include "header.h"

int TV:: get_status(int flag)
{
    switch(flag)
    {
        case 0:
            return power;
            break;
        case 1:
            return channel;
            break;
        case 2:
            return volume;
            break;
    }
    return (0);
}

int TV:: power_controll()
{
    if (power == false)
    {
        power = true;
        return (1);
    }
    else
    {
        power = false;
        return (0);
    }
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