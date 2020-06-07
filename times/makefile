CALCNAME ?= Times

ifeq ($(OS),Windows_NT)
RM         = del /q /f 2>nul
else
RM         = rm -f
endif

all: $(CALCNAME).8xv

$(CALCNAME).bin: TMSRE13.fnt TMSRF16.fnt TMSRE19.fnt TMSRF20.fnt TMSRE21.fnt TMSRF23.fnt TMSRF27.fnt
	convfont -o fontpack -N "Times" -P "ISO-8859-1" \
	-D "A font you've seen so much you're bored of it." \
	-V "1.0.0.0" \
	-f TMSRE13.fnt -l 11 -c 2 -x 5 -s serif -w normal \
	-f TMSRF16.fnt -l 13 -c 3 -x 6 -s serif -w normal \
	-f TMSRE19.fnt -l 15 -c 4 -x 7 -s serif -w normal \
	-f TMSRF20.fnt -l 16 -c 5 -x 8 -s serif -w normal \
	-f TMSRE21.fnt -l 16 -c 3 -x 7 -s serif -w normal \
	-f TMSRF23.fnt -l 18 -c 5 -x 9 -s serif -w normal \
	-f TMSRF27.fnt -l 21 -c 5 -x 10 -s serif -w normal \
	$(CALCNAME).bin

$(CALCNAME).8xv: $(CALCNAME).bin
	convbin --archive --name $(CALCNAME) --iformat bin --oformat 8xv --input $(CALCNAME).bin --output $(CALCNAME).8xv

clean:
	$(RM) $(CALCNAME).bin
	$(RM) $(CALCNAME).8xv

.PHONY: clean
