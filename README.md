# scintilator

A pretty ASCII light show for the terminal

------------------------------------------------------------------------------

_scintilator_ is a small program that does one thing: render sparkly little
exploding ASCII thingies to the terminal. This is basically my attempt at
writing a program like [cmatrix](https://github.com/abishekvashok/cmatrix)
or [pipes](https://github.com/pipeseroni/pipes.sh), but using my C++ wrapper
for ncurses, [vexes](https://github.com/Nynergy/vexes).

## How can I compile and run it?

First, ensure you have ncurses installed. Then, just clone the repo and compile
with the following commands:

```
$ git clone https://github.com/Nynergy/scintilator
$ cd scintilator
$ make
```

Then you can run the program with `./scintilator`
