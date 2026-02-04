#pragma once
#include "Actor\Actor.h"
#include "Util/Timer.h"

using namespace Wanted;

class EnemySpawner : public Actor
{
    RTTI_DECLARATIONS(EnemySpawner, Actor)
public:
    EnemySpawner();

private:    
    virtual void Tick(float deltaTime) override; //  다형성 -> 접근제한자는 없는것이다. private이여도 실행함

    void SpawnEnemy(float deltaTime);

private:


    Timer timer;
};

