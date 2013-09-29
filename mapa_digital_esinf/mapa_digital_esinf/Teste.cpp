
#include <iostream>
#include "Teste.h"

int main() {
    Teste test;
    test.Run();
	test.~Teste();
    cin.get();
    //return 0;
}
