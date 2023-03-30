#include "decr.h"
#include "common.h"

// Internal linkage
static int delta = -1; // This global variable's scope is restricted to this file

int decr() {
	return (start + delta);
}
