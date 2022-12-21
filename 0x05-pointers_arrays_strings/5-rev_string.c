#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}


/**
*
* The value of len / 2 is used as the upper bound of the for loop
* because it represents the middle of the string. Reversing the characters
* of a string requires swapping pairs of characters, starting from the outermost
* pairs and working inward. If we were to reverse the characters of a string
* with an odd number of characters, we would need to ignore the character at the
* exact middle of the string. For example, if the string is "abcde", we would need to reverse
* the characters "ab" and "de", but we would leave the character "c" unchanged.
* By using len / 2 as the upper bound of the for loop, we ensure that we only iterate
* through the first half of the string, which allows us to reverse the characters in pairs
* without having to worry about the middle character. This means that the loop will reverse
* the characters of even-length strings correctly, and it will also reverse the characters
* of odd-length strings correctly, ignoring the middle character as needed.

* The expression len - index - 1 is used to calculate the index of the character in the string that is
* opposite to the character at index index. For example, if the string pointed to by s has a length of 5,
* and index is 2, then len - index - 1 would be equal to 5 - 2 - 1, or 2. This means that the character
*  at index 2 in the string is opposite to the character at index 2 in the string.

* Using this expression allows us to reverse the characters in pairs, starting from the outermost pairs
*  and working inward. For example, if the string is "abcde", the pairs of characters that would be reversed are:

* The characters at indices 0 and 4: "a" and "e"
* The characters at indices 1 and 3: "b" and "d"
* By using the expression len - index - 1, we can easily calculate the index of the character that is
* opposite to the character at index index, and use this to reverse the characters in pairs.
*
*/
