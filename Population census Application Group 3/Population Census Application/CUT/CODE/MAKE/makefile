app: main.o main_menu.o functions.o validation_file.o file_handling.o data_maintainance_menu.o 
	gcc -o app main_menu.o main.o functions.o validation_file.o file_handling.o data_maintainance_menu.o

main.o: main.c header.h
	gcc -o main.o -c main.c
main_menu.o: main_menu.c header.h
	gcc -o main_menu.o -c main_menu.c
functions.o: functions.c header.h
	gcc -o functions.o -c functions.c
validation_file.o: validation_file.c 
	gcc -o validation_file.o -c validation_file.c
file_handling.o: file_handling.c 
	gcc -o file_handling.o -c file_handling.c
data_maintainance_menu.o: data_maintainance_menu.c 
	gcc -o data_maintainance_menu.o -c data_maintainance_menu.c

clean:
	rm *.o



