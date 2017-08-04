P3exe: main.cpp Creature.cpp Vampire.cpp Barbarian.cpp BlueMen.cpp Medusa.cpp HarryPotter.cpp
	g++ -std=c++11  main.cpp Creature.cpp Vampire.cpp Barbarian.cpp BlueMen.cpp Medusa.cpp HarryPotter.cpp -o P3exe

clean:
	rm -f *.o P3exe
