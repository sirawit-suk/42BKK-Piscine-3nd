#include <stdio.h>

void func(int *p);

int main()
{
	int a = 10;
	int *hey = 0x12345678;
	printf("%X\n\n", hey); // address of hey
	int *ptr;   // declare pointer (Real pointer) (so now "ptr" is a pointer)
	int **ptr1; // declare pointer (Keep address of another pointer)
	// int *ptr = &a; // this is the same as " ptr = &a; "
	
	//*ptr = a; will give ERROR "If" you don't assign ptr = &a; first...
	// if you assign ptr = &a; already, you can *ptr = 20; or *ptr = a; that's good to go.

	ptr = &a;   // pass a address to ptr (Real Pointer) ("ptr" is a pointer)
	*ptr = 20;
	ptr1 = &ptr; // pass ptr address to ptr1 (Keep address of another pointer)
	
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(ptr));
	printf("%d\n\n",sizeof(ptr1));
	
	printf("%X\n", a);    // a value
	printf("%X\n\n", &a); // address of a
	
	printf("%X\n", *ptr);   // ptr point to "address" AND get value of a "address"
	printf("%X\n", ptr);    // value of ptr (keep "address")
	printf("%X\n\n", &ptr); // address of ptr
	
	printf("%X\n", **ptr1);   // ptr1 point to "address" of ptr "address" AND get value of a "address"
	printf("%X\n", *ptr1);    // ptr1 point to "address" and get value of ptr "address"
	printf("%X\n", ptr1);     // value of ptr1
	printf("%X\n\n", &ptr1);  // address of ptr1
	
	func(&a); // pass a address to pointer (Real pointer)
	
	printf("%X\n", a);    // a value
}
void func(int *p) // this is pointer (Real pointer)
{
	printf("\n\n\n\nfunction:\n");
	printf("%X\n", *p); // p point to "address" AND get that value of that "address" 
	printf("%X\n", p);  // value of p (keep "address")
	printf("%X\n", &p); // address of p
	
	*p = 21;
}


