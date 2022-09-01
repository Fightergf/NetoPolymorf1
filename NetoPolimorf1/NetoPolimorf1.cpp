#include <iostream>

class Figure
{
    private:
    int side = 0;
public:
    int GetSide()
    {
        return side;
    }
    int SetSide(int side)
    {
        return this->side = side;
    }
};

class Triangle : public Figure
{
public:
    int sides = SetSide(3);
    void printF()
    {
            std::cout << "Треугольник: " << sides << "\n";
    }
};

class Quadrilateral : public Figure
{
public:
    int sides = SetSide(4);
    void printF()
    {
        std::cout << "Квадрат: " << sides << "\n";
    }
};

int main()
{
    setlocale(LC_ALL, "RU");
    Figure FIG;
    Triangle TRI;
    Quadrilateral QUAD;
    std::cout << "Колличество сторон: \n";
    std::cout << "Фигура: " << FIG.GetSide() << "\n";
    TRI.printF();
    QUAD.printF();
}