default: inputValidation.cpp Vampire.cpp testDriver.cpp Medusa.cpp HarryPotter.cpp Creature.cpp BlueMen.cpp Battleground.cpp Barbarian.cpp Queue.cpp Loser.cpp
	g++ -std=c++0x inputValidation.cpp Vampire.cpp testDriver.cpp Medusa.cpp HarryPotter.cpp Creature.cpp BlueMen.cpp Battleground.cpp Barbarian.cpp Queue.cpp Loser.cpp -o d 

clean: 
	rm d
	

