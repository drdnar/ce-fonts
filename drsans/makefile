CALCNAME ?= DrSans

ifeq ($(OS),Windows_NT)
RM         = del /q /f 2>nul
else
RM         = rm -f
endif

all: $(CALCNAME).8xv

$(CALCNAME).bin: drsans-06-bold.fnt drsans-06-normal.fnt drsans-07-bold.fnt drsans-07-normal.fnt drsans-09-bold.fnt drsans-09-normal.fnt
	convfont -o fontpack -N "Dr. Sans" -P "Calculator 1252" \
	-D "A font designed for maximum readability" \
	-V "23 April 2019" \
	-f "drsans-09-bold.fnt"   -l 11 -x 5 -c 2 -a 1 -b 1 -w bold -s 0 -s sans-serif -s upright -s proportional \
	-f "drsans-09-normal.fnt" -l 11 -x 5 -c 2 -a 1 -b 1 -w normal -s 0 -s sans-serif -s upright -s proportional \
	-f "drsans-07-bold.fnt"   -l 8  -x 3 -c 1 -a 1 -b 1 -w bold -s 0 -s sans-serif -s upright -s proportional \
	-f "drsans-07-normal.fnt" -l 8  -x 3 -c 1 -a 1 -b 1 -w normal -s 0 -s sans-serif -s upright -s proportional \
	-f "drsans-06-bold.fnt"   -l 7  -x 3 -c 1 -a 1 -b 1 -w bold -s 0 -s sans-serif -s upright -s proportional \
	-f "drsans-06-normal.fnt" -l 7  -x 3 -c 1 -a 1 -b 1 -w normal -s 0 -s sans-serif -s upright -s proportional \
	$(CALCNAME).bin

$(CALCNAME).8xv: $(CALCNAME).bin
	convbin --archive --name $(CALCNAME) --iformat bin --oformat 8xv --input $(CALCNAME).bin --output $(CALCNAME).8xv

clean:
	$(RM) $(CALCNAME).bin
	$(RM) $(CALCNAME).8xv

.PHONY: all clean
