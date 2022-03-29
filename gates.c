#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
#include "gates.h"
#include "gatesim.h"

unsigned delay;

port_t port(const ptype_t pt, ...) {
    va_list valist;
    port_t new_port;
    new_port->pt = pt;

    va_start(valist, 2);

    for (int i = 0; i < 2; i++) {
        new_port->name = va_arg(valist, char*);
        // new_port.val = va_arg(valist, bool); assume val is set in set_port
    }

    return new_port;
}
void gate(const op_t op, const port_t out, ...) {

}

void wire(const port_t src, const port_t dst) {

}

void clock(const unsigned hi, const unsigned lo) {

}

void set_port(port_t p, bool val) {
    // p->val = val;
}

bool get_port(port_t p) {
    // return p->val;
} 

unsigned get_sim_time(void) {

}

void sim_init(void) {

}

void sim_run(const unsigned nsteps) {

}
