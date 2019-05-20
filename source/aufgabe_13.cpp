//
// Created by Jonas Roquette on 2019-05-18.
//

#define CATCH_CONFIG_RUNNER

#include <catch.hpp>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

bool is_even(int n) {return n % 2 == 0;}

template<typename container, typename condition>
std::vector<int> filter(container &cont, condition cond)
{
    for (unsigned int i = 0; i < cont.size(); i++)
    {
        if (cond(cont.at(i)) == false)
        {
            cont.erase(cont.begin()+i);
        }
    }
    return cont;
}

TEST_CASE("Filter gerade Zahlen")
{
    std::vector<int> v{1, 2, 3, 4, 5, 6};
    std::vector<int> all_even = filter(v, is_even);

    REQUIRE(std::all_of(all_even.begin(), all_even.end(), is_even));
}

int main(int argc, char* argv [])
{
    return Catch::Session().run(argc, argv);
}