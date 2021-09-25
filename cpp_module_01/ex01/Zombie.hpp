#include <iostream>

class Zombie {
	public:
		Zombie();
		Zombie(std::string zombieName);

		~Zombie();

		void announce(void);
		void setZombieName(std::string zombieName);

	private:
		std::string _zombieName;
};
