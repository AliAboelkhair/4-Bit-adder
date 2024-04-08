#include "Adder.h"
#include <ap_int.h>
void add(ap_uint<5> &out,ap_uint<4> In1,ap_uint<4> In2){
	out = In1 + In2;
}
void mult(ap_uint<8> &out,ap_uint<4> In1,ap_uint<4> In2){
	out = In1 * In2;
}
//not for adder
void div(ap_uint<8> &out,ap_uint<4> In1,ap_uint<4> In2){
	out = In1 / In2;
}
