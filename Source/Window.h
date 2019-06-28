#ifndef SOURCE_WINDOW_H
#define SOURCE_WINDOW_H

#include <vector>
#include "Component.h"

using namespace std;

class Window {
private:
    vector<Component> controls;

public:
    void run();
    Component* addComponent();
    Component* removeComponent();
};

#endif //SOURCE_WINDOW_H
