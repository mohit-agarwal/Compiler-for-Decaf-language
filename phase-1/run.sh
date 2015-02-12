bison --verbose -d code.y
flex code.l 
gcc code.tab.c lex.yy.c -lfl -o compiler
