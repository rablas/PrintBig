PrintBig is a Windows console application that prints a number in bigger size (7 lines).

Usage: PrintBig number [color] [wait_time] [separator] [left_space]

- number is a mandatory parameter with the number to be printed
- color = decimal number representing the color to print the number. Default = 15 (bright white). Colors table below.
- wait_time is the number of miliseconds app will wait after number is printed. Default = 500ms
- saparator is the number of spaces between two digits. Default = 2
- left_space is the number of spaces printed before printed number starts. Default = 10

Colors:
0 = Black	8 = Gray
1 = Blue	9 = Light Blue
2 = Green	10 = Light Green
3 = Aqua	11 = Light Aqua
4 = Red		12 = Light Red
5 = Purple	13 = Light Purple
6 = Yellow	14 = Light Yellow
7 = White	15 = Bright White

Example: PrintBig 12345 10 1000
(will print 12345 in light green and wait 1sec after it)
