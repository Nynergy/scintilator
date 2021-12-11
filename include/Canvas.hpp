#pragma once

#include "Spark.hpp"

#define MIN_SPARKS  30

class Canvas : public Panel {

private:
    std::vector<Spark *> sparks;

    void stepSparks();
    void drawSparks();

public:
    Canvas(Box dimensions);
    ~Canvas();

    void drawPanel() override;

};
