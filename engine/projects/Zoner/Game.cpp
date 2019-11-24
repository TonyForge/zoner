#include "Game.h"

Zoner::Game* Zoner::IGame::_instance = nullptr;

Zoner::Game::Game()
{
	_instance = this;
	_settings_file_name = "zoner.settings.xml";
}

void Zoner::Game::Init()
{
	DisableFeature(ok::ApplicationFeature::AutoClearStencil);
}

void Zoner::Game::Update(float dt)
{

}