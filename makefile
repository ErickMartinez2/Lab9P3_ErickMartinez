Main: Main.o Alquimista.o Aprendiz.o DragonBorn.o Guerrero.o LinkedList.o Luchador.o Mago.o
	g++ Main.o Alquimista.o Aprendiz.o DragonBorn.o Guerrero.o LinkedList.o Luchador.o Mago.o -o a

Main.o: Main.cpp Alquimista.h Aprendiz.h DragonBorn.h Guerrero.h LinkedList.h Luchador.h Mago.h
	g++ -c Main.cpp Alquimista.cpp Aprendiz.cpp DragonBorn.cpp Guerrero.cpp LinkedList.cpp Luchador.cpp Mago.cpp

Alquimista.o: Alquimista.h Alquimista.cpp
	g++ -c Alquimista.cpp

Aprendiz.o: Aprendiz.h Aprendiz.cpp
	g++ -c Aprendiz.cpp

DragonBorn.o: DragonBorn.h DragonBorn.cpp
	g++ -c DragonBorn.cpp

Guerrero.o: Guerrero.h Guerrero.cpp
	g++ -c Guerrero.cpp

LinkedList.o: LinkedList.h LinkedList.cpp
	g++ -c LinkedList.cpp

Luchador.o: Luchador.h Luchador.cpp
	g++ -c Luchador.cpp

Mago.o: Mago.h Mago.cpp
	g++ -c Mago.cpp

