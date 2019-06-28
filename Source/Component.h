#ifndef SOURCE_COMPONENT_H
#define SOURCE_COMPONENT_H

#include <functional>
#include "Event.h"

using namespace std;

class Component {
private:
    function<void(Event)> clickEvent;
    function<void(Event)> mouseMoveEvent;

public:
    function<void(Event)> onClick;
    function<void(Event)> onMouseMove;
    void draw();

};

#endif //SOURCE_COMPONENT_H
