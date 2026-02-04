#include "PlayerBullet.h"

PlayerBullet::PlayerBullet(const Vector2& position)
    : super("*", position, Color::Blue),
    yPosition(static_cast<float>(position.y))
{

}

PlayerBullet::~PlayerBullet()
{

}

void PlayerBullet::Tick(float deltaTime)
{
    super::Tick(deltaTime);

    // 위로 이동 처리. 초 단위로 이동
    yPosition -= moveSpeed * deltaTime; // 곱하면 초단위로 변경됨 ( 30 * (1/60)) * 60번, 프레임 상관 없이 작동됨 

    // 좌표 검사.
    if (yPosition < 0.f)
    {
        Destroy();
        return;
    }

    Vector2 newPosition = GetPosition();
    newPosition.y = static_cast<int>(yPosition);

    // 위치 갱신
    SetPosition(newPosition);
}
