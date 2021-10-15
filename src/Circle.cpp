//
//  Circle.cpp
//  circle
//
//  Created by Jimesh Thomas on 15/10/21.
//

#include "Circle.h"
#include <cmath>

namespace
{
const double PI = 3.14159;
const int Granularity = 720;
}

Circle::Circle(double radius, Point& center) : m_radius(radius), m_center(std::move(center))
{

}

std::vector<Point> Circle::boundaryPoints() const
{
    std::vector<Point> boundaryPointsOfCircle;
    
    for (int i = 0; i < Granularity; i++)
    {
        // Parametric equation of a circle x = x0 + r * sin(t) y = y0 + r * cos(t)
        double deltaAngle = (i) * (PI/180);
        auto x = m_center.x + m_radius * std::sin(deltaAngle);
        auto y = m_center.y + m_radius * std::cos(deltaAngle);

        boundaryPointsOfCircle.push_back({x,y});
    }
    return boundaryPointsOfCircle;
}
