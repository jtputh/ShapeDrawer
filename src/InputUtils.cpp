//
//  InputUtils.cpp
//  circle
//
//  Created by Jimesh Thomas on 15/10/21.
//

#include "InputUtils.h"

ImageInput InputUtils::captureImageData()
{
    ImageInput imageInput;
    std::cout << "Enter the width of the image:" << std::endl;
    std::cin >> imageInput.width;
    std::cout << "Enter the height of the image:" << std::endl;
    std::cin >> imageInput.height;

    std::cout << "Enter the image file name with png extension" << std::endl;
    std::cin.ignore();
    std::cin.clear();
    std::getline(std::cin, imageInput.fileName);
    return  imageInput;
}

size_t InputUtils::numberOfCircles()
{
    size_t numberOfCircles = 1;
    std::cout << "Enter number of circles to be drawn:" << std::endl;
    std::cin >> numberOfCircles;
    return numberOfCircles;
}

CircleInput InputUtils::captureCircleData(size_t circleNumber)
{
    CircleInput circleInput;
    circleNumber += 1;
    std::cout << "Enter the radius of circle: " << circleNumber  << std::endl;
    std::cin >> circleInput.radius;
    std::cout << "Enter the center 'x' of circle: " << circleNumber << std::endl;
    std::cin >> circleInput.centerX;
    std::cout << "Enter the center 'y' of circle: " << circleNumber << std::endl;
    std::cin >> circleInput.centerY;
    return circleInput;
}
