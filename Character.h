#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;
class Character
{
	float m_accel = 7.f;
	float m_currentVelocX = 0.f;
	float m_maxVelocX = 200.f;
	float m_accelDecay = 2.f;
	float m_timeToMaxVeloc = (m_maxVelocX - m_currentVelocX) / m_accel;
	
	float m_jumpForce = -5.f;
	int m_jumpCount = 0;
	int m_maxJumps = 2;
	float m_jumpTimer = 0.f;
	float m_maxJumpTime = 2.f;
	float m_gravity = 5.f;
	float m_currentVelocY = 0.f;
	float m_maxVelocY = 200.f;

	int m_directionX;
	bool m_isFacingRight;

	bool m_isGrounded;

	Clock clock;
	Time dt = seconds(0.01f);
	//float dt = dt.AsSeconds();

public:
	float moveChar(CircleShape&);
	

	
};

