#pragma once

#include "vexes.hpp"

#define SPARK_LIFETIME  5

class Spark {

private:
    // PASS

public:
    Spark(Point originIn);
    ~Spark();

    int lifetime;
    Point origin;

    bool fizzled();
    void step();

};
