//
//  AppMessages.cpp
//  circle
//
//  Created by Jimesh Thomas on 15/10/21.
//

#include "AppMessages.h"
#include <iostream>

void AppMessages::welcomeMessage()
{
    std::cout << "**** Circle Image Generator App **** "<< std::endl << std::endl;
}

bool AppMessages::applicationEndMessage()
{
    char quitmsg = 'q';
    std::cout << "Enter 'q' to quit or any other key to continue..." << std::endl;
    std::cin >> quitmsg;
    
    if (quitmsg != 'q')
        return  false;
    
    return true;
}
