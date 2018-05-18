#include "func.hpp"

int foo(int x) {
    return [x] (int y) {return x+y;}(2);
}
