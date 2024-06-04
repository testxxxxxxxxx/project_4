#include <iostream>
#include "../include/Cycle.hpp"

using namespace std;
using namespace GraphCycle;

void Cycle::add(int value)
{
    //add element to cycle

    this->content.push_back(value);

}
void Cycle::clear()
{
    //clear all cycle

    this->content.clear();

}
bool Cycle::search(int value)
{
    //search element in cycle

    vector<int>::iterator it;

    for(it = this->content.begin(); it != this->content.end(); it++)
    {
        if(*it == value)
            return true;

    }

    return false;
}
bool Cycle::isCorrect()
{
    vector<int>::iterator startElement;
    vector<int>::iterator endElement;

    startElement = this->content.begin();
    endElement = this->content.end();

    if(*startElement == *endElement)
        return true;

    return false;
}
void Cycle::print()
{
    //print cycle content

    vector<int>::iterator it;

    for(it = this->content.begin(); it != this->content.end(); it++)
    {
        cout<<" "<<*it;

    }
    cout<<endl;

}
int Cycle::size()
{
    //get cycle size      

    return this->content.size();
}