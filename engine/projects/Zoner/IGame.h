#pragma once

#include "..\..\Application.h"


namespace Zoner
{
	class Game;

	//all saveable|loadable|readable game data here
	//10 mega bytes for now
	char gmm[1024 * 10];
	typedef unsigned int gmm_adress;

	class GW_Any_Data
	{
	public:
		Zoner::gmm_adress this_adr;
	};

	class GW_GalaxySector_Data : public Zoner::GW_Any_Data
	{
		Zoner::gmm_adress star_systems[6];
	};

	class GW_StarSystem_Data : public Zoner::GW_Any_Data
	{
		Zoner::gmm_adress orbital_objects[30];
		Zoner::gmm_adress spaceships[30];
	};

	class GW_OrbitalObject_Data : public Zoner::GW_Any_Data
	{
		Zoner::gmm_adress name; //60 symbols
		Zoner::gmm_adress health;
	};

	class GW_Spaceship_Data : public Zoner::GW_Any_Data
	{
		Zoner::gmm_adress name; //60 symbols
	};

	class GW_InvItem_Data : public Zoner::GW_Any_Data
	{
		Zoner::gmm_adress name; //60 symbols
	};
	

	class IGame : public ok::Application
	{
	public:
		static Zoner::Game* _instance;
	protected:
	private:	
	};
}