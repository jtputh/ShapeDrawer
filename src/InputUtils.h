//
//  InputUtils.h
//  circle
//
//  Created by Jimesh Thomas on 15/10/21.
//

#ifndef InputUtils_h
#define InputUtils_h

#include <stdio.h>
#include <iostream>

struct ImageInput
{
    std::string fileName = "test.png";
    int width = 1024;
    int height = 1024;
};

struct CircleInput
{
    double radius = 120;
    double centerX = 0.0;
    double centerY = 0.0;
};

class InputUtils
{
    
public:
    InputUtils() = default;
    ~InputUtils() = default;
    
    ImageInput captureImageData();
    size_t numberOfCircles();
    CircleInput captureCircleData(size_t circleNumber);
};

#endif /* InputUtils_h */
