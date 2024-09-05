#include <iostream>
#include <cmath> // for pi

/* Similar to the previous exercise, write a class representing a circle. This time, the class
 * member functions should be const correct. Also, there will be another function for
 * setting the radius after an object has been constructed.
 *
 * The constructor should take only the radius
 *
 * There should be other funtions:
 * 1.) radius         (Allows for setting and getting the radius. Should not take an argument)
 * 2.) area           (returns the area of the circle)
 * 3.) circumference  (returns the circumference)
 *
 * Hint: For const correctness, you will have 4 functions
 * Hint #2: Use M_PI for the value of pi. This is defined in the <cmath> header
 */

class Circle
{
    /* Class stuff goes here */
};


int main() {

  /*************************************/
  /* TESTING CODE BELOW. DO NOT CHANGE */
  /*************************************/
  Circle c(8.31);

  std::cout << "Area is " << c.area() << " and circumference is " << c.circumference() << std::endl;
  std::cout << "Radius is " << c.radius() << std::endl;

  const Circle c2(c);

  std::cout << "Area is " << c2.area() << " and circumference is " << c2.circumference() << std::endl;
  std::cout << "Radius is " << c2.radius() << std::endl;
}