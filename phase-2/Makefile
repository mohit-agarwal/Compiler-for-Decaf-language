CCC = g++
CCFLAGS= -O3 -Wno-write-strings 
LEX = flex
LFLAGS= -8    
YACC= yacc
YFLAGS= -d -t -y
 
RM = /bin/rm -f
 
Parser: code.o y.tab.o lex.yy.o
		${CCC} ${CCFLAGS} lex.yy.o y.tab.o code.o -ll `llvm-config --cxxflags --ldflags --system-libs --libs core` -o Parser
 
code.o: code.cpp
		${CCC} -c code.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core`
 
y.tab.o: code.y
		${YACC} ${YFLAGS} code.y
		${CCC} ${CCFLAGS} -c y.tab.c `llvm-config --cxxflags --ldflags --system-libs --libs core`
 
lex.yy.o: code.l
		${LEX} $(LFLAGS) code.l
		${CCC} ${CCFLAGS} lex.yy.c -c `llvm-config --cxxflags --ldflags --system-libs --libs core`
 
clean:
		/bin/rm -f lex.yy.* y.tab.* *.o Parser
