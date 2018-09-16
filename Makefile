all: game.exe

game.exe: main.o Blackjack.o Deck.o	Player.o
	g++ main.o Blackjack.o Deck.o Player.o -o game.exe

main.o: main.cpp Blackjack.h Deck.h	Player.h
	g++ -c main.cpp Deck.h Player.h

Blackjack.o: Blackjack.cpp Deck.h Player.h
	g++ -c Blackjack.cpp Deck.h Player.h

Deck.o: Deck.cpp Card.h
	g++ -c Deck.cpp Card.h

card: Card.h
	g++ -c Card.h

Player.o: Player.cpp Card.h
	g++ -c Player.cpp Card.h

clean:
	rm *.o *.exe *.h.gch
