#include <kipr/botball.h>

int main()
{
    mav(0,350);
    mav(1,350);
    msleep(6000);
    
    mav(0,350);
    mav(1,-350);
    msleep(1800);
    
    mav(0,550);
    mav(1,550);
    msleep(6000);
    
    mav(0,-350);
    mav(1,350);
    msleep(1600);
    
    mav(0,450);
    mav(1,450);
    msleep(2500);
    
    mav(0,-350);
    mav(1,350);
    msleep(1700);
    return 0;
}
