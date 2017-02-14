/* file: anagram.c                                      */
/* authors: A.M van Maurik (email: mathew9753@gmail.com) */
/* 	        R. Rotteveel (email: roel.rotteveel@gmail.com) */
/* date: 14-02-2017                                     */
/* version: 2.00                                        */
/* Description:	Comparing different sentences and check if they are anagrams
	Step 1: make a program that compares the lenght of sentences */



#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	// Variables
	int n;
	int m;
	// Gets character to count length sentence
	char c;

	// The first integer input is the number of sentences in the table.
	scanf("%d",&n);
	// Make an array that is n long to store the amount of letters in
	int a[n];
	// scan the first newlin
	c = getchar();
	
	//Looping through n sentences.!  Sentence ends with "." Full stop. 
	
	// Scan for n sentences
	for(int i = 0; i < n; i++){
		c = getchar();
		// l(ength) becomes 0, increments for every character in the while loop below
		int l = 0;
		while(c != '.'){
			// increments length if the char is not a space
			if(c != ' '){
				l++;
			}
			c = getchar();
		}
		// Store the length in the array at the corresponding place
		a[i] = l;
		// reads newline
		getchar();
	}
	
	// print array to check if it's correct
	//for(int i = 0; i < n; i++){
		//printf("%d\n", a[i]);
	//}
	

	//Looping through m test sentences.! Sentence ends with "." Full stop.

	// The second integer input is the number of test sentences.
	scanf("%d",&m);
	// We don't have to make an array as we can immediately compare the value to the values in a[n]
	// Scan first newline
	c = getchar();
	
	// Scan for m sentences
	for(int i = 0; i < m; i++){
		c = getchar();
		// l(ength) becomes 0, increments for every character in the while loop below
		int l = 0;
		while(c != '.'){
			// increments length if the char is not a space
			if(c != ' '){
				l++;
			}
			c = getchar();
		}
		// compare length of sentence to the lenghts in array a[n]
		for(int j = 0; j < n; j++){
			if(l == a[j]){
				// printf 'j+1' because j starts at 0, not at 1
				printf("%d ", j+1);
			}
		}
		// printf newline, also when length of m was not the same as a sentence in the array
		printf("\n");
		// reads newline
		getchar();
	}

	return 0;
}
