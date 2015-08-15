# ROT13

## Usage:

First compile the project with:

```
$ make
```

Then run the ROT13 algorithm with options:

```
$ ./rot13 with a little text
# jvgu n yvggyr grkg 

$ ./rot13 < test.txt
# Jul qvq gur puvpxra pebff gur ebnq?

$ echo "Jul qvq gur puvpxra pebff gur ebnq?" | ./rot13
# Why did the chicken cross the road?

```

## References

- [Wikipedia ROT13](https://en.wikipedia.org/wiki/ROT13)
- [Wikipedia ASCII](https://en.wikipedia.org/wiki/ASCII)