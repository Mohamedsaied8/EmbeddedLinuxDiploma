#include "legacy.h"
#include <iostream>

// Legacy component (Adaptee)
LegacyRectangle::LegacyRectangle(int x1, int y1, int x2, int y2) {
        x1_ = x1;
        y1_ = y1;
        x2_ = x2;
        y2_ = y2;
        std::cout << "LegacyRectangle(x1,y1,x2,y2)\n";
    }

void LegacyRectangle::oldDraw() {
    std::cout << "LegacyRectangle:  oldDraw(). \n";
}
