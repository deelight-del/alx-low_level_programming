## HASH FUNCTION AND HASH TABLE

This directory contain tasks that shows for 
the implementations of Hash Table data structure.
 
====================================================
Why the Hash Data Structure?


The Hash data structure is a well known data structure
that is used in the world of software engineers, in applications
such as the use of associative arrays, caching, DB indexing,
and other usecases.


Without collision in a hash table, the lookup and search function
is of O(1). And with a hash function that is efficient and with 
uniform probability distribution of the possible hash values, A
typical hashtable can easily be of O(1).


However, a perfect hash function (that results in a collisionless
hash values) is ideal and atypical. Thus, using hash tables are usually
a tradeoff between storage space and time of search.


Supposed we have unbounded storage, we can thus fit all of our values of
our records at different points in memory using just the keys that we have, without
having a collision. And the time of search will always be O(1).


Supposed we have unbounded time, we can thus stuff all of our records in a single linear
list, like a linkedlist, and thus, the time of search will be O(n).


=============================================================================
Implememntation and Handling collision


In this case, we implement our hash table as an indexed array of linkedlist.
And collision is handled using a linkedlist, through a method called chaining.

==================================================================
SHALL WE?
