// If you are student, remember that you should never
// include a source file. This is one exception though :)
// Call it "instructor's privilege"
#include <main.cpp>

#include <cassert>

bool isclose(double a, double b) { return (std::abs(a-b)/std::min(std::abs(a), std::abs(b)))  < 1.0e-11; }

int main(void)
{
  Point3d p(1.1, 2.2, 3.3);
  assert(p.x() == 1.1);
  assert(p.y() == 2.2);
  assert(p.z() == 3.3);
  
  Point3d p2(p); // Call the copy constructor
  assert(p2.x() == 1.1);
  assert(p2.y() == 2.2);
  assert(p2.z() == 3.3);
  

  // Didn't just copy pointer value
  assert(p.coords() != p2.coords());

  return 0;
}
