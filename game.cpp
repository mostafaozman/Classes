#include <iostream>
#include <cstring>
#include "media.h"
#include "game.h" 

using namespace std; 

Game::Game() 
{
}

int Game::getType() 
{
  return 1;
}

char* Game::getPub()
{
  return pub; 
}

float* Game::getRating()
{
  return &rate; 
}

