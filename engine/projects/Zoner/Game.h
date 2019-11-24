#pragma once

#include "IGame.h"

namespace Zoner
{
	class Game : public Zoner::IGame
	{
	public:
		Game();
		void Init();
		void Update(float dt);
	protected:
	private:
	};
}