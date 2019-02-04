#include <iostream>  // for cout, the print func

#include "mychecker.h"
using namespace std;

// implement your own checker class here

YunnySpellChecker::YunnySpellChecker(string pathToDict)
{
    cout << "this is the path to dictionary\n"; 
    cout << "this is the given arg: " << pathToDict; 
}

bool YunnySpellChecker::isValidWord(string word)
{
    return word.empty() ? false : true; 
}

vector<string> YunnySpellChecker::guessCorrections(string word)
{
    cout << "guessCorrections will return the list of 5 suggested words!"; 
    return {};
}

/*
    Do I need to make the destructor? What is automatic storage duration vs dynamic storage duration? 
    WHat is storage duration? Linkage? 
    auto, static, register, extern, etc? 
    
    WHat is the del-specificer-spec the function declraation? How does it work?

    Do I have a complete understanding how this program will work? 
    -> I decleare the blueprint of the object in mychecker.h file. I implement the class in mychecker.cpp. 
    I am going to instantiate the object in run_spellcheck.cpp, and I am going to call methods in the main function there. 

*/
