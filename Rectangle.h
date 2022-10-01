#ifndef RECTANGLE_H_
#define RECTANGLE_H_       // header file for class Rectangle

class Rectangle
{
    private:
        double length {1.0};    // member variables with initialized default values {1.0}
        double width {1.0};
    
    public:
        Rectangle() = default;      // default constructor
        Rectangle(double l, double w) : length {l}, width {w} {}    // constructor w/ user-initialized values

        bool setLength(double);     // setter functions
        bool setWidth(double);

        double getLength();         // getter functions
        double getWidth();
        
        double calcArea();          // calcArea() prototype
};

#endif