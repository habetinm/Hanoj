REQ_DISC_CNT=14

app: main.c hanoj.o Makefile
	gcc -DDISC_CNT=$(REQ_DISC_CNT) hanoj.o main.c -o app
	
hanoj.o: hanoj.c hanoj.h Makefile
	gcc -c -DDISC_CNT=$(REQ_DISC_CNT) hanoj.c
	
.PHONY: clean
clean:
	rm -f main.o hanoj.o a.out app log.txt
