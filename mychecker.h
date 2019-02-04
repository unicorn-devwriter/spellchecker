#include "spellchecker_interface.h"
using namespace std;  // trivia: what is this?

// declare your spellChecker class here, inheriting the SpellChecker class

//implements SpellCheckerInterface
class YunnySpellChecker : public SpellCheckerInterface
{
    public:
        YunnySpellChecker(string pathToDict);
        bool isValidWord(string word);
        vector<string> guessCorrections(string word);  


    private:
        string pathToDict; 
};