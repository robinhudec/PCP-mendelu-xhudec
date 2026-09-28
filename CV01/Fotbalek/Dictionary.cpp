//
//  Dictionary.cpp
//  Fotbalek
//
//  Created by Robin Hudec on 22.09.2026.
//

#include "Dictionary.hpp"
#include <string>

//returns true if the last letter of prevWord is the same as the firstLetter of followingWord
bool Dictionary::follows(std::string prevWord, std::string followingWord){
   /*Nedaji se nasledujici 2 radky napsat jako return prevWord.ends_with(followingWord); ?
    if (prevWord.ends_with(followingWord[0])) return true;
    return false;
}


bool Dictionary::isWordInDictionary(std::string word) {
    for (int i = 0; i < vocabulary.size(); i++) {
        if (vocabulary[i] == word) return true;
    }
    return false;
}

Dictionary::Dictionary() {

}
Dictionary::~Dictionary() {

}

