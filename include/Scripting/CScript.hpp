#ifndef CSCRIPT_HPP
#define CSCRIPT_HPP

extern "C" class CScript {
public:
  void nonvirtual();
  virtual void Init();
  virtual void Start();
  virtual void Update();
  virtual void Exit();

  CScript() {}
  virtual ~CScript() {}

private:
};

#endif