// triad.h
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Triad {
private:
    int a, b, c;

public:
    Triad() : a(1), b(1), c(1) {};
    Triad(int a, int b, int c);
    Triad(const Triad& triad) : a(triad.a), b(triad.b), c(triad.c) {};

    int calculateSum() const;

    int getA() const;
    int getB() const;
    int getC() const;

    void setA(int sideA);
    void setB(int sideB);
    void setC(int sideC);

    void Init(int a, int b, int c);
    void Read();
    void Display() const;

    Triad& operator = (const Triad& triad);
    friend::ostream& operator << (std::ostream& out, const Triad& triad);
    friend::istream& operator >> (std::istream& in, Triad& triad);

    operator std::string() const;

    Triad& operator++ ();
    Triad& operator-- ();
    Triad operator++ (int);
    Triad operator-- (int);

    std::string toString() const;
};
