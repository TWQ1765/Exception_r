#include "unity.h"
#include "Exception.h"
#include "CException.h"


void setUp(void)
{
}

void tearDown(void)
{
}

void xtest_Exception_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement Exception");
}

//names is array 3 of pionters to char
char * names[] = {
	"Ali",
	"B",
	"C",
	"David"
};





char *getNameInTable(int index, char *name[], int maxSize){
	if(index >= maxSize || index < 0)
		Throw(UNKNOW_PEOPLE);
		return names[index];
	
	
}


char *getName(int index){
	if(index >= 4 || index < 0 )
	Throw(ERR_OUT_OF_BOUND);
	return names[index];
}

void test_getName_Given_minus_1_expect_ERR_OUT_OF_BOUND(void){
	CEXCEPTION_T e;
	char *name;
	
	
Try{
	name = getName(-1);
	TEST_FAIL_MESSAGE("Expected ERR_OUT_OF_BOUND to be thrown, but none.");
}Catch(e) {
	//printf("error code: %d\n",e);
}
}

void test_getName_Given_4_expect_ERR_OUT_OF_BOUND(void){
	CEXCEPTION_T e;
	char *name;
	
	
Try{
	name = getName(4);
	TEST_FAIL_MESSAGE("Expected ERR_OUT_OF_BOUND to be thrown, but none.");
}Catch(e) {
	//printf("error code: %d\n",e);
}		
}

void test_getName_Given_1_expect_David(void){
	CEXCEPTION_T e;
	char *name;
	
	
Try{
	name = getName(1);
	TEST_ASSERT_EQUAL_STRING("David", name);
}Catch(e) {
	TEST_FAIL_MESSAGE("Expected not to be thrown, but received one.");
}		
}