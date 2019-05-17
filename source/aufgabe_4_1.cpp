//
// Created by Jonas Roquette on 2019-05-15.
//
#include "circle.hpp"
#include "vec2.hpp"
#include "color.hpp"
#include <iostream>
#include <set>


//Catches duplicated names when inserting an object of circle into set
bool insert(std::set<Circle> &setlist, Circle const & circ)
{
    bool x = true;
    for (auto &l : setlist)
    {
        if (circ.getName() == l.getName())
        {
            x = false;
        }
    }
    if (x)
    {
        setlist.insert(circ);
    } else {
        std::cout << "Keine Kreise mit dem gleichen Namen einfügen." << std::endl;
    }
}

int main()
{
    //Creates an object of Vec2 and RGB
    Vec2 center{400.f, 400.f};
    RGB color;

    //Creates multiple circles with different values and names
    Circle c_1(center, 20.f, color, 1.f, "Yeesus");
    Circle c_2(center, 400.f, color, 5.f, "Yeetus");
    Circle c_3(center, 120.f, color, 2.f, "Jesus");

    //Prints the circle values to console
    std::cout << c_1 << std::endl;
    std::cout << c_2 << std::endl;

    //Creates a set for the circles
    std::set<Circle> circleList;

    //Inserts circles into list
    insert(circleList, c_1);
    insert(circleList, c_2);
    insert(circleList, c_3);
    insert(circleList, c_1);

    //Asks the user to input a name
    std::string name;
    std::cout << "Geben Sie einen Namen ein: " << std::endl;
    std::cin >> name;

    //Checks whether the name is valid
    if (name == "")
    {
        std::cout << "Der Name ist ungültig, geben Sie erneut einen Namen ein." << std::endl;
    } else {
        for (auto& i : circleList)
        {
            if (i.getName() == name)
            {
                std::cout << i << std::endl;
            }
        }
    }

    return 0;
}

