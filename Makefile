# gcc -c calculadora.c   genera el archivo .o
# mas general gcc -c archivo.c    genera el archivo.o
# gcc -o [nombre] [archivo.o] generan un ejecutable
# luego para ejecutarlo ponemos /.nombre

#objetivo : dependencias (son los archivos que necesita la intruccion)
#		intrucciones      (son las instrucciones a ejecutar tipo gcc -c archivo.c es una orden )
OBJS= main.o burbuja.o insercion.o seleccion.o
BINARY = programa


x= Hola
y = $(x) Adios
x= adios
# Definicion de variables:
#	Si definimos varias veces una variable, solo se considera la ultima definicion
#	Si queremos que funciones como una variable de programa, en definiciones que contengan la variable las definimos de la siguiente forma ':='
#	Definir las variables := leer linea anterior
all: programa
	@./programa


#Esta regla compila el programa principal
programa: $(OBJS)
	@gcc -o $(BINARY) $(OBJS)
# '@' sirve para que no se vea el comando en pantalla de la terminal

# Make reconoce archivos C, Frontand, etc... y puede suponer instrucciones, osea no ahce falta escribir las instrucciones!! 
main.o: main.c funciones.h
	@gcc -c main.c


burbuja.o: burbuja.c funciones.h
	@gcc -c burbuja.c

seleccion.o: seleccion.c funciones.h
	@gcc -c seleccion.c

insercion.o: insercion.c funciones.h
	@gcc -c insercion.c


clean: 
	@rm -f $(BINARY) $(OBJS)


imprimir: 
	@echo $(x)
	@echo $(y)
