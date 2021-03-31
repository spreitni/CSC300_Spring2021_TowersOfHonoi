#include <iostream>
#include "Game.hpp"
using namespace std;

Game::Game()
{
    for (int i =0;i<3;i++)
    {

    this->theTowers[i] = new Tower();
    }
    
    Disk* d1 = new Disk(1);
    Disk* d2 = new Disk(2);
    Disk* d3 = new Disk(3);
    theTowers[2]->push(d3);
    theTowers[1]->push(d2);
    theTowers[0]->push(d1);
    //theTowers->display();

}
void Game::display()
{
    this->theTowers[0]->Tower::display();
    cout<<"______\n\n";
    this->theTowers[1]->Tower::display();
    cout<<"______\n\n";
    this->theTowers[2]->Tower::display();
    cout<<"______\n\n";
}
