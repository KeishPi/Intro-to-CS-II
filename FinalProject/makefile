# Author: Keisha Arnold
# Date: August 7, 2016
# Description: makefile for Final Project

CXX = g++
CXXFLAGS = -std=c++0x

SRC1 = Space.cpp
SRC2 = Zee.cpp
SRC3 = Pairadice.cpp
SRC4 = Ixchel.cpp
SRC5 = Camazotz.cpp
SRC6 = Tesseract.cpp
SRC7 = Wormhole.cpp
SRC8 = Player.cpp
SRC9 = Dice.cpp
SRC10 = PlayGame.cpp
SRC11 = mainSpace.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6} ${SRC7} ${SRC8} ${SRC9} ${SRC10} ${SRC11}

HEADER1 = Space.hpp
HEADER2 = Zee.hpp
HEADER3 = Pairadice.hpp
HEADER4 = Ixchel.hpp
HEADER5 = Camazotz.hpp
HEADER6 = Tesseract.hpp
HEADER7 = Wormhole.hpp
HEADER8 = Player.hpp
HEARDER9 = Dice.hpp
HEADER10 = PlayGame.hpp
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4} ${HEADER5} ${HEADER6} ${HEADER7} ${HEADER8} ${HEADER9} ${HEADER10}

PROG1 = play
PROGS = ${PROG1} 

RESULT1 = 
RESULT2 = 
RESULTS = # ${RESULT1} ${RESULT2}

default:
	${CXX} ${CXXFLAGS} ${SRCS}  -o ${PROGS} 

clean:
	rm -f $(PROGS) *.o *~
