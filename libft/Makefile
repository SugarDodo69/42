# Variabili
NAME = libft.a          # Nome della libreria statica
CC = gcc                # Compilatore
CFLAGS = -Wall -Wextra -Werror  # Flag di compilazione
SRCS = $(filter-out main.c, $(wildcard *.c))  # Prende tutti i file .c tranne main.c
OBJS = $(SRCS:.c=.o)    # Converte i file .c in file .o
MAIN = main.c           # File principale per i test
EXEC = main_program     # Nome dell'eseguibile

# Regola principale
all: $(NAME)

# Creazione della libreria statica
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compilazione dei file oggetto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Compilazione ed esecuzione del programma principale
#main: $(NAME) $(MAIN)
#	$(CC) $(CFLAGS) $(MAIN) -L. -lft -o $(EXEC)
#	./$(EXEC)

# Pulizia dei file oggetto
clean:
	rm -f $(OBJS)

# Pulizia completa (file oggetto, libreria, eseguibile)
fclean: clean
	rm -f $(NAME) $(EXEC)

# Ricompilazione completa
re: fclean all

# Dichiarazione dei target phony
.PHONY: all clean fclean re main

###

TARGET = programma

# Elenco dei file sorgente .c
SRC = file1.c file2.c file3.c  # Aggiungi manualmente i tuoi file .c qui

# Elenco dei file oggetto .o
OBJ = $(SRC:.c=.o)

# Elenco dei file header .h
HEADER = file1.h file2.h  # Aggiungi manualmente i tuoi file .h qui

# Flags di compilazione
CFLAGS = -Wall -g

# Regola di default
all: $(TARGET)

# Compilazione dell'eseguibile finale
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Compilazione dei file .c in .o
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Pulizia dei file oggetto e dell'eseguibile
clean:
	rm -f $(OBJ) $(TARGET)

# Pulizia dei file generati da una compilazione
distclean: clean
	rm -f *~

.PHONY: all clean distclean

