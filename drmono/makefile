CALCNAME ?= DrMono

ifeq ($(OS),Windows_NT)
RM         = del /q /f 2>nul
else
RM         = rm -f
endif

$(CALCNAME).bin: drmono-10-normal.fnt drmono-10-bold.fnt drmono-14-normal.fnt drmono-14-bold.fnt
	convfont -o fontpack -N "Dr. Mono" -P "Calculator 1252" \
	-D "A monospaced variant of Dr. Sans" \
	-V "25 May 2019" \
	-f "drmono-10-normal.fnt" -l 8  -x 3 -c 1 -a 1 -b 1 -w normal -s 0 -s sans-serif -s upright -s monospaced \
	-f "drmono-10-bold.fnt"   -l 8  -x 3 -c 1 -a 1 -b 1 -w bold -s 0 -s sans-serif -s upright -s monospaced \
	-f "drmono-14-normal.fnt" -l 11 -x 5 -c 2 -a 1 -b 1 -w normal -s 0 -s sans-serif -s upright -s monospaced \
	-f "drmono-14-bold.fnt"   -l 11 -x 5 -c 2 -a 1 -b 1 -w bold -s 0 -s sans-serif -s upright -s monospaced \
	$(CALCNAME).bin

$(CALCNAME).8xv: $(CALCNAME).bin
	convbin --archive --name $(CALCNAME) --iformat bin --oformat 8xv --input $(CALCNAME).bin --output $(CALCNAME).8xv

all: $(CALCNAME).8xv

clean:
	$(RM) $(CALCNAME).bin
	$(RM) $(CALCNAME).8xv

.PHONY: clean