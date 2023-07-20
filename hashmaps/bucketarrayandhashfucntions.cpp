//bucket array is the array that stores the values of map in the array and thhey are linked to the keys using indexes using hash function
//hash functions are consist of two things: hash code and compression function 
//hash code is responsible for the conversion of string ,object,charcter into integer
//compression function is used for the coverting the intger value into single digit that lies btw the indexes so that we can map 
//these hashcode can be identical function whic means it can take a input and return the same output 
//it coould be like string is a input and in return hashcode adds all the alphabets and return it as answer.
//hashcode is also responsible for uniform distribution which means babbar and babbra are treated as same and it will return the same output and the mapping will be done on the same location which leads to the collision.
//now we have to do collision handling this coule be done using open hashing(separate chaining) and open addddressing and closed addressing 
//open hashing or separate chaining mai jab same value aati hai toh us jagah pr hi store krdete hai but isme ek head hota hai usse linkled list lagi hoti hai ek jaie jasie values aati rhegi ek hi location pr vaise vaise aage bhadta jaaygea linked list 
//open addressing::agar ek hi location aarhi hai toh koi aur agli jagah daaldo nayi dekhlo koi that could be done using function(linear probing,quadric probbing and many more learn about it ) 
//closed addressing:
//learn more from website 
