#include <iostream>

struct a {
    int b;
};

int main() {
    a* c = new a();
    c->b = 10;
    std::cout << c->b;
}
