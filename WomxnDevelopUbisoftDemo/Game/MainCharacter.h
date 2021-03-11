#pragma once


class MainCharacter : public sf::Drawable, public BoxCollideable
{
public:	
	MainCharacter();

	void Update(float deltaTime);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

	void jump();
	void StartEndGame();

private:
	sf::Texture m_Texture;
	sf::Sprite m_Sprite;

	bool m_IsUsingJoystick;
	unsigned int m_JoystickIndex;
	bool m_WasButtonPressed;

	sf::Vector2f m_Position; 
	sf::Vector2f m_Velocity;
	sf::Vector2f m_Acceleration;
	const float gravity = 2;

	bool m_IsPlayingEndGame;
};