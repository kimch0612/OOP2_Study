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

void TV:: power_controll()
{
    if (power == false) power = true;
    else power = false;
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

void TV:: muteVolume()
{
    volume = 0;
}

int TV:: setVolume(int num)
{
    if (num > 100 || num < 0)
        return (1);
    else
        volume = num;
    return (0);
}

int task_gate(TV& tv, string task, string& notice)
{
    notice = "";
    if (task.find("--help") != string::npos)
    {
        cout << "도움말입니다." << endl;
    }
    else if (task == "P" || task == "p")
        tv.power_controll();
    else if (task.find("C") != string::npos || task.find("c") != string::npos)
    {
        if (task.find("UP") != string::npos || task.find("up") != string::npos)
        {
            if (tv.upChannel() == 1)
                notice = "Channel이 MAX입니다.";
        }
        else if (task.find("DOWN") != string::npos || task.find("down") != string::npos)
        {
            if (tv.downChannel() == 1)
                notice = "Channel이 MIN입니다.";
        }
        else if (task.find("SET") != string::npos || task.find("set") != string::npos)
        {
            string chn = "";
            for (char c : task)
            {
                if (isdigit(c))
                    chn += c;
            }
            if (tv.setChannel(stoi(chn)) == 1)
                notice = "Channel의 range를 벗어났습니다.";
        }
    }
    else if (task.find("V") != string::npos || task.find("v") != string::npos)
    {
        if (task.find("UP") != string::npos || task.find("up") != string::npos)
        {
            if (tv.upVolume() == 1)
                notice = "Volume이 MAX입니다.";
        }
        else if (task.find("DOWN") != string::npos || task.find("down") != string::npos)
        {
            if (tv.downVolume() == 1)
                notice = "Volume이 MIN입니다.";
        }
    }
    else if (task.find("M") != string::npos || task.find("m") != string::npos)
    {
        tv.muteVolume();
        notice = "Volume을 Mute했습니다.";
    }
    std::system("clear");
    return (0);
}