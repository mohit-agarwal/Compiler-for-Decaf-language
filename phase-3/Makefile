CCC = g++
CCFLAGS= -O3 -Wno-write-strings -Wdeprecated-register
LEX = flex
LFLAGS= -8    
YACC= yacc
YFLAGS= -d -t -y
 
RM = /bin/rm -f
 
CodeGenerator: llvmCodeGen.o y.tab.o lex.yy.o
		${CCC} ${CCFLAGS} lex.yy.o y.tab.o llvmCodeGen.o -ll `llvm-config --cxxflags --ldflags --system-libs --libs core` -o CodeGenerator
 
llvmCodeGen.o: llvmCodeGen.cpp
		${CCC} -c llvmCodeGen.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core`
 
y.tab.o: llvmCodeGen.y
		${YACC} ${YFLAGS} llvmCodeGen.y
		${CCC} ${CCFLAGS} -c y.tab.c `llvm-config --cxxflags --system-libs --libs core`
 
lex.yy.o: llvmCodeGen.l
		${LEX} $(LFLAGS) llvmCodeGen.l
		${CCC} ${CCFLAGS} lex.yy.c -c `llvm-config --cxxflags --ldflags --system-libs --libs core`
 
clean:
		/bin/rm -f lex.yy.* y.tab.* *.o CodeGenerator
