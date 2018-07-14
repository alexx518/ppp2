# Working fltk example from Stroustrup's PPP 2 edition, chapter 12. 

Compile with GCC 7 on Ubuntu 18.04 and ``libfltk1.3-dev``:
```
g++ -std=c++11 main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp  -lfltk -lfltk_images -o main
```

Output: 

![alt text](https://github.com/alexx518/ppp2/blob/master/screenshot.png)
