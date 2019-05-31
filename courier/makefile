courier.8xv: COURE13.fnt COURF16.fnt COURE20.fnt COURF20.fnt COURF25.fnt
	convfont -o fontpack -N "Courier" -P "ISO-8859-1" \
	-D "A common monospaced font." \
	-V "1.0.0.0" \
	-f COURE13.fnt -a 0 -b 1 -c 2 -x 5 -s serif -s monospaced -w normal \
	-f COURF16.fnt -a 0 -b 1 -c 3 -x 6 -s serif -s monospaced -w normal \
	-f COURE20.fnt -a 0 -b 1 -c 4 -x 7 -s serif -s monospaced -w normal \
	-f COURF20.fnt -a 0 -b 1 -c 4 -x 7 -s serif -s monospaced -w bold \
	-f COURF25.fnt -a 0 -b 1 -c 5 -x 8 -s serif -s monospaced -w normal \
	Courier.bin
	convhex -a -v -n Courier Courier.bin Courier.8xv

all: Courier.8xv
