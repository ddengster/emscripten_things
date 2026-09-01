
#pragma once

#include <box2d/box2d.h>
#include <box2d/math_functions.h>

class Demo
{
public:
  Demo() {}
  virtual ~Demo() {}

  virtual void Update(float dt) = 0;
};

class HairSpringBox2d : public Demo
{
public:
  HairSpringBox2d();
  ~HairSpringBox2d();

  void Update(float dt);

  b2WorldId mWorldId;
};

