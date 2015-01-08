#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>

using namespace std;

class Square {
    float x;
    float v_x;

  public:
    Square (float, float);
    
    void setX(float);
    void setVX(float);

    float getX();
    float getVX();
};
#endif
