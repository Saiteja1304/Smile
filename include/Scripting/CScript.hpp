#ifndef CSCRIPT_HPP
#define CSCRIPT_HPP

#include <iostream>
extern "C" class CScript {
public:
  void nonvirtual();
  virtual void Init() {std::cerr << "Init\n";}
  virtual void Start() {std::cerr << "Start\n";}
  virtual void Update() {std::cerr << "Update\n";}
  virtual void Exit() {std::cerr << "Exit\n";}

  CScript() {}
  virtual ~CScript() {}

private:
};

#endif