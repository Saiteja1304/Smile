#ifndef CSCRIPT_HPP
#define CSCRIPT_HPP

class CScript {
  public:
  virtual void Init();
  virtual void Start();
  virtual void Update();
  virtual void Exit();
};

#endif