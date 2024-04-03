#include <iostream>
#include <fstream>
#include <locale.h>
#include "geometry/geometry.h"
#include "search/search.h"
#include "file/file.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    const char* inFileName = "input.txt";
    const char* outFileName = "output.txt";

    int pointsAmount = countPoints(inFileName);

    cout << pointsAmount;

    if (pointsAmount < 0)
    {
        cout << "Входной файл не существует" << endl;
        return -2;
    }
    else if (pointsAmount < 4)
    {
        cout << "Входной файл слишком мал" << endl;
        return -3;
    }
    Point* pointArray = new Point[pointsAmount];
    if (!readPoints(inFileName, pointArray, pointsAmount))
    {
        cout << "Неизвестная ошибка при вводе точек " << endl;
        return -3;
    }

    const int maxTrNum = 3;
    Triangle trArray[maxTrNum];

    searchLargestTriangles(pointArray, pointsAmount,
        trArray, maxTrNum);

    if (!writeTriangles(outFileName, trArray, maxTrNum))
    {
        cout << "Не удалось записать результат" << endl;
        return -4;
    }

    cout << "Программа успешно завершена" << endl;

    delete[] pointArray;

    return 0;
}













