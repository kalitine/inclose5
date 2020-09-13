# In-Close5

In-Close5 is a fast formal concept miner.

Author's implementation: https://sourceforge.net/projects/inclose/

Related works:
- Andrews, S. (2018). A new method for inheriting canonicity test failures in close-by-one type algorithms.
- Andrews, S. (2017). Making use of empty intersections to improve the performance of cbo-type algorithms. In International Conference on Formal Concept Analysis (pp. 56-71).
- Andrews, S. (2015). A ‘Best-of-Breed’approach for designing a fast algorithm for computing fixpoints of Galois Connections. Information Sciences, 295, 633-649.
- Andrews, S. (2011). In-close2, a high performance formal concept miner. In International Conference on Conceptual Structures (pp. 50-62).
- Andrews, S. (2009). In-close, a fast algorithm for computing formal concepts.


## Compiling
To compile the program, run the file  './MakeFile.sh' in the directory containing the source files.


## Running
To run the program, type './InClose5' and the arguments:

1) Dataset's filename;

2) minimum number of rows (i.e., minimum number of objects in a formal concept);

3) minimum number of columns (i.e., minimum number of attributes in a formal concept);

4) Output filename for the list of biclusters;

For instance:
./InClose5 exampleDataset 2 1 exampleOutput.m

### Hot to read the output
For the example above the output is:
```
A{1} = [3 4 ];
B{1} = [2 3 ];
A{2} = [1 2 ];
B{2} = [4 5 6 ];
```
A is a set of objects (extent).
B is a set of attributes (intent).
(A{1}, B{1})=([3 4], [2 3]) is a formal concept number 1.
(A{2}, B{2})=([1 2], [4 5 6]) is a formal concept number 2.
