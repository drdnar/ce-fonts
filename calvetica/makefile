calvetica.8xv: HELVE13.fnt HELVE16.fnt HELVE20.fnt HELVE24.fnt HELVE29.fnt
	convfont -o fontpack -N "Calvetica" -P "ISO-8859-1" \
	-D "A popular Swiss sans-serif font." \
	-V "1.0.0.0" \
	-f HELVE13.fnt -a 0 -b 1 -c 2 -x 5 -s sans-serif -w normal \
	-f HELVE16.fnt -a 0 -b 1 -c 3 -x 6 -s sans-serif -w normal \
	-f HELVE20.fnt -a 0 -b 1 -c 4 -x 7 -s sans-serif -w normal \
	-f HELVE24.fnt -a 1 -b 1 -c 5 -x 9 -s sans-serif -w normal \
	-f HELVE29.fnt -a 1 -b 1 -c 6 -x 11 -s sans-serif -w normal \
	calvetica.bin
	convhex -a -v -n calvetic calvetica.bin calvetica.8xv

all: calvetica.8xv