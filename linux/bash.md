 [ ] nice / renice
 [ ] flock
 [ ] SECONDS
 [ ] RANDOM
 [ ] strings
 [ ] pushd / popd
 [ ] cut
 [ ] rg
 [ ] fd
 [ ] dd
 [ ] hexdump


## tee

Read to standard input and write to standard output and files.

### Example:

```bash
cat a.txt | tee b.txt
```

This will write content of a.txt to stdout and to b.txt

### Options:

- `-a` -> append to given file, don't overwrite
- `-i` -> ignore interrupt signals

