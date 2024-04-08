#include <iostream>
#include "Not.h"

int main(){

	ap_uint<1> out;
	ap_uint<1> in;

	in = 0;
	not_gate(out,in);
	if (out == 1) std::cout << "true!" << std::endl;
	else std::cout << "false!" << std::endl;

	in = 1;
	not_gate(out,in);
	if (out == 0) std::cout << "true!" << std::endl;
	else std::cout << "false!" << std::endl;

	return 0;
}
