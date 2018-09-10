#!/usr/bin/env python
import subprocess
import signal
import sys

def signal_handler(sig, frame):
        print('You pressed Ctrl+C!')
        sys.exit(0)

def main():
	with open('wavsh.c', 'r') as myfile:
		data=myfile.read()#.replace('\n', '')
	input = raw_input('ncmd: ');
	ndata = data.replace("$",input)
	text_file = open("wwavsh.c", "w")
	text_file.write("%s" % ndata)
	text_file.close()
	ncmd = 'gcc wwavsh.c -lm'.split()
	rc = subprocess.call(ncmd);
	ncmd = 'rm wwavsh.c'.split()
	rc = subprocess.call(ncmd);
	ncmd = './play.sh'
	signal.signal(signal.SIGINT, signal_handler)
	rc = subprocess.call(ncmd.split());
	signal.pause()

	print('Press Ctrl+C')

main()
