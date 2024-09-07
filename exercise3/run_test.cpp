// If you are student, remember that you should never
// include a source file. This is one exception though :)
// Call it "instructor's privilege"
#include <main.cpp>

#include <cassert>

bool isclose(double a, double b) { return (std::abs(a-b)/std::min(std::abs(a), std::abs(b)))  < 1.0e-11; }

int main(void)
{
  Circle c(8.31);
  assert(c.radius() == 8.31);
  assert(isclose(c.area(), M_PI*8.31*8.31));
  assert(isclose(c.circumference(), 2*M_PI*8.31));

  c.radius() = 4.22;
  assert(c.radius() == 4.22);
  assert(isclose(c.area(), M_PI*4.22*4.22));
  assert(isclose(c.circumference(), 2*M_PI*4.22));
  

  const Circle & cc = c;
  assert(cc.radius() == 4.22);
  assert(isclose(cc.area(), M_PI*4.22*4.22));
  assert(isclose(cc.circumference(), 2*M_PI*4.22));

  return 0;
}
