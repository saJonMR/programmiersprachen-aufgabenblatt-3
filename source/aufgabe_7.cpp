//
// Created by Jonas Roquette on 2019-05-20.
//
#define CATCH_CONFIG_RUNNER

#include <iostream>
#include <catch.hpp>
#include "circle.hpp"
#include <vector>
#include <algorithm>

TEST_CASE("Kreis nach Radius sortiert")
{
    Vec2 center{400.f, 400.f};
    RGB color;

    Circle c_1(center, 20.f, color, 1.f, "Yeesus");
    Circle c_2(center, 400.f, color, 5.f, "Yeetus");
    Circle c_3(center, 120.f, color, 2.f, "Jesus");
    Circle c_4(center, 60.f, color, 1.f, "Dankus");

    std::vector<Circle> radius_sort{c_1, c_2, c_3, c_4};

    std::sort(radius_sort.begin(), radius_sort.end(), [](const Circle & one, const Circle & two)
    {
        return one.getRadius() > two.getRadius();
    });

    REQUIRE(std::is_sorted(radius_sort.begin(), radius_sort.end()));
}

int main(int argc, char* argv [])
{
    return Catch::Session().run(argc, argv);
}