#include "header.h"

/*TV Class의 private 영역에 선언된 변수들의 값을 불러오는 역할을 맡습니다.
flag의 값에 따라 원하는 값을 return받도록 설계했습니다.*/
int TV:: get_status(int flag)
{
    switch(flag)
    {
        case 0:
            return power; // bool형이 int형으로 return되므로 값이 false는 0, true는 1로 변환됩니다.
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

void TV:: power_controll() // 전원을 켜고 끄는 역할을 맡습니다.
{
    if (power == false) power = true;
    else power = false;
}

int TV:: upChannel() // 채널이 100이라면 더 올리지 않고 1을 return하고, 그렇지 않다면 1을 올리고 0을 return합니다.
{
    if (channel == 100)
        return (1);
    else
        channel++;
    return (0);
}

int TV:: downChannel() // 채널이 0이라면 더 내리지 않고 1을 return하고, 그렇지 않다면 1을 내리고 0을 return합니다.
{
    if (channel == 0)
        return (1);
    else
        channel--;
    return (0);
}

int TV:: setChannel(int num) // 입력받은 값이 100을 초과하거나 음수인경우 1을 return하고, 그렇지 않다면 channel에 num값을 대입합니다.
{
    if (num > 100 || num < 0)
        return (1);
    else
        channel = num;
    return (0);
}

int TV:: upVolume() // 볼륨이 100이라면 더 올리지 않고 1을 return하고, 그렇지 않다면 1을 올리고 0을 return합니다.
{
    if (volume == 100)
        return (1);
    else
        volume++;
    return (0);
}

int TV:: downVolume() // 볼륨이 0이라면 더 내리지 않고 1을 return하고, 그렇지 않다면 1을 내리고 0을 return합니다.
{
    if (volume == 0)
        return (1);
    else
        volume--;
    return (0);
}

void TV:: muteVolume() // 볼륨의 값을 0으로 만듭니다.
{
    volume = 0;
}

int TV:: setVolume(int num) // 입력받은 값이 100을 초과하거나 음수인경우 1을 return하고, 그렇지 않다면 volume에 num값을 대입합니다.
{
    if (num > 100 || num < 0)
        return (1);
    else
        volume = num;
    return (0);
}

/*main함수로부터 넘겨받은 task 인자를 기준으로 어떤 작업을 진행할지 판단하는 함수입니다.
tv클래스와 notice 변수는 실제 값이 변경되어야 하므로 Call by reference 형태로 인자를 받고,
task는 그럴 필요가 없으므로 Call by value 형태로 인자를 받습니다.*/
int task_gate(TV& tv, string task, string& notice)
{
    int flag = 1; // 이곳에서의 flag는 '--help' 기능과 'power' 기능이 아래의 기능들과 중복 실행되지 않도록 막는 기능을 합니다
    notice = ""; // notice가 이전 작업의 것을 출력하면 안 되므로 초기화합니다.

    if (task.find("--help") != string::npos)
    {
        notice = "P: TV의 전원을 켜고 끕니다.\nCUP/CDOWN: 채널을 1만큼 올리고 내립니다.\nCSET숫자: 채널을 원하는 값으로 변경합니다.\nVUP/VDOWN: 볼륨을 1만큼 올리고 내립니다.\nVSET숫자: 볼륨을 원하는 값으로 변경합니다.\nM: 볼륨을 Mute합니다.";
        flag = 0;
    }
    else if (task == "P" || task == "p")
    {        
        tv.power_controll();
        flag = 0;
    }

    if (tv.get_status(0) == 1 && flag == 1) // tv.get_status() 함수가 1(power 변수가 true)이면서, flag가 꺾이지 않았다면 실행합니다.
    {
        /*string task에서 특정 값을 find해서 만족하는 기능을 실행합니다.*/
        if (task.find("C") != string::npos || task.find("c") != string::npos)
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
                string chn = ""; // task에 있는 integer를 임시 저장하는 공간입니다.
                for (char c : task)
                {
                    if (isdigit(c)) // char c가 digit(0~9 사이의 수)라면 chn에 c를 이어붙입니다.
                        chn += c;
                }
                if (tv.setChannel(stoi(chn)) == 1) // setChannel에 chn을 stoi(string to integer)한 값을 인자로 넘겨줍니다.
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
            else if (task.find("SET") != string::npos || task.find("set") != string::npos)
            {
                string chn = "";
                for (char c : task)
                {
                    if (isdigit(c))
                        chn += c;
                }
                if (tv.setVolume(stoi(chn)) == 1)
                    notice = "Volume의 range를 벗어났습니다.";
            }
        }
        else if (task.find("M") != string::npos || task.find("m") != string::npos)
        {
            tv.muteVolume();
            notice = "Volume을 Mute했습니다.";
        }
        else // 위의 그 어떠한 함수에도 걸리지 않았다면 오류메세지를 출력합니다.
            notice = "사용법이 잘못됐거나 존재하지 않는 기능입니다\n--help를 통해 사용법을 확인해주세요.";
    }
    else // tv.get_status() 함수가 0(power 변수가 false) 라면 실행합니다.
    {        
        if (flag == 1) // '--help' 기능과 'power' 기능이 아래의 기능들과 중복 실행되지 않도록 막는 기능을 합니다.
        notice = "TV의 전원이 꺼져있습니다.";
    }

    std::system("clear"); // Terminal을 clear합니다.
    return (0);
}