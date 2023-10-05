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
    int power_controll();
    int upChannel();
    int downChannel();
    int setChannel(int num);
    int upVolume();
    int downVolume();
    int setVolume(int num);
};
void ft_whitespaces(string device);
void print_screen(string device);
#endif
