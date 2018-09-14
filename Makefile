all: game.exe

game.exe: main.o Deck.o	Player.o
	g++ main.o Deck.o Player.o -o game.exe

main.o: main.cpp Deck.h	Player.h
	g++ -c main.cpp Deck.h Player.h

deck.o: Deck.cpp Card.h
	g++ -c Deck.cpp Card.h

card: Card.h
	g++ -c Card.h

player.o: Player.cpp Card.h
	g++ -c Player.cpp Card.h

clean:
	rm *.o *.exe *.h.gch
