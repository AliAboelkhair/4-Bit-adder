#include <iostream>
#include "Adder.h"

int main(){

	ap_uint<4> In1;
	ap_uint<4> In2;
	ap_uint<5> out_add;
	ap_uint<8> out_mult;
	ap_uint<8> out_div;
//------------------------------------------
	In1 = 8;
	In2 = 4;
	add(out_add,In1,In2);
	mult(out_mult,In1,In2);
	div(out_div,In1,In2);
	std::cout << out_add<< " is the added value of the inputs" << std::endl;
	std::cout << out_mult<< " is the multiplied value of the inputs" << std::endl;
	std::cout << out_div<< " is the divided value of the inputs" << std::endl;
//-------------------------------------------
	if(out_add == 12) std::cout << "True!" << std::endl;
	else std::cout << "False!" << std::endl;
//-------------------------------------------
	if(out_mult == 32) std::cout << "True!" << std::endl;
	else std::cout << "False!" << std::endl;
//-------------------------------------------
	if(out_div == 2) std::cout << "True!" << std::endl;
	else std::cout << "False!" << std::endl;
	return 0;
}
