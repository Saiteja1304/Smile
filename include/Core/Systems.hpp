#ifndef SYSTEMS_HPP
#define SYSTEMS_HPP
extern "C" {
class CSScript {
public:
  void init();
  void start();
  void update();
  void exit();
};
}
class Systems {};

#endif