#ifndef _GATESIM_H_
#define _GATESIM_H_
#include "gates.h"

typedef struct gate {
    port_t out; //output port (stores result)
    port_t in[]; //array of input ports
} *gate_t;

typedef struct wire{
    port_t head; //head of wire
    port_t tail; //tail of wire
} *wire_t;

typedef struct update{
    bool val;
    port_t port;
} *update_val;

typedef struct portVal{
    bool val;
} *port_val;

#endif