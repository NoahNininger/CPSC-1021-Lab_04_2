#ifndef SQUARE_H_
#define SQUARE_H_       // header file for class Square

class Square
{
    private:
        double side {1.0};    // member variable with initialized default value {1.0}
    
    public:
        Square() = default;     // default constructor
        Square(double s) : side {s} {}  // constructor w/ user-initialized value
        
        bool setSide(double);       // setter function

        double getSide();           // getter function
        
        double calcArea();          // calcArea() prototype
};

#endif