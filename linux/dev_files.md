## Useful /dev files

These are device nodes which don't correspond to any physical devices (pseudo-device files)

- /dev/null
- /dev/zero
- /dev/urandom
- /dev/stdin, /dev/stdout, /dev/stderr

### /dev/null
accepts and discards all input written to it; provides an end-of-file indication when read from.

Usage:
```bash
cat ~/some.txt > /dev/null
```

### /dev/zero
 accepts and discards all input written to it; produces a continuous stream of null characters (zero-value bytes) as output when read from.

Usage:
```bash
dd if=/dev/zero of=dummy.file bs=1024 count=1

hexdump -C dummy.file
00000000  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
*
00000400
```


### /dev/urandom

/dev/urandom and /dev/random provide an interface to the kernel's random number generator.

[Myths about /dev/urandom](https://www.thomas-huehn.com/myths-about-urandom/)

Usage:
```bash
head -30 /dev/urandom > ~/random_30.txt
```

For simpler usecase, like getting a random positive integer, use the shell variable `$RANDOM`

```bash
echo $RANDOM
12685
```
