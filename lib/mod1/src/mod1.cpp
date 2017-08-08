#include "mod1.h"

void mod1_init(mod1_s *obj) {
	obj->a = 0;
}

void mod1_deinit(mod1_s *obj) {
	obj->a = 0;
}

void mod1_set_a(mod1_s *obj, int a) {
	obj->a = a;
}

int  mod1_get_a(mod1_s *obj) {
	return obj->a;
}

void mod1_process(mod1_s *obj) {
	obj->a++;
}


