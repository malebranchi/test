#include <stdio.h>
#include <stdlib.h>

#include "test.cpp"

#include "libber-tlv\vxtypes.h"
#include "libber-tlv\ber-tlv.h"
#include "liblog\dlogger.h"

int main(int argc, char *argv[])
{
	printf("hello v3.1.2\n");
	printf("branch for master\n");

	function1();
	
	return 0;
}
