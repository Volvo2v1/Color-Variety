OBJ-M 	= color.o
SRC	= color.c
HEADER	= color.h
CC	= gcc
FLAGS	= -c
LFOLDER = /usr/include/ykb39
FPIC 	= -fPIC
IFLAGS	= -shared
IOUT	= color.so
LLIB	= libcolor.so


all:
	$(CC) $(FLAGS) $(SRC) -o $(OBJ-M)

install:
	@echo "[!] Installing Color-Variety for system-wide use.."
	@$(CC) $(FPIC) $(FLAGS) $(SRC)
	@$(CC) $(IFLAGS) -o $(IOUT) $(OBJ-M)
	@echo "[!] Creating library directory -> "+$(LFOLDER)
	@mkdir -p $(LFOLDER)
	@cp $(HEADER) $(LFOLDER)/$(HEADER)
	@cp $(IOUT) /usr/lib/$(LLIB)
	@echo "[ok] Success"

uninstall:
	@echo "[!] Uninstalling Color-Variety.."
	@echo "[!] Removing library directory.."
	@rm -rf $(LFOLDER)
	@rm -f /usr/lib/$(LLIB)
	@echo "[ok] Success"

clean:
	rm -f $(OBJ-M)
