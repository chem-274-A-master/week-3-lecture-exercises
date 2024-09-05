#include <iostream>

/* Write a class representing a rectangle, with some functions for calculating its properties
 *
 * The constructor should take its length and width (as doubles)
 *
 * There should be four other funtions:
 * 1.) get_length (accessor/getter for the length)
 * 2.) get_width  (accessor/getter for the width)
 * 3.) area       (returns the area of the rectangle)
 * 4.) perimeter  (returns the perimeter of the rectangle)
 *
 * There are some design decisions left up to you.
 * What are the names of the variables that are stored in the class?
 * Should you store the area/perimeter as member data, or calculate them on the fly?
 * Given the public iterface, how much do these other decisions matter?
 */

class Rectangle
{

};


int main() {

  /******************************************************************/
  /* Construct a Rectangle with a length of 4.1 and a width of 17.2 */
  /******************************************************************/
  Rectangle r(/*stuff here*/)
  
  std::cout << "Area is " << r.area() << " and perimeter is " << r.perimeter() << std::endl;
  std::cout << "Length is " << r.get_length() << " and the width is " << r.get_width() << std::endl;
}