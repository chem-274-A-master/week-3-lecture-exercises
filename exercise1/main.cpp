/* Making a C++ structure

Write a structure in C++ called Element. This structure should have the following members:

* name         The name of the element (string)
* z            The element number (number of protons) (integer)
* num_neutrons The number of neutrons (integer)
* mass         Elemental mass (double)
* radius       The covalent radius (double)
*
* Then, fill in the structure with the following information inside the "main" function
*
* name: Neon
* z: 10
* num_neutrons: 10
* mass: 20.1797;
* radius: 58
*/

#include <iostream>


/***************************************/
/* Write structure here                */
/***************************************/


// Testing code
int main() {
  Element e;

  /****************************************/
  /* Fill in the element information here */
  /****************************************/

  std::cout << "Element: " << e.name
            << " z= " << e.z
            << " num_neutrons= " << e.num_neutrons
            << " mass= " << e.mass
            << " radius= " << e.radius
            << std::endl;
}