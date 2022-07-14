#include <iostream>

class Figures {

private:
    int Number_of_sides;
    std::string Figure;

protected:
    Figures(int sides, std::string name) {
        Number_of_sides = sides;
        Figure = name;
    }

public:
    Figures() : Figures(0, "Фигура") {
    }

    int show_sides() {
        return Number_of_sides;
    }

    std::string show_name() {
        return Figure;
    }
};

class Triangle : public Figures {
public:
    Triangle() : Figures(3, "Треугольник") {
    }
};

class Quadrangle : public Figures {
public:
    Quadrangle() : Figures(4, "Четырёхугольник") {
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    Figures figures;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон" << std::endl;
    std::cout << figures.show_name()<< ": " << figures.show_sides() << std::endl;
    std::cout << triangle.show_name() << ": " << triangle.show_sides() << std::endl;
    std::cout << quadrangle.show_name() << ": " << quadrangle.show_sides() << std::endl;

    system("pause");
    return 0;
}
