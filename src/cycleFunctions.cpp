#include <iostream>
#include "../include/Cycle.hpp"

using namespace std;
using namespace GraphCycle;

void Cycle::add(int value)
{
    this->content.push_back(value);

}
void Cycle::clear()
{
    this->content.clear();

}
bool Cycle::search(int value)
{
    vector<int>::iterator it;

    for(it = this->content.begin(); it != this->content.end(); it++)
    {
        if(*it == value)
            return true;

    }

    return false;
}