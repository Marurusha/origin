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

	std::string show_name() {
		return Figure;
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
public:
	Triangle() : Triangle(rand() % 100, rand() % 100, rand() % 100, rand() % 180, rand() % 180, rand() % 180) {
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
};

class Right_triangle : public Triangle {
private:
	Right_triangle(int side1, int side2, int side3, int angle1, int angle2) : Triangle(side1, side2, side3, angle1, angle2, 90) {
	}
public:
	Right_triangle() : Right_triangle(rand() % 100, rand() % 100, rand() % 100, rand() % 180, rand() % 180) {
	}
};

class Isosceles : public Triangle {
protected:
	Isosceles(int side1, int side2, int angle1, int angle2) : Triangle(side1, side2, side1, angle1, angle2, angle1) {
	}
public:
	Isosceles() : Isosceles(rand() % 100, rand() % 100, rand() % 180, rand() % 180) {
	}
};

class Equilateral : public Isosceles {
private:
	Equilateral(int side1) : Isosceles(side1, side1, 60, 60) {
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

public:
	Quadrangle() : Quadrangle(rand() % 100, rand() % 100, rand() % 100, rand() % 100, rand() % 180, rand() % 180, rand() % 180, rand() % 180) {
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

};

class Parallelogram : public Quadrangle {
protected:
	Parallelogram(int side1, int side2, int angle1, int angle2) : Quadrangle(side1, side2, side1, side2, angle1, angle2, angle1, angle2) {
	}
public:
	Parallelogram() : Parallelogram(rand() % 100, rand() % 100, rand() % 180, rand() % 180) {
	}
};

class Rhombus : public Parallelogram {
private:
	Rhombus(int side1, int angle1, int angle2) : Parallelogram(side1, side1, angle1, angle2) {
	}
public:
	Rhombus() : Rhombus(rand() % 100, rand() % 180, rand() % 180) {
	}
};

class Rectangle : public Parallelogram {
protected:
	Rectangle(int side1, int side2) : Parallelogram(side1, side2, 90, 90) {
	}
public:
	Rectangle() : Rectangle(rand() % 100, rand() % 100) {
	}
};

class Square : public Rectangle {
private:
	Square(int side1) : Rectangle(side1, side1) {
	}
public:
	Square() : Square(rand() % 100) {
	}
};


void print_info() {

	Triangle demo_triangle;
	std::cout << demo_triangle.show_name() << ":" << std::endl;
	std::cout << "Стороны: " << "a = " << demo_triangle.show_a() << ", b = " << demo_triangle.show_b() << ", c = " << demo_triangle.show_c() << std::endl;
	std::cout << "Углы: " << "А = " << demo_triangle.show_A() << ", B = " << demo_triangle.show_B() << ", C = " << demo_triangle.show_C() << std::endl << std::endl;

	std::cout << "Прямоугольный треугольник:" << std::endl;
	Right_triangle demo_right;
	std::cout << "Стороны: " << "a = " << demo_right.show_a() << ", b = " << demo_right.show_b() << ", c = " << demo_right.show_c() << std::endl;
	std::cout << "Углы: " << "А = " << demo_right.show_A() << ", B = " << demo_right.show_B() << ", C = " << demo_right.show_C() << std::endl << std::endl;

	std::cout << "Равнобедренный треугольник:" << std::endl;
	Isosceles demo_isos;
	std::cout << "Стороны: " << "a = " << demo_isos.show_a() << ", b = " << demo_isos.show_b() << ", c = " << demo_isos.show_c() << std::endl;
	std::cout << "Углы: " << "А = " << demo_isos.show_A() << ", B = " << demo_isos.show_B() << ", C = " << demo_isos.show_C() << std::endl << std::endl;

	std::cout << "Равносторонний треугольник:" << std::endl;
	Equilateral demo_equil;
	std::cout << "Стороны: " << "a = " << demo_equil.show_a() << ", b = " << demo_equil.show_b() << ", c = " << demo_equil.show_c() << std::endl;
	std::cout << "Углы: " << "А = " << demo_equil.show_A() << ", B = " << demo_equil.show_B() << ", C = " << demo_equil.show_C() << std::endl << std::endl;

	Quadrangle demo_equadr;
	std::cout << demo_equadr.show_name() << ":" << std::endl;
	std::cout << "Стороны: " << "a = " << demo_equadr.show_a() << ", b = " << demo_equadr.show_b() << ", c = " << demo_equadr.show_c() << ", d = " << demo_equadr.show_d() << std::endl;
	std::cout << "Углы: " << "А = " << demo_equadr.show_A() << ", B = " << demo_equadr.show_B() << ", C = " << demo_equadr.show_C() << ", D = " << demo_equadr.show_D() << std::endl << std::endl;

	std::cout << "Прямоугольник:" << std::endl;
	Rectangle demo_rect;
	std::cout << "Стороны: " << "a = " << demo_rect.show_a() << ", b = " << demo_rect.show_b() << ", c = " << demo_rect.show_c() << ", d = " << demo_rect.show_d() << std::endl;
	std::cout << "Углы: " << "А = " << demo_rect.show_A() << ", B = " << demo_rect.show_B() << ", C = " << demo_rect.show_C() << ", D = " << demo_rect.show_D() << std::endl << std::endl;

	std::cout << "Квадрат:" << std::endl;
	Square demo_square;
	std::cout << "Стороны: " << "a = " << demo_square.show_a() << ", b = " << demo_square.show_b() << ", c = " << demo_square.show_c() << ", d = " << demo_square.show_d() << std::endl;
	std::cout << "Углы: " << "А = " << demo_square.show_A() << ", B = " << demo_square.show_B() << ", C = " << demo_square.show_C() << ", D = " << demo_square.show_D() << std::endl << std::endl;

	std::cout << "Параллелограмм:" << std::endl;
	Parallelogram demo_paral;
	std::cout << "Стороны: " << "a = " << demo_paral.show_a() << ", b = " << demo_paral.show_b() << ", c = " << demo_paral.show_c() << ", d = " << demo_paral.show_d() << std::endl;
	std::cout << "Углы: " << "А = " << demo_paral.show_A() << ", B = " << demo_paral.show_B() << ", C = " << demo_paral.show_C() << ", D = " << demo_paral.show_D() << std::endl << std::endl;

	std::cout << "Ромб:" << std::endl;
	Rhombus demo_rhomb;
	std::cout << "Стороны: " << "a = " << demo_rhomb.show_a() << ", b = " << demo_rhomb.show_b() << ", c = " << demo_rhomb.show_c() << ", d = " << demo_rhomb.show_d() << std::endl;
	std::cout << "Углы: " << "А = " << demo_rhomb.show_A() << ", B = " << demo_rhomb.show_B() << ", C = " << demo_rhomb.show_C() << ", D = " << demo_rhomb.show_D() << std::endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	print_info();

	system("pause");
	return 0;
}
