#include <iostream>
#include <stdio.h>

inline void print_char(char *c, std::string prefix) {
	throw "random exception";
	std::cout << prefix << *c;
}

void test_segv() {
	char test[] = "hello, world!";

	for (int i = 0; i < 40000; i++) {
		print_char(&test[i], ":");
	}
}

int main() {
	test_segv();
}

