CALCNAME ?= Courier

ifeq ($(OS),Windows_NT)
RM         = del /q /f 2>nul
else
RM         = rm -f
endif

all: $(CALCNAME).8xv

$(CALCNAME).bin: COURE13.fnt COURF16.fnt COURE20.fnt COURF20.fnt COURF25.fnt
	convfont -o fontpack -N "Courier" -P "ISO-8859-1" \
	-D "A common monospaced font." \
	-V "1.0.0.0" \
	-f COURE13.fnt -a 0 -b 1 -c 2 -x 5 -s serif -s monospaced -w normal \
	-f COURF16.fnt -a 0 -b 1 -c 3 -x 6 -s serif -s monospaced -w normal \
	-f COURE20.fnt -a 0 -b 1 -c 4 -x 7 -s serif -s monospaced -w normal \
	-f COURF20.fnt -a 0 -b 1 -c 4 -x 7 -s serif -s monospaced -w bold \
	-f COURF25.fnt -a 0 -b 1 -c 5 -x 8 -s serif -s monospaced -w normal \
	$(CALCNAME).bin

$(CALCNAME).8xv: $(CALCNAME).bin
	convbin --archive --name $(CALCNAME) --iformat bin --oformat 8xv --input $(CALCNAME).bin --output $(CALCNAME).8xv

clean:
	$(RM) $(CALCNAME).bin
	$(RM) $(CALCNAME).8xv

.PHONY: clean
