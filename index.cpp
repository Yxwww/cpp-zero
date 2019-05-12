// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Vec3.cpp"

auto boolToString = [](bool a) -> const char * { return a ? "true" : "false"; };

auto glambda = [](auto a, auto&& b) { return a < b; };

int main (int argc, char *argv[])
{
  Vec3<float> a; 
  fprintf(stdout,"Vec (%f, %f, %f)\n", a.x, a.y, a.z);

  bool b = glambda(3, 3.14); // ok
  fprintf(stdout,"b: %s \n", boolToString(b));
}

