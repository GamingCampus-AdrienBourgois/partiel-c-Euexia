#include "Solution3.h"
#include <algorithm>


// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords() {}

std::vector<std::string> Solution3::GetSortedWords() const
{
    std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
        return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end(), [](char c1, char c2) {
            return tolower(c1) < tolower(c2);
            });
        });
}

#endif
