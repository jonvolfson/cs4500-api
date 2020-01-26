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


void test1() {
	String* s1 = new String("abc");
	String* s2 = new String("abc");
	t_true(s1->equals(s2));
	t_true(s1->length() == 3);

	String* s3 = new String("wow");
	t_false(s1->equals(s3));

	std::cout << "1\n";
	}

void test2() {
	Array* a1 = new Array(2);
	t_true(a1->length() == 2);

	a1->insert(new String("abc"), 0);
	a1->insert(new String("abc"), 1);
	t_true(a1->get(0)->equals(a1->get(1)));

	a1->remove(0);
	a1->insert(new String("cba"), 0);
	t_false(a1->get(0)->equals(a1->get(1)));

	std::cout << "2\n";

}

main() {
	test1();
	test2();

	return 0;
}
