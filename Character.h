#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;
class Character
{
	float m_accel = 0.01f;
	float m_currentVeloc = 0.f;
	float m_maxVeloc = 0.1f;
	float m_timeToMaxVeloc = (m_maxVeloc - m_currentVeloc) / m_accel;
	float m_jumpForce;

	int m_direction;
	bool m_isFacingRight;

public:
	float moveChar(CircleShape&);
	

	
};

