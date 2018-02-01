/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			Arrays Frequency
 * Author:			P. Bauer
 * Due Date:		November 03, 2010
 * ----------------------------------------------------------
 * Description:
 * Calculate frequency of random numbers in an array. The solution
 * can only deal with ints
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

#include "deletable_primes.h"

#include "shortcut.h"
#include "test_deletable_primes.h"

int main(int argc, char *argv[])
{
	ADD_TEST(remove_rightmost_digit);
	ADD_TEST(remove_leftmost_digit);
	ADD_TEST(remove_some_digit);

	ADD_TEST(single_digit);
	ADD_TEST(double_digit_ok);
	ADD_TEST(triple_number);
	ADD_TEST(general_number);

	run_tests();
	return 0;
}
