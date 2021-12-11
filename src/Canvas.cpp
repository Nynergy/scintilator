#include "Canvas.hpp"

Canvas::Canvas(Box dimensions) : Panel(dimensions) {}

Canvas::~Canvas() {
    for(Spark * spark : sparks) {
        delete spark;
    }
}

void Canvas::drawPanel() {
    clearScreen();
    stepSparks();
    drawSparks();
    refreshWindow();
}

void Canvas::stepSparks() {
    for(Spark * spark : sparks) {
        if(!spark->fizzled()) {
            spark->step();
        }
    }

    // Remove all fizzled sparks
    while(sparks.size() && sparks[0]->fizzled()) {
        sparks.erase(sparks.begin());
    }

    // If number of sparks is low, add more
    int added = 0;
    while(added < 3 && sparks.size() < MIN_SPARKS) {
        int randX = rand() % columns;
        int randY = rand() % lines;
        Point origin(randX, randY);

        Spark * spark = new Spark(origin);
        sparks.push_back(spark);
        added++;
    }
}

void Canvas::drawSparks() {
    for(Spark * spark : sparks) {
        Point origin = spark->origin;
        int elapsed = SPARK_LIFETIME - spark->lifetime;

        if(elapsed) {
            // Spark has burst, draw lines
            Point up(origin.x, origin.y - elapsed);
            Point down(origin.x, origin.y + elapsed);
            Point left(origin.x - elapsed, origin.y);
            Point right(origin.x + elapsed, origin.y);

            drawCharAtPoint('|', up, win);
            drawCharAtPoint('|', down, win);
            drawCharAtPoint('-', left, win);
            drawCharAtPoint('-', right, win);
        } else {
            // Spark is fresh, draw plus
            drawCharAtPoint('+', origin, win);
        }
    }
}
