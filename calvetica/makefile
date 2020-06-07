CALCNAME ?= Calvetica

ifeq ($(OS),Windows_NT)
RM         = del /q /f 2>nul
else
RM         = rm -f
endif

all: $(CALCNAME).8xv

$(CALCNAME).bin: HELVE13.fnt HELVE16.fnt HELVE20.fnt HELVE24.fnt HELVE29.fnt
	convfont -o fontpack -N "Calvetica" -P "ISO-8859-1" \
	-D "A popular Swiss sans-serif font." \
	-V "1.0.0.0" \
	-f HELVE13.fnt -a 0 -b 1 -c 2 -x 5 -s sans-serif -w normal \
	-f HELVE16.fnt -a 0 -b 1 -c 3 -x 6 -s sans-serif -w normal \
	-f HELVE20.fnt -a 0 -b 1 -c 4 -x 7 -s sans-serif -w normal \
	-f HELVE24.fnt -a 1 -b 1 -c 5 -x 9 -s sans-serif -w normal \
	-f HELVE29.fnt -a 1 -b 1 -c 6 -x 11 -s sans-serif -w normal \
	$(CALCNAME).bin

$(CALCNAME).8xv: $(CALCNAME).bin
	convbin --archive --name $(CALCNAME) --iformat bin --oformat 8xv --input $(CALCNAME).bin --output $(CALCNAME).8xv

clean:
	$(RM) $(CALCNAME).bin
	$(RM) $(CALCNAME).8xv

.PHONY: clean
