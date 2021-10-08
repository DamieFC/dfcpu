# dfcpu
A cpu thing I'm gonna mess with and work on idfk yet
## How will it be programmed?
I think I'll use orgasm assembly for it, but that's awhile away because I need to create my own microcode.
## Building
Idk why you'd want to but ok
### Deps:
1. gcc

```sh
git clone https://github.com/DamieFC/dfcpu
cd dfcpu
cd src
gcc dfcpu.c -o dfcpu -I./include -nostartfiles 
```
## Running
```
./dfcpu
```
It segfaults with options.
## Notice: this idea came about before I learned about [sgcpu and sg01](https://github.com/segfaultdev/sgcpu) so I'm not copying. IG Seg has been doing that for awhile but it was my own idea.
