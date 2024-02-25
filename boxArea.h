#include <iostream>
using namespace std;
#define BOX_AREA_H

void boxArea(float length, float width,float height){
    cout << "Box Area : " << 2 * (length*width + width*height + length*height) << endl;
}
