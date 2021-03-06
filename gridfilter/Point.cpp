// Copyright (c) 2012, 2013
// Ravi Peters -- r.y.peters@tudelft.nl
// All rights reserved
// 
// This file is part of Surfonoi.
// 
// Surfonoi is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Surfonoi is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Surfonoi.  If not, see <http://www.gnu.org/licenses/>.

#include "Point.h"

Point::Point(): px(0),py(0),pz(0),isset(false)
{}

Point::Point(double x, double y, double z): px(x),py(y),pz(z),isset(true)
{}

double Point::x() const
{
    return px;
}

double Point::y() const
{
    return py;
}

double Point::z() const
{
    return pz;
}

void Point::set(double x, double y, double z)
{
    px = x;
    py = y;
    pz = z;
}

bool Point::isSet() const
{
    return isset;
}