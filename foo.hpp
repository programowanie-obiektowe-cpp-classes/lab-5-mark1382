#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <algorithm> // for std::reverse

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> result;
    result.reserve(people.size()); // Rezerwacja miejsca w wektorze dla lepszej wydajności

    // Iterujemy przez listę, modyfikujemy obiekty i budujemy wynikowy wektor
    for (auto& people.begin() : people.end()) {
        person.birthday(); // Inkrementacja wieku
        result.push_back(person.isMonster() ? 'y' : 'n'); // 'y' jeśli lubi psy/koty, 'n' jeśli nie
    }

    // Odwracamy kolejność wektora
    std::reverse(result.begin(), result.end());

    return result;
}
