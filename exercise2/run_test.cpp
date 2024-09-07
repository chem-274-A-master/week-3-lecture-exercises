// If you are student, remember that you should never
// include a source file. This is one exception though :)
// Call it "instructor's privilege"
#include <main.cpp>

#include <cassert>
#include <cmath>

bool isclose(double a, double b) { return (std::abs(a-b)/std::min(std::abs(a), std::abs(b)))  < 1.0e-11; }

int main(void)
{
    Rectangle r = create_rectangle();

    assert(isclose(r.area(), 4.1*17.2));
    assert(isclose(r.perimeter(), 2*(4.1+17.2)));
    assert(r.get_length() == 4.1);
    assert(r.get_width() == 17.2);

    return 0;
}
