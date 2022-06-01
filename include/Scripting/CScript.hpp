#ifndef CSCRIPT_HPP
#define CSCRIPT_HPP

extern "C" class CScript {
public:
  virtual void Start() {}
  virtual void Update() {}
  virtual void End() {}
};

#endif