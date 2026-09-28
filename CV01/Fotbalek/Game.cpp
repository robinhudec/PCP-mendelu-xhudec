//
//  Game.cpp
//  Fotbalek
//
//  Created by Robin Hudec on 22.09.2026.
//

#include "Game.hpp"

#include <iostream>
#include <ostream>

Game::Game() {

}

Game::~Game() {

}

std::string Game::computerPicks(std::string prevWord) {
    //iterates through the vocabulary, until it finds a word starting with the same letter as prevWord
    for (int i = 0; i < d.vocabulary.size(); i++) {
        if (prevWord.ends_with(d.vocabulary[i][0]) && not (wasWordAlreadyUsed(d.vocabulary[i]))) {
            return d.vocabulary[i];
        }
    }
    return "";
}

bool Game::wasWordAlreadyUsed(std::string word) {
    return not (std::ranges::find(usedWords, word) == usedWords.end());
}

void Game::play() {
    // i dont know how to pick a random word without using a library, so the first word is set manually
    std::string currentWord = "cesta";
    int index = 0;
    usedWords.emplace_back("cesta");
    std::cout << "The computer picked \"" << Game::usedWords[0] << "\"" << std::endl;
    while (!currentWord.empty()) {
        std::cin >> currentWord;
        //if players word isnt in the dictionary, doesnt follow or was already used, the if doesnt pass
        if (Game::d.isWordInDictionary(currentWord) && Game::d.follows( Game::usedWords[index],currentWord) &&  not (wasWordAlreadyUsed(currentWord))) {
            index++;
            std::cout << "Correct!" << std::endl;
            usedWords.push_back(currentWord);
            currentWord = computerPicks(currentWord);
            //if computerPicks() doesnt find a suitable word, it returns an empty string
            if (!currentWord.empty()) {
                index++;
                usedWords.push_back(currentWord);
                std::cout << "The computer picked \"" << currentWord << "\"" << std::endl;

            }
            else std::cout << "You won" << std::endl;
         }
        else {
            std::cout << "You lost!" << std::endl;
            currentWord = "";
        }
    }
}