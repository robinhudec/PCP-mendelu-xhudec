//
//  Game.hpp
//  Fotbalek
//
//  Created by Robin Hudec on 22.09.2026.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <vector>

#include "Dictionary.hpp"
class Game{
    Dictionary d;
    std::vector<std::string> usedWords = {};
    bool wasWordAlreadyUsed(std::string word) ;
    std::string computerPicks(std::string prevWord);

public:
    Game();
    ~Game();
    void play();

};
#endif /* Game_hpp */
