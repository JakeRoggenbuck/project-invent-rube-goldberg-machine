#include <iostream>

#define do_log false

int main() {
#if do_log
	std::cout << "hey" << std::endl;
#endif
}
