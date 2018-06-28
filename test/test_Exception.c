#include "unity.h"
#include "Exception.h"
#include "CException.h"

#define ERR_OUT_OF_BOUND 3

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
	"David",
	"Ah Beng",
	"Sally"
};

char *getName(int index){
	if(index >= 4 || index < 0 )
	Throw(ERR_OUT_OF_BOUND);
	return names[index];
}

void test_getName_Given_1_expect_David(void){
	CEXCEPTION_T e;
	char *name;
	
	
Try{
	name = getName(-1);
	printf("Name is %s\n", name);
}Catch(e) {
	printf("error code: %d\n",e);
}
	
	//name = getName(-1);
	//TEST_ASSERT_EQUAL_STRING_LEN("David", name , 5);
	//TEST_ASSERT_EQUAL_STRING("Davidx", name);
}