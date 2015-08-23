#pragma once

#include "Level.h"

class Level3 : public Level{
public:
	explicit Level3(sf::Font* font);
	void startLevel(EntityManager* entityManager, ResourceManager<sf::Texture, std::string>* resourceManager, ParticleEngine* particleEngine);
};