//
// Created by Jonas Roquette on 2019-05-16.
//

# include <cstdlib> //std::rand()
# include <vector> //std::vector<>
# include <list> //std::list<>
# include <iostream> //std::cout
# include <iterator> //std::ostream_iterator<>
# include <algorithm> //std::reverse, std::generate

int main ()
{
    //Creates vector with 10 zero-initialised elements
    std::vector<int> v_0(10);

    //Assigns a random value to every element inside of v_0
    for (auto& v : v_0) {
        v = std::rand();
    }

    //Prints path vector to console
    std::copy(std::cbegin(v_0), std::cend(v_0), std::ostream_iterator<int>(std::cout, "\n"));

    //Creates two new lists, both with the same values as v_0
    std::list<int> l_0(std::cbegin(v_0), std::cend(v_0));
    std::list<int> l_1(std::cbegin(l_0), std::cend(l_0));

    //Reverses l_1 and prints to console
    std::reverse(std::begin(l_1), std::end(l_1));
    std::copy(std::cbegin(l_1),std::cend(l_1), std::ostream_iterator<int>(std::cout, "\n"));

    //Sorts the list using the default sort operator (ascending order) and prints to console
    l_1.sort();
    std::copy(l_1.cbegin(), l_1.cend(), std::ostream_iterator<int>(std::cout, "\n"));

    //Fills v_0 with random numbers and prints to console
    std::generate(std::begin(v_0), std::end(v_0), std::rand);
    std::copy(v_0.crbegin(), v_0.crend(), std::ostream_iterator<int>(std::cout, "\n"));

    return 0;
}