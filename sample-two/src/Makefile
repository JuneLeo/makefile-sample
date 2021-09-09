################################################################################################
## 方式五 src
################################################################################################

object = get_.o sum_.o val_.o main_.o

main:$(object)
	@echo it is compile main_.c now! .....
	$(CC) -o $@ ${object}
	$(MAKE) clean
main.o:get_.h sum_.h

.PHONY:clean cleanall
clean:
	-rm -rf *.o
cleanall:clean
	-rm -rf main