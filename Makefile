game:
	g++ main.o Deck.o Player.o -o Game

main:
	g++ -c main.cpp Deck.h Player.h

deck:
	g++ -c Deck.cpp Card.h

card:
	g++ -c Card.h

player:
	g++ -c Player.cpp Card.h

clean:
	rm *.o *.exe *.h.gch
