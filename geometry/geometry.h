#include <iostream>

using namespace std;

#ifndef _GEOMETRY_H
#define _GEOMETRY_H

class Point
{
public:
	double x, y;
	Point();
	Point(double _x, double _y);
};

class Triangle
{
public:
	Point vertexes[3];
	double area;
};

void clearTriangle(Triangle& tr);

void clearPoint(Point& p);

// Расстояние между двумя точками по их координатам
double calcDistance(const Point& pa, const Point& pb);

// Площадь треугольника по координатам точек
double calcTriangleArea(Triangle& tr);

double calcAreaBySides(double a, double b, double c);

#endif











