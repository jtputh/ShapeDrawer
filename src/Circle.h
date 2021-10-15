//
//  Circle.h
//  circle
//
//  Created by Jimesh Thomas on 15/10/21.
//

#ifndef Circle_h
#define Circle_h

#include "Shape.h"
#include "Point.h"

#include <stdio.h>

class Circle : public Shape
{
public:
    Circle() = delete;
    Circle(double radius, Point& center);
    ~Circle() = default;
    std::vector<Point> boundaryPoints() const override;
    double getRadius() const {return m_radius;}
private:
    double m_radius;
    Point m_center;
};

#endif /* Circle_h */
