//
//  main.cpp
//  
//
//  Created by Jimesh Thomas on 15/10/21.
//

#include "CircleImageGenerator.h"
#include "AppMessages.h"
#include "InputUtils.h"

#include <stdio.h>
#include <QCoreApplication>


int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    
    CircleImageGenerator imageGenerator;
    
    AppMessages applicationMessages;
    applicationMessages.welcomeMessage();
    
    InputUtils inputUtils;

    do
    {
        ImageInput imageInput = inputUtils.captureImageData();
        // Draw white image
        imageGenerator.start(imageInput.fileName, imageInput.width, imageInput.height);
        
        size_t numberOfCirclesToDraw = inputUtils.numberOfCircles();
        
        // Create and draw circle in black color
        for (size_t i = 0; i < numberOfCirclesToDraw; ++i)
        {
            CircleInput circleInput = inputUtils.captureCircleData(i);
            imageGenerator.circle(circleInput.radius, circleInput.centerX, circleInput.centerY);
        }
    
        imageGenerator.saveImage();
        
        if (applicationMessages.applicationEndMessage())
        {
            break;
        }
        
    } while(true);
    
    return 0;
}
