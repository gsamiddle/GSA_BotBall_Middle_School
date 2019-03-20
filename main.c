#include <kipr/botball.h>

int main()
{
    //Go forward, leaving the staring box
    mav(0,350);
    mav(1,350);
    msleep(6000);
    
    //Turn right to go along the tape
    mav(0,350);
    mav(1,-350);
    msleep(1800);
    
    //Go forward along the tape
    mav(0,550);
    mav(1,550);
    msleep(6000);
    
    //Turn left to get onto the tape
    mav(0,-350);
    mav(1,350);
    msleep(1600);
    
    //Go forward onto the tape
    mav(0,450);
    mav(1,450);
    msleep(2500);
    
    //Turn to line up with the line
    mav(0,-350);
    mav(1,350);
    msleep(1700);
    return 0;
}
