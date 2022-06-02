#include "Core/Group.hpp"
#include <cstddef>
#include <iostream>
Group &GroupManager::GMGetGroup(unsigned short index) {
  if (index > ARRAY_SIZE(userGroups)) {
    std::cerr << "Index out of range\n";;
  } else {
	  return userGroups[index];
  }
}