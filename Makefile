
# make quick sort lib
lib :
	gcc quickSort_util.c quickSort_util.h -Wall -c

tests : quickSort_util.o
	# TODO : remplacer cette commande par un appel direct aux tests
	gcc tests/test.c tests/test.h quickSort_util.h quickSort_util.o -Wall -o valider

clear :
	rm -f valider
	rm -f quickSort_util.h.gch
	rm -f *.o
