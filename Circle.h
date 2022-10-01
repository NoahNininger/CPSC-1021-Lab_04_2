#ifndef CIRCLE_H_
#define CIRCLE_H_       // header file for class Circle

class Circle
{
    private:
        double radius {1.0};    // member variable with initialized default value {1.0}
    
    public:
        Circle() = default;     // default constructor
        Circle(double r) : radius {r} {}    // constructor w/ user-initialized value

        bool setRadius(double);     // setter function

        double getRadius();         // getter function
        
        double calcArea();          // calcArea() prototype
};

#endif