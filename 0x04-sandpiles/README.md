# Sandpiles
sandpiles are matrices where it's values goes from 0 to 3 max<br>
so to understand a little bit i think that is better watching a video<br>
watch this video: [sandpiles](https://www.youtube.com/watch?v=1MtEUErz7Gg) it is going to be clear enough<br>
Write a function that computes the sum of two sandpiles like this:
```
./0-sandpiles 
3 3 3   1 3 1
3 3 3 + 3 3 3
3 3 3   1 3 1
=
4 6 4
6 6 6
4 6 4
=
2 5 2
5 6 5
2 5 2
=
4 2 4
2 6 2
4 2 4
=
0 5 0
5 2 5
0 5 0
=
2 1 2
1 6 1
2 1 2
=
2 2 2
2 2 2
2 2 2
```

also it has to work with stable sums

```
./0-sandpiles 
0 0 0   3 3 3
0 0 0 + 3 3 3
0 0 0   3 3 3
=
3 3 3
3 3 3
3 3 3
```
