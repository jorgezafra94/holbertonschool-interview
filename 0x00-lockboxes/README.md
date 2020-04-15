# LOCKBOXES

In this problem the idea is to keep in one array all the keys that we found
but only the different ones not the keys that we already have

Once we have all of them, we have to compare the number of keys or openedBox
with the number of elements in boxes. If both are equal is true else is a false

the logic was to initialize openBox with [0] because is the first box that we
opened, then save the new key in openBox, and after recursion update the
list of openBox that we bring back from recursions, and get the ultimate list
of opened boxes