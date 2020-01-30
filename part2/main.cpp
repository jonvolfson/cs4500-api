#include "helper.h"  // Your file, with any C++ code that you need
#include "Object.h"  // Your file with the CwC declaration of Object
#include "String.h"  // Your file with the String class
#include <ctype.h>
#include "Array.h"


void FAIL() {
	printf("FAILED TEST\n");
	exit(1);    
}
void OK(const char* m) { printf("%c\n", *m); }
void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if (p) FAIL(); }


// tests functionality for String class
void test1() {
	String* s1 = new String("abc");
	String* s2 = new String("abc");
	t_true(s1->equals(s2));
	t_false(s1->hash() == s2->hash())

	String* s3 = new String("wow");
	t_false(s1->equals(s3));

	// test cmp
	t_true(s1->cmp(s2) == 0);
	t_false(s1->cmp(s3) == 0);

	// test concat and size
	t_true(s1->size() == 3);

	String* s4 = s1->concat(s2);
	t_true(s4->size() == 6);

	String* s5 = new String("abcabc");
	t_true(s4->cmp(s5) == 0);


	printf("1\n");
	}

// test our array class
void test2() {
	Array* a1 = new Array(2);
	t_true(a1->length() == 2);

	// test insert and count
	a1->insert(new String("abc"), 0);
	a1->insert(new String("abc"), 1);
	t_true(a1->get(0)->equals(a1->get(1)));
	t_true(a1->count() == 2);

	// testing dynamic add
	a1->add(new String("123"));
	t_true(a1->count() == 3);
	t_true(a1->length() == 4); // when adding over max capacity, double size of array and copy over


	a1->remove(0);
	t_true(a1->count() == 2);
	t_true(a1->get(0) == nullptr);
	a1->insert(new String("cba"), 0);
	t_false(a1->get(0)->equals(a1->get(1)));

	printf("2\n");

}

main() {
	test1();
	test2();

	return 0;
}
