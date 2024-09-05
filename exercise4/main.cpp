#include <iostream>

/* Below is a class that cannot use the compiler-generated copy constructor or
 * destructor. You should write these yourself.
 *
 * Why can't we use the compiler-generated functions? Because the value of the pointer
 * is what would be copied, not what it is pointed to.
 *
 * The destructor must be written so that the memory allocated in the constructor is freed.
 *
 * What happens if you write only the destructor, and not the copy constructor?
 *
 * Hint: Like most things, there are a few ways to do this. As a hint, you can call other
 *       constructors in the initializer list of constructors. But you can choose another way
 *       if you would like. It's your class!
 */


class Point3d
{
  private:
    double * coords_;

  public:
    Point3d(double x, double y, double z)
    {
      coords_ = new double[3];
      coords_[0] = x;
      coords_[1] = y;
      coords_[2] = z;
    }

    double * coords() { return coords_; }

    /* Write copy constructor and destructor here */
};

int main() {

  /*************************************/
  /* TESTING CODE BELOW. DO NOT CHANGE */
  /*************************************/
  Point3d p(1.1, 2.2, 3.3);
  std::cout << "Coordinates: "
            << p.coords()[0] << " "
            << p.coords()[1] << " "
            << p.coords()[2] << std::endl;
  
  Point3d p2(p); // Call the copy constructor
  std::cout << "Coordinates: "
            << p2.coords()[0] << " "
            << p2.coords()[1] << " "
            << p2.coords()[2] << std::endl;
  
  std::cout << (p.coords() ==  p2.coords()) << std::endl;

}