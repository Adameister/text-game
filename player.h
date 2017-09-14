class Player{
public:
	void createPlayer( std::string name );
	void setPlayerLocation( std::string name );
	std::string getPlayerName( void );
	std::string getPlayerLocation( void );

private:
	std::string playerName;
	std::string playerLocation;
};
