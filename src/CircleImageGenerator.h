//
//  CircleImageGenerator.h
//  circle
//
//  Created by Jimesh Thomas on 15/10/21.
//

#ifndef CircleImageGenerator_h
#define CircleImageGenerator_h

#include <stdio.h>
#include <iostream>
#include <QImage>

class CircleImageGenerator
{
public:
    CircleImageGenerator() = default;
    ~CircleImageGenerator() = default;
    
    void start(const std::string& name, int width, int height);
    void circle(double radius, double centerX, double centerY);
    void saveImage();
    
private:
    void setWhiteImage();
    std::unique_ptr<QImage> m_image;
    std::string m_name;
};

#endif /* CircleImageGenerator_h */
