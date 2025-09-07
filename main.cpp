#include <iostream>
#include <cmath>

#define F ;
#define BEGIN main(
#define START ) {
#define END }

#define STRUCT struct
#define PTR *
#define NEW new
#define DELETE delete
#define IF if
#define THEN {
#define ELSE } else {
#define FI }

#define STR std::string
#define RET return
#define FUNC std::string d(int e) F \
IF (e == 10) THEN RET "Hello," F ELSE RET " World!" F FI

STRUCT a F
    int b F
F

FUNC

int BEGIN void START
    a PTR c = NEW a F
    c->b = 10 F
    std::cout << d(c->b) << d(11) F

    // very important calculations!!!!
    IF ((sqrt(3) / 2) * c->b) THEN
        DELETE c, c + 1, c - 1, c F // ugly but works. DO NOT TOUCH
    FI
END
