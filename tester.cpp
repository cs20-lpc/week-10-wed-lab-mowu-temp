// g++ -Wall -Wextra tester.cpp -o tester; ./tester
#include "LinkedList.hpp"
#include <iostream>

using namespace std;

int main () {
    LinkedList<int> ll;
    ll.append(1);
    ll.append(2);
    ll.append(3);
    ll.append(4);
    ll.append(5);
    auto end = ll.end();
    for (auto itr = ll.begin(); itr != end; itr++) {
        cout << *itr << endl;
    }
    return 0;

}