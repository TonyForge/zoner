#pragma once

#include "IGame.h"

namespace Zoner
{
	

	class GameWorld : ok::GameObject
	{
	public:
	protected:
	private:
	};

	class Game : public Zoner::IGame
	{
	public:
		Game();
		void Init();
		void Update(float dt);
	protected:
	private:
		//Zoner::GameWorld
	};
}