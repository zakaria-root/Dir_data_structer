#include <iostream>
#include "implementationContact.h"
#include "implementationDir.h"
#include "implementationList.h"
#include "implementationNode.h"
#include "dir.h"

main()
{
    
    Dir dir;
    dir.add("ahmed", "ahmed@gmail.com", "0665846999");
    dir.add("ziko", "ziko@gmail.com", "0665846999");
    dir.add("zakaria", "zakaria@gmail.com", "0665846999");
    dir.add("bhima", "bhima@gmail.com", "0665846999");
    dir.print();

    
    std::cout << "the main file" << std::endl;
}