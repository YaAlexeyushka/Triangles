#include <iostream>
#include "../geometry/geometry.h"

using namespace std;

#ifndef FILE_H
#define FILE_H

// ������� ����� ����� �� ������� �����
int countPoints(const char* fileName);
// ������ ����� �� �������� �����
bool readPoints(const char* fileName,
	Point* pointArray, int maxPointNum);
// ����� ������������� � �������� ����
bool writeTriangles(const char* fileName,
	const Triangle* trArray, int trNum);

// �������� �����
istream& operator>>(istream& in, Point& p);

// �������� ������
ostream& operator<<(ostream& out, const Point& p);
ostream& operator<<(ostream& out, const Triangle& tr);

#endif


