// main.cpp
#include "triangle.h"
#include <iostream>

using namespace std;

int main() {
    Triangle triangle, a;

    cin >> triangle;
    cout << triangle;

    triangle++;
    triangle.Display();

    triangle--;
    triangle.Display();

    cin >> a;
    cout << a;


    return 0;
}
