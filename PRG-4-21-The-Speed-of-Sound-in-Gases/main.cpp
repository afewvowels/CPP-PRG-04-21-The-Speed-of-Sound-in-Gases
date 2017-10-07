//
//  main.cpp
//  PRG-4-21-The-Speed-of-Sound-in-Gases
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  When sound travels through a gas, its speed depends primarily on the density of
//  the medium. The less dense the medium, the faster the speed will be. The following
//  table shows the approximate speed of sound at 0 degrees centrigrade, measured
//  in meters per second, when traveling through carbon dioxide, air, helium,
//  and hydrogen.
//
//  Medium                              Speed (Meters per Second)
//  --------------------------------------------------------------------------
//  Carbon dioxide                      258.0
//  Air                                 331.5
//  Helium                              972.0
//  Hydrogen                            1,270.0
//
//  Write a program that displays a menu allowing the user to select one of these four
//  gases. After a selection has been made, the user should enter the number of seconds, it
//  took for the sound to travel in this medium from its source to the location at which it
//  was detected. The program should then report how far away (in meters) the source of
//  the sound was from the detection location.
//
//  Input Validation: Check that the user has selected one of the available menu choices.
//  Do not accept times less than 0 seconds or more than 30 seconds.

#include <iostream>

using namespace std;

int main()
{
    int intMenuSelection;
    
    const int INT_CHOICE_CARBON_DIOXIDE = 1,
              INT_CHOICE_AIR = 2,
              INT_CHOICE_HELIUM = 3,
              INT_CHOICE_HYDROGEN = 4;
    
    float fltSeconds,
          fltDistance;
    
    const float FLT_SPEED_CARBON_DIOXIDE = 258.0f,
                FLT_SPEED_AIR = 331.5f,
                FLT_SPEED_HELIUM = 972.0f,
                FLT_SPEED_HYDROGEN = 1270.0f;
    
    cout << "Please select from the following menu options:\n"
         << "1. Carbon Dioxide\n"
         << "2. Air\n"
         << "3. Helum\n"
         << "4. Hydrogen\n";
    cin >> intMenuSelection;
    while(!cin || intMenuSelection < 1 || intMenuSelection > 4)
    {
        cout << "Please select a number from the available menu options.\n";
        cin.clear();
        cin.ignore();
        cin >> intMenuSelection;
    }
    
    cout << "Please enter the time it took the sound to arrive (0.0 - 30.0):\n";
    cin >> fltSeconds;
    while(!cin || fltSeconds < 0.0f || fltSeconds > 30.0f)
    {
        cout << "Please enter a value between 0 and 30 seconds.\n";
        cin.clear();
        cin.ignore();
        cin >> fltSeconds;
    }
    
    switch(intMenuSelection)
    {
        case INT_CHOICE_CARBON_DIOXIDE:
            fltDistance = fltSeconds * FLT_SPEED_CARBON_DIOXIDE;
            cout << "Your soundwave travelled "
                 << fltDistance
                 << " meters.";
            break;
        case INT_CHOICE_AIR:
            fltDistance = fltSeconds * FLT_SPEED_AIR;
            cout << "Your soundwave travelled "
                 << fltDistance
                 << " meters.";
            break;
        case INT_CHOICE_HELIUM:
            fltDistance = fltSeconds * FLT_SPEED_HELIUM;
            cout << "Your soundwave travelled "
                 << fltDistance
                 << " meters.";
            break;
        case INT_CHOICE_HYDROGEN:
            fltDistance = fltSeconds * FLT_SPEED_HYDROGEN;
            cout << "Your soundwave travelled "
                 << fltDistance
                 << " meters.";
            break;
    }
    
    return 0;
}
