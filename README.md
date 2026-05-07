# termcolors
terminal colors libary for C/C++


# usage
if on windows:
```cpp
init_ansi();
std::cout << (GREEN("hi"));
```
or
```c
init_ansi();
printf(GREEN("hi"));
```
if on linux
```cpp
std::cout << (GREEN("hi"));
```
or
```c
printf(GREEN("hi"));
```
# colors
BLUE(s)
GREEN(s)
RED(s)
YELLOW(s) 
CYAN(s)
BLACK(s)
WHITE(s)
