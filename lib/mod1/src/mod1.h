#ifndef __MOD1_H
#define __MOD1_H

typedef struct mod1_s {
	int a;
} mod1_s;

void mod1_init(mod1_s *obj);
void mod1_deinit(mod1_s *obj);

void mod1_set_a(mod1_s *obj, int a);
int  mod1_get_a(mod1_s *obj);

void mod1_process(mod1_s *obj);

#endif
