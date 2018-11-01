
#include "dmbuildtest.h"

int main( int argc, char* argv[] ) {

    dmbuildtest_interface* module = dmbuildtestGetModule();
    if (module)
    {
        module->Release();
    }
    return 0;
}
