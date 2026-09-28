//
//  Dictionary.hpp
//  Fotbalek
//
//  Created by Robin Hudec on 22.09.2026.
//

#ifndef Dictionary_hpp
#define Dictionary_hpp

#include <stdio.h>
#include <string>
#include <array>


class Dictionary{
public:
    const std::array<std::string, 78> vocabulary = {{
        "auto", "autobus",
        "áčko", "árie",
        "banán", "bota",
        "cena", "cesta",
        "čaj", "čepice",
        "dárek", "dům",
        "ďábel", "ďolík",
        "elektrárna", "energie",
        "éra", "éter",
        "film", "fotka",
        "garáž", "guma",
        "had", "hora",
        "chata", "chléb",
        "igelit", "internet",
        "íčko", "íránský",
        "jablko", "jezero",
        "káva", "kočka",
        "les", "loď",
        "malina", "most",
        "nábytek", "nos",
        "ňadro", "ňouma",
        "obraz", "okno",
        "óda", "ópium",
        "pes", "počítač",
        "quinoa", "quiz",
        "raketa", "ryba",
        "řeka", "řidič",
        "slunce", "strom",
        "škola", "šnek",
        "telefon", "tužka",
        "ťukat", "ťuknout",
        "ucho", "ulice",
        "úkol", "úsměv",
        "váza", "vlak",
        "web", "whisky",
        "xenon", "xylofon",
        "yeti", "ypsilon",
        "zahrada", "zebra",
        "žába", "židle"
    }};

    Dictionary();
    ~Dictionary();
    bool follows(std::string prevWord, std::string followingWord);
    bool isWordInDictionary(std::string word);
};
#endif /* Dictionary_hpp */
