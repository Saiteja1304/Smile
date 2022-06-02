#ifndef GROUP_HPP
#define GROUP_HPP
#include "GameObject.hpp"
#include "Graphics/GL/Graphics.hpp"
#include <vector>
#define ARRAY_SIZE(X) sizeof(X) / sizeof(X[0])
struct Group {
  bool isAllocated = false;
  GameObject *gameobjects;
};
class GroupManager {
public:
  //   Group mainGroup;
  Group userGroups[1];
  static GroupManager &GMGetInstance() {
    static GroupManager GMInstance;
    return GMInstance;
  }
  Group &GMGetGroup(unsigned short int index);

private:
  GroupManager() {}
  GroupManager(GroupManager const &);
  void operator=(Graphics const &);
};
#endif