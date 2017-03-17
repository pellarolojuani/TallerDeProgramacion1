//============================================================================
// Name        : Testing.cpp
// Author      : ezequielb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
using namespace std;
#include <ExampleTest/Mock2.cpp>
#include "libraries/catch/catch.hpp"





TEST_CASE( "prueba", "[getNum]" ) {

	Mock2 mock;

	REQUIRE( mock.getNum() == 9 );

}


/*
 * si en cualquier cpp pones --#include "catch.hpp"-- ya te lo incluye y te lo corre
 *
 * compilas y ejecutas el binario */

