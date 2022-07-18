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

public:
	Figures() : Figures(0, "Фигура") {
	}

	int show_sides() {
		return Number_of_sides;
	}

	virtual std::string show_name() {
		return Figure;
	}

	virtual int show_a() {
		return 0;
	}
	virtual int show_b() {
		return 0;
	}
	virtual int show_c() {
		return 0;
	}
	virtual int show_d() {
		return 0;
	}
	virtual int show_A() {
		return 0;
	}
	virtual int show_B() {
		return 0;
	}
	virtual int show_C() {
		return 0;
	}
	virtual int show_D() {
		return 0;
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
	std::string name_triangle;
public:
	Triangle() : Triangle(rand() % 100, rand() % 100, rand() % 100, rand() % 180, rand() % 180, rand() % 180) {
	}

	int show_a() override {
		return a;
	}
	int show_b() override {
		return b;
	}
	int show_c() override {
		return c;
	}
	int show_A() override {
		return A;
	}
	int show_B() override {
		return B;
	}
	int show_C() override {
		return C;
	}
};

class Right_triangle : public Triangle {
private:
	Right_triangle(int side1, int side2, int side3, int angle1, int angle2) : Triangle(side1, side2, side3, angle1, angle2, 90) {
	}
	std::string show_name() override {
		name_triangle = "Прямоугольный треугольник";
		return name_triangle;
	}
public:
	Right_triangle() : Right_triangle(rand() % 100, rand() % 100, rand() % 100, rand() % 180, rand() % 180) {
	}
};

class Isosceles : public Triangle {
protected:
	Isosceles(int side1, int side2, int angle1, int angle2) : Triangle(side1, side2, side1, angle1, angle2, angle1) {
	}
	std::string show_name() override {
		name_triangle = "Равнобедренный треугольник";
		return name_triangle;
	}
public:
	Isosceles() : Isosceles(rand() % 100, rand() % 100, rand() % 180, rand() % 180) {
	}
};

class Equilateral : public Isosceles {
private:
	Equilateral(int side1) : Isosceles(side1, side1, 60, 60) {
	}
	std::string show_name() override {
		name_triangle = "Равносторонний треугольник";
		return name_triangle;
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
	std::string name_Quadrangle;

public:
	Quadrangle() : Quadrangle(rand() % 100, rand() % 100, rand() % 100, rand() % 100, rand() % 180, rand() % 180, rand() % 180, rand() % 180) {
	}

	int show_a() override {
		return a;
	}
	int show_b() override {
		return b;
	}
	int show_c() override {
		return c;
	}
	int show_d() override {
		return d;
	}
	int show_A() override {
		return A;
	}
	int show_B() override {
		return B;
	}
	int show_C() override {
		return C;
	}
	int show_D() override {
		return D;
	}

};

class Parallelogram : public Quadrangle {
protected:
	Parallelogram(int side1, int side2, int angle1, int angle2) : Quadrangle(side1, side2, side1, side2, angle1, angle2, angle1, angle2) {
	}
	std::string show_name() override {
		name_Quadrangle = "Параллелограмм";
		return name_Quadrangle;
	}
public:
	Parallelogram() : Parallelogram(rand() % 100, rand() % 100, rand() % 180, rand() % 180) {
	}
};

class Rhombus : public Parallelogram {
private:
	Rhombus(int side1, int angle1, int angle2) : Parallelogram(side1, side1, angle1, angle2) {
	}
	std::string show_name() override {
		name_Quadrangle = "Ромб";
		return name_Quadrangle;
	}
public:
	Rhombus() : Rhombus(rand() % 100, rand() % 180, rand() % 180) {
	}
};

class Rectangle : public Parallelogram {
protected:
	Rectangle(int side1, int side2) : Parallelogram(side1, side2, 90, 90) {
	}
	std::string show_name() override {
		name_Quadrangle = "Прямоугольник";
		return name_Quadrangle;
	}
public:
	Rectangle() : Rectangle(rand() % 100, rand() % 100) {
	}
};

class Square : public Rectangle {
private:
	Square(int side1) : Rectangle(side1, side1) {
	}
	std::string show_name() override {
		name_Quadrangle = "Квадрат";
		return name_Quadrangle;
	}
public:
	Square() : Square(rand() % 100) {
	}
};

void print_info(Figures* demo_figure) {

	if ((*demo_figure).show_sides() == 3) {
		std::cout << (*demo_figure).show_name() << ":" << std::endl;
		std::cout << "Стороны: " << "a = " << (*demo_figure).show_a() << ", b = " << (*demo_figure).show_b() << ", c = " << (*demo_figure).show_c() << std::endl;
		std::cout << "Углы: " << "А = " << (*demo_figure).show_A() << ", B = " << (*demo_figure).show_B() << ", C = " << (*demo_figure).show_C() << std::endl << std::endl;
	}

	else if ((*demo_figure).show_sides() == 4) {
		std::cout << (*demo_figure).show_name() << ":" << std::endl;
		std::cout << "Стороны: " << "a = " << (*demo_figure).show_a() << ", b = " << (*demo_figure).show_b() << ", c = " << (*demo_figure).show_c() << ", d = " << (*demo_figure).show_d() << std::endl;
		std::cout << "Углы: " << "А = " << (*demo_figure).show_A() << ", B = " << (*demo_figure).show_B() << ", C = " << (*demo_figure).show_C() << ", D = " << (*demo_figure).show_D() << std::endl << std::endl;
	}

	else {
		std::cout << "Фигура не найдена" << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	Triangle triangle;
	print_info(&triangle);

	Right_triangle right_triangle;
	print_info(&right_triangle);

	Isosceles isosceles;
	print_info(&isosceles);

	Equilateral equilateral;
	print_info(&equilateral);

	Quadrangle quadrangle;
	print_info(&quadrangle);

	Rectangle rectangle;
	print_info(&rectangle);

	Square square;
	print_info(&square);

	Parallelogram parallelogram;
	print_info(&parallelogram);

	Rhombus rhombus;
	print_info(&rhombus);

	system("pause");
	return 0;
}
