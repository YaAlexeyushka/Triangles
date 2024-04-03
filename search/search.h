#include <iostream>
#include "../geometry/geometry.h"

using namespace std;

#ifndef SEARCH_H
#define SEARCH_H

// Поиск треугольников максимальной площади
void searchLargestTriangles(const Point* pointArray,
	int pointNum, Triangle* trArray, int maxTrNum);

void findAndInsert(Triangle* trArray,
	int length, const Triangle& triangle);



#endif