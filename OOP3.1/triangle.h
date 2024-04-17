// triangle.h
#include "triad.h"
#include <string>


class Triangle : public Triad {

public:
    Triangle() { setA(1); setB(1); setC(1); }
    Triangle(int sideA, int sideB, int sideC) { setA(sideA); setB(sideB); setC(sideC); }
    Triangle(const Triad& triad);

    double calculateAngleA() const;
    double calculateAngleB() const;
    double calculateAngleC() const;
    double calculateArea() const;

    std::string toString(double a) const;

    Triangle& operator = (const Triangle& triangle);
    friend std::ostream& operator << (std::ostream& out, const Triangle& triangle);
    friend std::istream& operator >> (std::istream& in, Triangle& triangle);

    Triangle& operator++ ();
    Triangle& operator-- ();
    Triangle operator++ (int);
    Triangle operator-- (int);


    operator std::string() const;

    void Read();
    void Display() const;
    void Init(int a, int b, int c);


};
