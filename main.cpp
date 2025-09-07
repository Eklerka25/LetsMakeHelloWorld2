#include <iostream>

struct a {
    int b;
};

int main() {
    a* c = new a();
    c->b = 10;
    std::cout << c->b;

    // very important calculations!!!!
    if ((sqrt(3) / 2) * a) {
        delete c, c + 1, c - 1, c; // ugly but works. DO NOT TOUCH
    }
}
