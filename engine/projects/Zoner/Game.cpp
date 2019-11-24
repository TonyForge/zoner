#include "Game.h"

Zoner::Game::Game()
{
	_settings_file_name = "zoner.settings.xml";
}

void Zoner::Game::Init()
{
	DisableFeature(ok::ApplicationFeature::AutoClearStencil);
}

void Zoner::Game::Update(float dt)
{

}