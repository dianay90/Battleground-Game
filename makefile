default: inputValidation.cpp Vampire.cpp testDriver.cpp Menu.cpp Medusa.cpp HarryPotter.cpp Creature.cpp BlueMen.cpp Battleground.cpp Barbarian.cpp
	g++ -std=c++0x inputValidation.cpp Vampire.cpp testDriver.cpp Menu.cpp Medusa.cpp HarryPotter.cpp Creature.cpp BlueMen.cpp Battleground.cpp Barbarian.cpp -o d

clean: 
	rm d
	

