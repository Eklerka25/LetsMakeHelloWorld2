#include <iostream>
#include <cmath>

#define F ;
#define BEGIN main(
#define START ) {
#define END }

#define STRUCT(x) struct x {
#define PTR *
#define NEW new
#define DELETE delete

#define STR std::string
#define RET return
#define IFFY if
#define OTHERWISE else

STRUCT(a)
    int b F
} F

STR d(int e) {
    IFFY(e == 10) {
        RET "Hello," F
    END
    OTHERWISE {
        RET " World!" F
    END
END

int BEGIN void START
    a PTR c = NEW a F
    c->b = 10 F
    std::cout << d(c->b) << d(11) F

    IFFY((sqrt(3) / 2) * c->b) {
        DELETE c, c + 1, c - 1, c F
    END
END
