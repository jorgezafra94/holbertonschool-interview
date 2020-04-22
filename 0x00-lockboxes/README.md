# LOCKBOXES

In this problem we have to store the keys in order to know if with the keys that
they give us per box we can open all the boxes

We have to use iteractive form because Python using recursion only have 1000 depth
after that it breaks, that is the reaso. I also did this exercise using recursion
because i didnt know it ;)

the idea is to store only the keys that we already dont have, but i dont have
to store the keys that have a number bigger than the length of boxes

The idea is to resolve this:
```
#!/usr/bin/python3

canUnlockAll = __import__('0-lockboxes').canUnlockAll

boxes = [[1], [2], [3], [4], []]
print(canUnlockAll(boxes))

boxes = [[1, 4, 6], [2], [0, 4, 1], [5, 6, 2], [3], [4, 1], [6]]
print(canUnlockAll(boxes))

boxes = [[1, 4], [2], [0, 4, 1], [3], [], [4, 1], [5, 6]]
print(canUnlockAll(boxes))
```
and get
```
True
True
False
```
