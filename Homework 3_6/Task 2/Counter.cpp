#include "C:\Users\Марина Герасимова\Desktop\Программирование\Плюсы\netologia homeworks\Homework 3_6\Task 2\Header.h"

	void Counter::mult() {
		number++;
	}

	void Counter::sub() {
		number--;
	}

	int Counter::print_number() {
		return(number);
	}

	Counter::Counter() {
		number = 1;
	}

	Counter::Counter(int user_num) {
		number = user_num;
	}