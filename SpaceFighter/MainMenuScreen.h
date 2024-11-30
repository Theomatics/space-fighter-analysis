#pragma once

#include "KatanaEngine.h"

using namespace KatanaEngine;

/** @brief The main menu screen for the game. */
class MainMenuScreen : public MenuScreen
{

public:

	/** @brief Instantiate a main menu screen object. */
	MainMenuScreen();
	virtual ~MainMenuScreen() { }

	/** @brief Load the content for the screen.
		@param resourceManager A reference to the game's resource manager,
		used for loading and managing game assets (resources). */
	virtual void LoadContent(ResourceManager& resourceManager);
	
	/** @brief Unload the content for the screen. */
	virtual void Update(const GameTime& gameTime);

	/** @brief Render the screen.
		@param spriteBatch A reference to the game's sprite batch, used for rendering. */
	virtual void Draw(SpriteBatch& spriteBatch);

	/** @brief Set the flag to quit the game, so the game will exit when screen fades out. */
	virtual void SetQuittingGame() { m_isQuittingGame = true; }

	/** @brief Set the level that will be played on start game, index starts at 0 and goes up from there (eg. level01 = 0, level02 = 1, ect) */
	virtual void SetStartingLevel(const int startingLevelIndex) { m_startingLevelIndex = startingLevelIndex; }

	/** @brief Get the index of the level that should be played on start game, index starts at 0 and goes up from there (eg. level01 = 0, level02 = 1, ect) */
	virtual int GetStartingLevel() { return m_startingLevelIndex; }

	/** @brief Check if the game is quitting.
		@return True if the game is quitting. */
	virtual bool IsQuittingGame() { return m_isQuittingGame; }


private:
	
	Texture *m_pTexture = nullptr;

	Vector2 m_texturePosition;

	bool m_isQuittingGame = false;

	int m_startingLevelIndex = 1;

};