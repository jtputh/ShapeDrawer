//
//  CircleImageGenerator.cpp
//  circle
//
//  Created by Jimesh Thomas on 15/10/21.
//

#include "CircleImageGenerator.h"
#include "Circle.h"


void CircleImageGenerator::start(const std::string& name, int width, int height)
{
    m_image = std::make_unique<QImage>(width, height, QImage::Format_ARGB32);
    m_name = name;
    setWhiteImage();
}

void CircleImageGenerator::circle(double radius, double centerX, double centerY)
{
    assert (m_image != nullptr);
    Point center(centerX, centerY);
    Circle newCircle(radius, center);
    std::vector<Point> boundaryPoints = newCircle.boundaryPoints();
    
    for (const auto& point : boundaryPoints)
    {
        // Convert to pixel cordinates
        int xPixel = point.x + m_image->width()/2;
        int yPixel = m_image->height()/2 - point.y;
        m_image->setPixel(xPixel, yPixel, qRgb(0, 0, 0));
    }
}

void CircleImageGenerator::setWhiteImage()
{
    assert (m_image != nullptr);
    // Set the pixel colors to white.
    for (auto row = 0; row < m_image->height(); row++)
    {
        for (auto  col = 0; col < m_image->width(); col++)
        {
            m_image->setPixel(row, col, qRgb(255, 255, 255));
        }
    }
}

void CircleImageGenerator::saveImage()
{
    assert (m_image != nullptr);
    
    if (m_image->save(QString(m_name.c_str())))
    {
        std::cout << "Image successfully saved: " << m_name << std::endl;
    }
    else
    {
        std::cout << "Failed to save image:" << m_name << std::endl;
    }
}
