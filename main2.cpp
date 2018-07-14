#include "Window.h"
#include "Graph.h"

int main() {
    using namespace Graph_lib; 
    
    Point t1 {100,100};
    Graph_lib::Window win {t1,600,400,"test"};
    gui_main();
}

