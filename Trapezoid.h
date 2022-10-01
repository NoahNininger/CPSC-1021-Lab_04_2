#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_       // header file for class Trapezoid

class Trapezoid
{
    private:
        double base1 {1.0};    // member variables with initialized default values {1.0}
        double base2 {1.0};
        double height {1.0};
    
    public:
        Trapezoid() = default;      // default constructor
        Trapezoid(double b1, double b2, double h) : base1 {b1}, base2 {b2}, height {h} {}   // constructor w/ user-initialized values

        bool setBase1(double);      // setter functions
        bool setBase2(double);
        bool setHeight(double);

        double getBase1();          // getter functions
        double getBase2();
        double getHeight();

        double calcArea();          // calcArea() prototype
};

#endif