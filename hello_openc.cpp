 /*
 *  Copyright � 2008 Nokia Corporation.
 *  This material, including documentation and any related 
 *  computer programs, is protected by copyright controlled by 
 *  Nokia Corporation. All rights are reserved. Copying, 
 *  including reproducing, storing, adapting or translating, any 
 *  or all of this material requires the prior written consent of 
 *  Nokia Corporation. This material also contains confidential 
 *  information which may not be disclosed to others without the 
 *  prior written consent of Nokia Corporation.
 * ============================================================================
 */

#include <iostream>
#include "testlib.h"

// This is a GCCE toolchain workaround needed when compiling with GCCE
// and using main() entry point
#ifdef __GCCE__
#include <staticlibinit_gcce.h>
#endif

using namespace std;

int main(void)
{
	cout << "Press a character to exit!\n";
	cout << "Using testlib:\n";
	auto lambda_test = []{
		cout << "Enter lambda\n";
		say_hello();
		cout << "Exit lambda\n";
	};
	lambda_test();
	char c;
	cin >> c;
	return 0;
}
