
# make quick sort lib
lib :
	gcc quickSort_util.c quickSort_util.h -Wall -c

tests : quickSort_util.o
	# TODO : templacer cette commande par un appel direct aux tests
	gcc tests/test.c tests/test.h -Wall -o valider
