// If you are student, remember that you should never
// include a source file. This is one exception though :)
// Call it "instructor's privilege"
#include <main.cpp>

#include <cassert>

int main(void)
{
    Element e = create_neon();

    assert(e.name == "Neon");
    assert(e.z == 10);
    assert(e.num_neutrons == 10);
    assert(e.mass == 20.1797);
    assert(e.radius == 58);

    return 0;
}
