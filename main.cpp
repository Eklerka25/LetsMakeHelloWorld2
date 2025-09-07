#include <iostream>

struct a {
    int b;
};

std::string d(int e) {if (e == 10) return 'Hello,'; return ' World!';}

int main() {
    a* c = new a();
    c->b = 10;
    std::cout << d(c->b) << d(11);
}
