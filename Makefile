all:
	@bison -d simplebison.y # -Wno-conflicts-sr
	@flex simpleflex.l
	@gcc -o simplebison lex.yy.c simplebison.tab.c -lfl -lm
debug:
	@bison -d simplebison.y -Wcounterexamples # -Wno-conflicts-sr
	@flex simpleflex.l
	@gcc -o simplebison lex.yy.c simplebison.tab.c -lfl -lm
clean:
	@rm simplebison lex.yy.c simplebison.tab.c simplebison.tab.h
