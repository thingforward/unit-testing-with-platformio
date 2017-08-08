
#include "mod1.h"
#include <unity.h>

#ifdef UNIT_TEST

void test_mod1() {
	mod1_s	o;
	mod1_init(&o);

	mod1_set_a(&o, 17);
	TEST_ASSERT_EQUAL(mod1_get_a(&o), 17);

	mod1_process(&o);
	TEST_ASSERT_EQUAL(mod1_get_a(&o), 18);
}

int main( int argc, char **argv) {
	UNITY_BEGIN();

	RUN_TEST(test_mod1);

	UNITY_END();
}

#endif
