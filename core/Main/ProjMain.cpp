#include "Main/ProjMain.h"

#include <iostream>

#include "Utility/WaitDelegate.h"

namespace proj
{

int ProjMain()
{
    std::cout << "Main started" << std::endl;
    utility::WaitDelegate::Algorithm();
    std::cout << "Main finished" << std::endl;
    return 0;
}

} // namespace main