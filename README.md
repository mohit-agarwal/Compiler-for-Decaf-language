# Compiler-for-Decaf-language
The aim of the project was to write a compiler for a language called Decaf. Decaf is a simple imperative language similar to C or Pascal.  

The project involved writing a parser for parsing the source code, using flex and bison, and detecting any errors; Constructing an AST of the given source code, using bison, defining a custom class for each type of node; Generating IR code from each of the nodes in the AST, and then evaluating this IR, using LLVM.
