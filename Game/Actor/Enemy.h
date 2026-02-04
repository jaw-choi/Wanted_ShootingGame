#pragma once

#include "Actor/Actor.h"
#include "Util/Timer.h"

using namespace Wanted;

class Enemy : public Actor
{
    RTTI_DECLARATIONS(Enemy, Actor)

        // 이동 방향 열거형.
        enum class MoveDirection
    {
        None = -1,
        Left,
        Right
    };

public:
    Enemy(const char* image = "(oqOpo)", int yPosition = 5);
    ~Enemy();

    virtual void Tick(float deltaTime) override;

    //데미지 받았을 때 처리할 함수.
    void OnDamaged();
private:

    // 이동 방향 열거형.
    MoveDirection direction = MoveDirection::None;

    // 좌우 이동 처리를 위한 변수.
    float xPosition = 0.f;
    float moveSpeed = 5.f;

    Timer timer;
};

