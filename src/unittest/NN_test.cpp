#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#define BOOST_TEST_MODUL NN test
#include <boost/test/unit_test.hpp>
#include "../NN.h"


BOOST_AUTO_TEST_CASE( data_access_test )
{
	NN neuralNetwork;
	neuralNetwork.setNumberOfLayers(5);
	BOOST_CHECK_EQUAL( neuralNetwork.getNumberOfLayers(), 5);
}
