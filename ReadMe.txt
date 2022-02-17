STUDICT
Study your dictionary and definitions efficiently!

Usage: studict <path_to_dict_file> <block_size>

Dict file structure:
	1. <key_1>: <value_1>
	2. <key_2>: <value_2>
	.
	.
	.
	n. <key_n>: <value_n>

How to build:
	Debian GNU/Linux:
		$ sudo apt update
		$ sudo apt install g++ make
		Clone the repo
		$ cd Studict
		$ make
		Your binary is in Studict/Build/Binary
		Add that directory to your $PATH or copy the binary to a preferred location
