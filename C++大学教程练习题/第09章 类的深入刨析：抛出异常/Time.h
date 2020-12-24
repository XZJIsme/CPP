//#ifndef TIME_H
//#define TIME_H
#include <stdexcept>
#include <iostream>
class Time
{

public:
    explicit Time(int = 0, int = 0, int = 0);
    // ~Time();
    void setTime(int, int, int);
    unsigned int getHour() const;
    unsigned int &badSetHour(int);

private:
    unsigned int hour, minute, second;
};



//#endif
