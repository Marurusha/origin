#include <iostream>
#include <ctime>

class Figures {
private:
	int Number_of_sides;
	std::string Figure;


protected:
	Figures(int sides, std::string name) {
		Number_of_sides = sides;
		Figure = name;
	}

	void fill_name(std::string name) {
		Figure = name;
	}

	virtual bool check() {
			return Number_of_sides == 0;
	}

	int show_sides() {
		return Number_of_sides;
	}

public:
	Figures() : Figures(0, "Фигура") {
	}

	virtual void print_info() {
		std::cout << Figure << std::endl;
		if (check()) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << Number_of_sides << std::endl;
	}
};

class Triangle : public Figures {
private:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;

protected:
	Triangle(int side1, int side2, int side3, int angle1, int angle2, int angle3) : Figures(3, "Треугольник") {
		a = side1;
		b = side2;
		c = side3;
		A = angle1;
		B = angle2;
		C = angle3;
	}

	int show_a() {
		return a;
	}
	int show_b() {
		return b;
	}
	int show_c() {
		return c;
	}
	int show_A() {
		return A;
	}
	int show_B() {
		return B;
	}
	int show_C() {
		return C;
	}

	virtual bool check() {
		return show_sides() == 3 && A + B + C == 180;
	}

public:
	Triangle() : Triangle(rand() % 100, rand() % 100, rand() % 100, rand() % 180, rand() % 180, rand() % 180) {
	}
	void print_info() override {
		Figures::print_info();
		std::cout << "Стороны: " << "a = " << show_a() << ", b = " << show_b() << ", c = " << show_c() << std::endl;
		std::cout << "Углы: " << "А = " << show_A() << ", B = " << show_B() << ", C = " << show_C() << std::endl;
	}


};

class Right_triangle : public Triangle {
private:
	Right_triangle(int side1, int side2, int side3, int angle1, int angle2) : Triangle(side1, side2, side3, angle1, angle2, 90) {
		fill_name("Прямоугольный треугольник");
	}

	bool check() override {
		return Triangle::check() && show_C() == 90;
	}
public:
	Right_triangle() : Right_triangle(rand() % 100, rand() % 100, rand() % 100, rand() % 180, rand() % 180) {
	}
};

class Isosceles : public Triangle {
protected:
	Isosceles(int side1, int side2, int angle1, int angle2) : Triangle(side1, side2, side1, angle1, angle2, angle1) {
		fill_name("Равнобедренный треугольник");
	}

	bool check() override {
		return Triangle::check() && show_a() == show_c() && show_A() == show_C();
	}

public:
	Isosceles() : Isosceles(rand() % 100, rand() % 100, rand() % 180, rand() % 180) {
	}
};

class Equilateral : public Isosceles {
private:
	Equilateral(int side1) : Isosceles(side1, side1, 60, 60) {
		fill_name("Равносторонний треугольник");
	}

	bool check() override {
		return Isosceles::check() && show_a() == show_b() && show_A() == show_B() && show_A() == 60;
	}

public:
	Equilateral() : Equilateral(rand() % 100) {
	}
};

class Quadrangle : public Figures {
private:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;

protected:
	Quadrangle(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4) : Figures(4, "Четырёхугольник") {
		a = side1;
		b = side2;
		c = side3;
		d = side4;
		A = angle1;
		B = angle2;
		C = angle3;
		D = angle4;
	}

	int show_a() {
		return a;
	}
	int show_b() {
		return b;
	}
	int show_c() {
		return c;
	}
	int show_d() {
		return d;
	}
	int show_A() {
		return A;
	}
	int show_B() {
		return B;
	}
	int show_C() {
		return C;
	}
	int show_D() {
		return D;
	}

	virtual bool check() {
		return show_sides() == 4 && A + B + C + D == 360;
	}

public:
	Quadrangle() : Quadrangle(rand() % 100, rand() % 100, rand() % 100, rand() % 100, rand() % 180, rand() % 180, rand() % 180, rand() % 180) {
	}

	void print_info() override {
		Figures::print_info();
		std::cout << "Стороны: " << "a = " << show_a() << ", b = " << show_b() << ", c = " << show_c() << ", d = " << show_d() << std::endl;
		std::cout << "Углы: " << "А = " << show_A() << ", B = " << show_B() << ", C = " << show_C() << ", D = " << show_D() << std::endl;
	}

};

class Parallelogram : public Quadrangle {
protected:
	Parallelogram(int side1, int side2, int angle1, int angle2) : Quadrangle(side1, side2, side1, side2, angle1, angle2, angle1, angle2) {
		fill_name("Параллелограмм");
	}
	bool check() override {
		return Quadrangle::check() && show_a() == show_c() && show_b() == show_d() && show_A() == show_C() && show_B() == show_D();
	}

public:
	Parallelogram() : Parallelogram(rand() % 100, rand() % 100, rand() % 180, rand() % 180) {
	}
};

class Rhombus : public Parallelogram {
private:
	Rhombus(int side1, int angle1, int angle2) : Parallelogram(side1, side1, angle1, angle2) {
		fill_name("Ромб");
	}
	bool check() override {
		return Parallelogram::check() && show_a() == show_b();
	}

public:
	Rhombus() : Rhombus(rand() % 100, rand() % 180, rand() % 180) {
	}
};

class Rectangle : public Parallelogram {
protected:
	Rectangle(int side1, int side2) : Parallelogram(side1, side2, 90, 90) {
		fill_name("Прямоугольник");
	}

	bool check() override {
		return Parallelogram::check() && show_A() == show_B() && show_A() == 90;
	}

public:
	Rectangle() : Rectangle(rand() % 100, rand() % 100) {
	}
};

class Square : public Rectangle {
private:
	Square(int side1) : Rectangle(side1, side1) {
		fill_name("Квадрат");
	}

	bool check() override {
		return Rectangle::check() && show_a() == show_b();
	}

public:
	Square() : Square(rand() % 100) {
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	Figures figures;
	figures.print_info();
	std::cout << std::endl;

	Triangle triangle;
	Figures* triangle_demo = &triangle;
	triangle_demo->print_info();
	std::cout << std::endl;

	Right_triangle right_triangle;
	Figures* right_demo = &right_triangle;
	right_demo->print_info();
	std::cout << std::endl;

	Isosceles isosceles;
	Figures* isos_demo = &isosceles;
	isos_demo->print_info();
	std::cout << std::endl;

	Equilateral equilateral;
	Figures* equil_demo = &equilateral;
	equil_demo->print_info();
	std::cout << std::endl;

	Quadrangle quadrangle;
	Figures* quadr_demo = &quadrangle;
	quadr_demo->print_info();
	std::cout << std::endl;

	Rectangle rectangle;
	Figures* rect_demo = &rectangle;
	rect_demo->print_info();
	std::cout << std::endl;

	Square square;
	Figures* square_demo = &square;
	square_demo->print_info();
	std::cout << std::endl;

	Parallelogram parallelogram;
	Figures* parall_demo = &parallelogram;
	parall_demo->print_info();
	std::cout << std::endl;

	Rhombus rhombus;
	Figures* rhombus_demo = &rhombus;
	rhombus_demo->print_info();

	system("pause");
	return 0;
}
