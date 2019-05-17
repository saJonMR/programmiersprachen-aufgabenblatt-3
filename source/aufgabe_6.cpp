//
// Created by Jonas Roquette on 2019-05-17.
//
#define CATCH_CONFIG_RUNNER

#include "catch.hpp"
#include "vec2.hpp"
#include "circle.hpp"
#include "mat2.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

TEST_CASE ("Sorted") {

    Vec2 center{400.f, 400.f};
    RGB color;

    Circle c_1(center, 20.f, color, 1.f, "Yeesus");
    Circle c_2(center, 400.f, color, 5.f, "Yeetus");
    Circle c_3(center, 120.f, color, 2.f, "Jesus");
    Circle c_4(center, 60.f, color, 1.f, "Dankus");

    std::vector<Circle> sorted_circles{c_1, c_2, c_3, c_4};
    std::sort(sorted_circles.begin(), sorted_circles.end());

    REQUIRE(std::is_sorted(sorted_circles.begin(), sorted_circles.end ()));
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}
