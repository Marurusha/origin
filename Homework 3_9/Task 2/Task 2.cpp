#include <iostream>
#include <cmath>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	Fraction operator + (Fraction other) {
		Fraction result(numerator_ * other.denominator_ + other.numerator_ * denominator_, denominator_ * other.denominator_);
		result.Evklid();
		return result;
	}

	Fraction operator - (Fraction other) {
		Fraction result(numerator_ * other.denominator_ - other.numerator_ * denominator_, denominator_ * other.denominator_);
		result.Evklid();
		return result;
	}

	Fraction operator * (Fraction other) {
		Fraction result(numerator_ * other.numerator_, denominator_ * other.denominator_);
		result.Evklid();
		return result;
	}

	Fraction operator / (Fraction other) {
		Fraction result(numerator_ * other.denominator_, denominator_ * other.numerator_);
		result.Evklid();
		return result;
	}

	Fraction& operator ++ () {
		numerator_ += denominator_;
		return *this;
	}

	Fraction operator ++ (int) {
		Fraction temp = *this;
		++(*this);
		return temp;
	}

	Fraction& operator -- () {
		numerator_ -= denominator_;
		return *this;
	}

	Fraction operator -- (int) {
		Fraction temp = *this;
		--(*this);
		return temp;
	}

	void Evklid() {
		int num1 = abs(numerator_);
		int num2 = abs(denominator_);

		while ((num1 > 0) && (num2 > 0)) {
			if (num1 > num2) {
				num1 = num1 - num2;
			}
			else {
				num2 = num2 - num1;
			}
		}
		if (num1 > num2) {
			numerator_ = numerator_ / num1;
			denominator_ = denominator_ / num1;
		}
		else if (num2 > num1) {
			numerator_ = numerator_ / num2;
			denominator_ = denominator_ / num2;
		}
	}

	int get_num() {
		return numerator_;
	}
	int get_denom() {
		return denominator_;
	}
};

void cast_for_fract(int& num, int& denom) {
	if ((num < 0) && (denom < 0)) {
		num = abs(num);
		denom = abs(denom);
	}

	else if ((num > 0) && denom < 0) {
		num = 0 - num;
		denom = abs(denom);
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int num1, denom1, num2, denom2;
	std::cout << "Введите числитель первой дроби: ";
	std::cin >> num1;
	do {
		std::cout << "Введите знаменатель первой дроби: ";
		std::cin >> denom1;
		if (denom1 != 0) {
			break;
		}
		else {
			std::cout << "Знаменатель не может равняться 0! ";
		}
	} while (true);

	std::cout << "Введите числитель второй дроби: ";
	std::cin >> num2;
	do {
		std::cout << "Введите знаменатель второй дроби: ";
		std::cin >> denom2;
		if (denom2 != 0) {
			break;
		}
		else {
			std::cout << "Знаменатель не может равняться 0! ";
		}
	} while (true);

	cast_for_fract(num1, denom1);
	cast_for_fract(num2, denom2);

	Fraction f1(num1, denom1);
	Fraction f2(num2, denom2);
	Fraction tempf1 = f1;

	Fraction sum = f1 + f2;
	Fraction sub = f1 - f2;
	Fraction mult = f1 * f2;
	Fraction divis = f1 / f2;

	std::cout << f1.get_num() << "/" << f1.get_denom() << " + " << f2.get_num() << "/" << f2.get_denom() << " = " << sum.get_num() << "/" << sub.get_denom() << std::endl;
	std::cout << f1.get_num() << "/" << f1.get_denom() << " - " << f2.get_num() << "/" << f2.get_denom() << " = " << sub.get_num() << "/" << sub.get_denom() << std::endl;
	std::cout << f1.get_num() << "/" << f1.get_denom() << " * " << f2.get_num() << "/" << f2.get_denom() << " = " << mult.get_num() << "/" << mult.get_denom() << std::endl;
	std::cout << f1.get_num() << "/" << f1.get_denom() << " / " << f2.get_num() << "/" << f2.get_denom() << " = " << divis.get_num() << "/" << divis.get_denom() << std::endl << std::endl;

	Fraction preink = ++f1;
	Fraction mult_preink = preink * f2;
	std::cout << "++" << tempf1.get_num() << "/" << tempf1.get_denom() << " * " << f2.get_num() << "/" << f2.get_denom() << " = " << mult_preink.get_num() << "/" << mult_preink.get_denom() << std::endl;
	std::cout << "Значение первой дроби: " << f1.get_num() << "/" << f1.get_denom() << std::endl;
	std::cout << "Значение первой дроби c префиксом ++: " << preink.get_num() << "/" << preink.get_denom() << std::endl << std::endl;
	f1 = tempf1;

	Fraction postink = f1++;
	Fraction mult_postink = postink * f2;
	std::cout << tempf1.get_num() << "/" << tempf1.get_denom() << "++" << " * " << f2.get_num() << "/" << f2.get_denom() << " = " << mult_postink.get_num() << "/" << mult_postink.get_denom() << std::endl;
	std::cout << "Значение первой дроби: " << f1.get_num() << "/" << f1.get_denom() << std::endl;
	std::cout << "Значение первой дроби c постфиксом ++: " << postink.get_num() << "/" << postink.get_denom() << std::endl << std::endl;
	f1 = tempf1;

	Fraction predek = --f1;
	Fraction mult_predek = predek * f2;
	std::cout << "--" << tempf1.get_num() << "/" << tempf1.get_denom() << " * " << f2.get_num() << "/" << f2.get_denom() << " = " << mult_predek.get_num() << "/" << mult_predek.get_denom() << std::endl;
	std::cout << "Значение первой дроби: " << f1.get_num() << "/" << f1.get_denom() << std::endl;
	std::cout << "Значение первой дроби c префиксом --: " << predek.get_num() << "/" << predek.get_denom() << std::endl << std::endl;
	f1 = tempf1;

	Fraction postdek = f1--;
	Fraction mult_postdek = postdek * f2;
	std::cout << tempf1.get_num() << "/" << tempf1.get_denom() << "--" << " * " << f2.get_num() << "/" << f2.get_denom() << " = " << mult_postdek.get_num() << "/" << mult_postdek.get_denom() << std::endl;
	std::cout << "Значение первой дроби: " << f1.get_num() << "/" << f1.get_denom() << std::endl;
	std::cout << "Значение первой дроби c постфиксом --: " << postdek.get_num() << "/" << postdek.get_denom() << std::endl << std::endl;
	f1 = tempf1;

	system("pause");
	return 0;
}
