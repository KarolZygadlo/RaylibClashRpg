#ifndef CHARACTER_H
#define CHARACTER_H

#include "raylib.h"
#include "BaseCharacter.h"

class Character : public BaseCharacter
{
public:
    Character(int winWidth, int winHeight);
    virtual void tick(float deltaTime) override;
    virtual Vector2 getScreenPos() override;
    float returnDamage() { return damage; }
    Rectangle getWeaponCollisionRec() { return weaponCollisionRec; }

private:
    int windowWidth{};
    int windowHeight{};
    float damage{50.f};
    Texture2D weapon{LoadTexture("characters/weapon_sword.png")};
    Rectangle weaponCollisionRec{};
};

#endif
