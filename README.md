# WAV SHIFTER

# New Update:

new modulations added now with a integer iterator, can add complex algorithms

# TRY

	t<<ch

What this does is reading a wav file from folder called audio.wav and then it "modulates" that audio.wav into 
new.wav, the modulation commands depends on the user entry.

Note: Design only for Linux

Usage:

	./wavsh.py

or

	python wavsh.py

then prompt says:
ncmd:

and you can tipe bit-wise operators, gates, shift, etc...

example:

	ch<<2
	ch>>2
	ch0xf
	1<<ch

Remember always to use the variable ch, because ch is the readed char from audio.wav


Enjoy Listening to new.wav

sounds like RF transmissions.

Cheers!
