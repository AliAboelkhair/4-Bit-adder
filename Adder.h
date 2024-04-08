#ifndef Adder_H
#define Adder_H

#include <ap_int.h>

void add(ap_uint<5> &out,ap_uint<4> In1,ap_uint<4> In2);
void mult(ap_uint<8> &out,ap_uint<4> In1,ap_uint<4> In2);
void div(ap_uint<8> &out,ap_uint<4> in1,ap_uint<4> in2); //not for adder

#endif
