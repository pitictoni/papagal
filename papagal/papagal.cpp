
#include <iostream>
#include <cassert>
using namespace std;

int Suma(int a, int b) {
    return a + b;
}

int Produs(int a, int b) {
    return a * b;
}


int main()
{
    assert(Suma(3, 5) == 8);
    assert(Produs(3, 5) == 15);
}
