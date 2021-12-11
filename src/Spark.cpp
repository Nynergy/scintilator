#include "Spark.hpp"

Spark::Spark(Point originIn) : lifetime(SPARK_LIFETIME), origin(originIn) {}

Spark::~Spark() {}

bool Spark::fizzled() {
    return lifetime <= 0;
}

void Spark::step() {
    lifetime--;
}
