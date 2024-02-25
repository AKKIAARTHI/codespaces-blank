#ifndef BOX_AREA_H
#include "boxArea.h"
#ifndef BOX_VOLUME_H
#include "boxVolume.h"
#include <iostream>
using namespace std;
int main()
{
    float length, width, height;
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter width : ";
    cin >> width;
    cout << "Enter height : ";
    cin >> height;
    boxArea(length, width, height);
    boxVolume(length, width, height);
}
#endif
