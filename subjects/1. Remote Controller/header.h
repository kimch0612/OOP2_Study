#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
using namespace std;
class TV
{
    bool power = false;
    int channel = 0, volume = 0;
public:
    int get_status(int flag);
    void power_controll();
    int upChannel();
    int downChannel();
    int setChannel(int num);
    int upVolume();
    int downVolume();
    void muteVolume();
    int setVolume(int num);
};
void print_screen(TV tv, string device);
int task_gate(TV& tv, string task);
#endif
