#pragma once

#include "Canvas.hpp"

class SEngine : public Engine {

private:
    Canvas * canvas;

    void createCanvas();
    void handleInput(int key);
    void renderCanvas();

public:
    SEngine();
    ~SEngine();

    void init() override;
    void run() override;

};
