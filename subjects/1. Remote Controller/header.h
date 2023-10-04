#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;
class TV
{
    bool on;
    int channel = 0, volume = 0;
public:
    void powerOn();
    void powerOff();
    void upChannel();
    void downChannel();
    void setChannel();
    void upVolume();
    void downVolume();
    void setVolume();
};
#endif