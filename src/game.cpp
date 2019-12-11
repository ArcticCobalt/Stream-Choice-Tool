//Class for the game design

#include <iostream>
#include <string>

class Game {
private:
  string name;
  bool isMultiplayer;
  int priority;
public:

  //if no data given
  
  Game(){
    std::cout << "Error: No game data given" << std::endl;
  }

  //if only name given
 
  Game(string inputName){
    string buffer;
    std::cout << "Only name given, please enter if it's multiplayer or not!" << std::endl;
    while(true){
      std::cin >> buffer;
      if ( (!buffer.compare("Yes") ) || (!buffer.compare("yes")) ){
	isMultiplayer = true;
	break;
      }
      if ( (!buffer.compare("No") ) || (!buffer.compare("no")) ){
	isMultiplayer = false;
	break;
      }
      std::cout << "Input given was invalid, please try again!" << std::endl;
    }
    std::cout << "Please enter a priority from 0-3" << std::endl;
    while(true){
      std::cin >> buffer;
      int priorityBuffer = std::stoi (buffer);
      if (priorityBuffer >= 0 && priorityBuffer <= 3){
	priority = priorityBuffer;
	break;
      }
      std::cout << "Please enter a correct value from 0-3 based on how much your community values this game" << endl; 
    }
  }

  //if only name and is multiplayer given
  
}
