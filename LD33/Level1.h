#pragma once

#include "Level.h"

class Level1 : public Level{
public:
	explicit Level1(sf::Font* font);
	void startLevel(EntityManager* entityManager, ResourceManager<sf::Texture, std::string>* resourceManager, ParticleEngine* particleEngine);
};