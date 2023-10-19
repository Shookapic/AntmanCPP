all:
	make -C ./antman
	make -C ./giantman

clean:
	make -C ./antman clean
	make -C ./giantman clean

fclean:
	make -C ./antman fclean
	make -C ./giantantman fclean

re: clean all
