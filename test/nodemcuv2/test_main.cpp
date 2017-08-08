#if defined(ARDUINO) && defined(UNIT_TEST)

#include <Arduino.h>
#include "unity.h"

#include "mod1.h"

void test_mod1() {
	mod1_s	o;
	mod1_init(&o);

	mod1_set_a(&o, 17);
	TEST_ASSERT_EQUAL(mod1_get_a(&o), 17);

	mod1_process(&o);
	TEST_ASSERT_EQUAL(mod1_get_a(&o), 18);
}

void setup() {
  delay(2000);

  UNITY_BEGIN();

  RUN_TEST(test_mod1);

  UNITY_END();
}

void loop() {
  // nothing to be done here.
}

#endif
