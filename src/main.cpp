#ifdef ESP8266
#include <Arduino.h>
#else
#include <stdlib.h>
#endif

void f(void) {
  //cppcheck test
  char a[10];
  a[10] = 0;

  //valgrind test
  malloc(1024);
 }

 #ifdef ESP8266
 void setup() {
   Serial.begin(9600);

   f();
 }

 void loop() {
   printf("%s\n", "hello world");
 }

 #else
 int main() {
   f();
   return 0;
 }
 #endif
