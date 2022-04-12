#include <iostream>
#include "implementationContact.h"
#include "implementationDir.h"
#include "implementationList.h"
#include "implementationNode.h"
#include "dir.h"

main()
{
    // system("cls");
    Dir dir;
    dir.add("ahmed", "ahmed@gmail.com", "0665846999");
    dir.add("zakaria", "zakaria@gmail.com", "0665846999");
    dir.add("ziko", "ziko@gmail.com", "0665846999");
    dir.add("zaid", "zaid@gmail.com", "0665846999");
    dir.add("bhima", "bhima@gmail.com", "0665846999");

    // --------------------- AJOUTER CONTACTS -----------------------

    dir.remove("zika", "ziko@gmail.com");

    // --------------------- SUPPRIMER CONTACT -----------------------

    // Node* node = dir.search("ahmed", "ahmed@gmail.com");
    // displayContact(node);

    // --------------------- CHERCHER CONTACT -----------------------

    dir.print();

    // --------------------- AFFICHER CONTACTS -----------------------

    // dir.update("zika", "ziko@gmail.com", "0665846999");

    std::cout << "the main file" << std::endl;
}