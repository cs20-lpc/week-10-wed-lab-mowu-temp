// g++ -Wall -Wextra tester.cpp -o tester; ./tester
#include "HashTableOpen.hpp"
#include <string>
#include <iostream>

using namespace std;

int main() {
    // variables
    HashTableOpen<string, string> dict;
    cout << dict.size() << endl;
    try {
        cout << dict.find("dummy") << endl;
    }
    catch (string e) {
        cout << e << endl;
    }
    try {
        dict.remove("dummy");
    }
    catch (string e) {
        cout << e << endl;
    }

    // add data to the dictionary
    dict.insert("banana", "a fruit that many like, or a phone");
    dict.insert("cactus", "a pointy plant");
    dict.insert("dog", "a domesticated fluff ball");
    dict.insert("graph", "an awesome data structure!");
    dict.insert("haskell", "fantastic programming language, go learn it");
    dict.insert("igloo", "a cool house");
    dict.insert("phoenix", "a bird on fire");
    dict.insert("quack", "said Mr. Duck");

    cout << dict.size() << endl;
    cout << dict.find("banana") << endl;
    cout << dict.find("dog") << endl;
    cout << dict.find("quack") << endl;
    cout << dict.find("haskell") << endl;
    try {
        cout << dict.find("dummy") << endl;
    }
    catch (string e) {
        cout << e << endl;
    }

    try {
        cout << dict.find("dummy2") << endl;
    }
    catch (string e) {
        cout << e << endl;
    }
    try {
        dict.remove("dummy");
    }
    catch (string e)  {
        cout << e << endl;
    }
    dict.insert("new_item", "new_description");
    cout << dict.size() << endl;
    cout << dict.find("new_item") << endl;
    
    HashTableOpen<string, string> dict2 = dict;
    cout << dict2.size() << endl;
    cout << dict2.find("igloo") << endl;
    cout << dict2.find("new_item") << endl;
    try {
        cout << dict2.find("dummy") << endl;
    }
    catch (string e) {
        cout << e << endl;
    }
    dict.clear();
    cout << dict.size() << endl;
    try {
        cout << dict.find("dummy") << endl;
    }
    catch (string e) {
        cout << e << endl;
    }
    try {
        dict.remove("dummy");
    }
    catch (string e) {
        cout << e << endl;
    }
    cout << dict2.size() << endl;
    cout << dict2.find("igloo") << endl;
    cout << dict2.find("new_item") << endl;
    dict2.remove("igloo");
    cout << dict2.size() << endl;
    try {
        cout << dict2.find("dummy") << endl;
    } catch (string e) {
        cout << e << endl;
    }
    try {
        dict2.remove("dummy");
    } catch (string e) {
        cout << e << endl;
    }

    return 0;
}
