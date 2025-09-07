#include <iostream>

struct a {
    int b;
};

std::string d(int e) {if (e == 10) return 'Hello,'; return ' World!';}

int main() {
    a* c = new a();
    c->b = 10;
    std::cout << d(c->b) << d(11);

    // very important calculations!!!!
    if ((sqrt(3) / 2) * a) {
        delete c, c + 1, c - 1, c; // ugly but works. DO NOT TOUCH (i will touch it where the sun don't shine)
    }
}
