//
//  AppMessages.hp
//  circle
//
//  Created by Jimesh Thomas on 15/10/21.
//

#ifndef AppMessages_h
#define AppMessages_h

#include <stdio.h>

class AppMessages
{
public:
    AppMessages() = default;
    ~AppMessages() = default;
    
    void welcomeMessage();
    bool applicationEndMessage();
};


#endif /* AppMessages_hpp */
