# Make a test floppy
# this floppy will boot a machine and display the output of some diagnostic
# programs to give you information on configuring LILO

floppy: disk.com bootsect.b
	cat bootsect.b disk.com | dd of=/dev/fd0 bs=512
	
