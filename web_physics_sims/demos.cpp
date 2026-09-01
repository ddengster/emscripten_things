
#include "demos.h"
#include <stdio.h>

HairSpringBox2d::HairSpringBox2d()
{
  b2WorldDef worldDef = b2DefaultWorldDef();
  worldDef.gravity = b2Vec2{0.0f, -9.81f};
  mWorldId = b2CreateWorld(&worldDef);
}

HairSpringBox2d::~HairSpringBox2d()
{
  b2DestroyWorld(mWorldId);
}

void HairSpringBox2d::Update(float dt)
{
  printf("%.2f\n", dt);
}