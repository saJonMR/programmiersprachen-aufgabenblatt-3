//
// Created by Jonas Roquette on 2019-05-15.
//
#include "circle.hpp"
#include "vec2.hpp"
#include <iostream>

int main()
{
    //Creates an object of Vec2 and RGB
    Vec2 center{400.f, 400.f};
    RGB color;

    //Creates multiple circles with different values and names
    Circle c_1(center, 20.f, color, 1.f, "Yeesus");
    Circle c_2(center, 400.f, color, 5.f, "Yeetus");

    //Prints the circle values to console
    std::cout << c_1 << std::endl;
    std::cout << c_2 << std::endl;

    std::string name;
    std::cout << "Geben Sie einen Namen ein: " << std::endl;
    std::cin >> name;

    std::set<std::string> circleList;

    const bool is_in = circleList.find(std::string) != container.end();

    return 0;
}

