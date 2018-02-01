/*----------------------------------------------------------
 *				HTBLA-Leonding / Class:
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			deletable_primes.c
 * Author:			P. Bauer
 * Due Date:		October 16, 2012
 * ----------------------------------------------------------
 * Description:
 * Test functions for deletable_primes.
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

#include "shortcut.h"
#include "deletable_primes.h"
#include "test_deletable_primes.h"


/******************************************************************************
 * remove_rightmost_digit
 *
 *
 ******************************************************************************/
TEST(remove_rightmost_digit)
{
	ASSERT_EQUALS(34, remove_digit(0, 345));
	ASSERT_EQUALS(0, remove_digit(0, 1));
	ASSERT_EQUALS(412567, remove_digit(0, 4125673));
}

/******************************************************************************
 * remove_leftmost_digit
 *
 *
 ******************************************************************************/
TEST(remove_leftmost_digit)
{
	ASSERT_EQUALS(45, remove_digit(2, 345));
	ASSERT_EQUALS(0, remove_digit(0, 1));
	ASSERT_EQUALS(125673, remove_digit(6, 4125673));
}

/******************************************************************************
 * remove_some_digit
 *
 *
 ******************************************************************************/
TEST(remove_some_digit)
{
	ASSERT_EQUALS(35, remove_digit(1, 345));
	ASSERT_EQUALS(0, remove_digit(0, 1));
	ASSERT_EQUALS(415673, remove_digit(4, 4125673));
}



/******************************************************************************
 * single_digit_prime
 *
 *
 ******************************************************************************/
TEST(single_digit)
{
	ASSERT_EQUALS(1, get_ways(5));
	ASSERT_EQUALS(0, get_ways(9));
}

/******************************************************************************
 * double_digit_ok
 *
 *
 ******************************************************************************/
TEST(double_digit_ok)
{
	ASSERT_EQUALS(1, get_ways(67));
	ASSERT_EQUALS(2, get_ways(37));
}

/******************************************************************************
 * triple_number
 *
 *
 ******************************************************************************/
TEST(triple_number)
{
	ASSERT_EQUALS(2, get_ways(467));
	ASSERT_EQUALS(1, get_ways(457));
}

/******************************************************************************
 * general_number
 *
 *
 ******************************************************************************/
TEST(general_number)
{
	ASSERT_EQUALS(3, get_ways(4567));
	ASSERT_EQUALS(8, get_ways(3797));
	ASSERT_EQUALS(9, get_ways(45673));
	ASSERT_EQUALS(28, get_ways(739397));
	ASSERT_EQUALS(16, get_ways(87178291199));
	ASSERT_EQUALS(0, get_ways(200560490131));
	ASSERT_EQUALS(0, get_ways(99194853094755497));
	ASSERT_EQUALS(0, get_ways(2305843009213693951));
}
