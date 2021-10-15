//
//  Shape.h
//  circle
//
//  Created by Jimesh Thomas on 15/10/21.
//

#ifndef Shape_h
#define Shape_h

#include <stdio.h>
#include <vector>

class Point;
class Shape
{
public:
    Shape() = default;
    virtual ~Shape() = default;
    virtual std::vector<Point> boundaryPoints() const = 0;
};

#endif /* Shape_h */
