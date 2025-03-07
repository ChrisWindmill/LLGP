#include "Character.h"

float Character::moveChar(CircleShape& character)
{

    if (Keyboard::isKeyPressed(Keyboard::Key::D))
    {
        m_direction = -1;
        m_isFacingRight = true;
        m_currentVeloc = m_currentVeloc + m_accel;
        character.move({m_currentVeloc, 0.f});
        cout << "right";
    }
    if (Keyboard::isKeyPressed(Keyboard::Key::A))
    {
        m_direction = 1;
        m_currentVeloc = m_currentVeloc - m_accel;
        m_isFacingRight = false;
        character.move({m_currentVeloc, 0.f });
        cout << "left";
    }
    if (Keyboard::isKeyPressed(Keyboard::Key::W))
    {
        character.move({ 0.f, -0.1f });
    }
    if (Keyboard::isKeyPressed(Keyboard::Key::S))
    {
        character.move({ 0.f, 0.1f });
    }

	return m_currentVeloc;
}
