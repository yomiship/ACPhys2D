#include <iostream>
#include "Square.h"

using namespace std;

Square::Square(float xpos, float xvel) {
    x = xpos;
    v_x = xvel;
}

void Square::setX(float newX) {
    x = newX;
}

void Square::setVX(float newVX) {
    v_x = newVX;
}

float Square::getX() {
    return x;
}

float Square::getVX() {
    return v_x;
}
