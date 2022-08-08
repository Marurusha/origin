#pragma once

class Counter {
private:
	int number;
public:
	void mult();
	void sub();
	int print_number();
	Counter();
	Counter(int user_num);
};