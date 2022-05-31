#ifndef SYSTEMS_HPP
#define SYSTEMS_HPP
extern "C" {
class CSScript {
public:
  virtual void init(){};
  virtual void start(){};
  virtual void update(){};
  virtual void exit(){};
};
}
class Systems {};

#endif