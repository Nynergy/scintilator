#include "SEngine.hpp"

SEngine::SEngine() {}

SEngine::~SEngine() {
    delete canvas;
}

void SEngine::init() {
    createCanvas();
}

void SEngine::createCanvas() {
    Box canvasDimensions;
    canvas = new Canvas(canvasDimensions);
}

void SEngine::run() {
    timeout(100);

    int key;
    while(key != 'q') {
        key = getch();
        renderCanvas();
        handleInput(key);
    }
}

void SEngine::handleInput(int key) {
    // For now, do nothing
    return;
}

void SEngine::renderCanvas() {
    canvas->drawPanel();
}
