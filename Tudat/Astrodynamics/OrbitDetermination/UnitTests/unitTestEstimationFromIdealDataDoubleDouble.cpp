/*    Copyright (c) 2010-2017, Delft University of Technology
 *    All rigths reserved
 *
 *    This file is part of the Tudat. Redistribution and use in source and
 *    binary forms, with or without modification, are permitted exclusively
 *    under the terms of the Modified BSD license. You should have received
 *    a copy of the license with this file. If not, please or visit:
 *    http://tudat.tudelft.nl/LICENSE.
 */

//#define BOOST_TEST_MAIN


#include <limits>

#include <boost/test/unit_test.hpp>

#include "Tudat/Astrodynamics/OrbitDetermination/UnitTests/orbitDeterminationTestCases.h"


//namespace tudat
//{
//namespace unit_tests
//{
//BOOST_AUTO_TEST_SUITE( test_estimation_from_positions )



//! This test checks, for double states/observables and double time, if the orbit determination correctly converges
//! when simulating data, perturbing the dynamical parameters, and then retrieving the original parameters
//BOOST_AUTO_TEST_CASE( test_EstimationFromPosition )
int main( )
{
//    for( int simulationType = 0; simulationType < 5; simulationType++ )
//    {

//        std::cout<<"=============================================== Running Case: "<<simulationType<<std::endl;

//        // Simulate estimated parameter error.
//        Eigen::VectorXd totalError;

//        totalError = executePlanetaryParameterEstimation< double, double >( simulationType ).second;

//        // Adjust tolerance based on simulation settings
//        double toleranceMultiplier = 20.0;

//        // Check error.
//        for( unsigned int j = 0; j < 3; j++ )
//        {
//            BOOST_CHECK_SMALL( totalError( j ), toleranceMultiplier * 5.0E-3 );
//        }

//        for( unsigned int j = 0; j < 3; j++ )
//        {
//            BOOST_CHECK_SMALL( totalError( j + 3 ), toleranceMultiplier * 1.0E-7 );
//        }

//        BOOST_CHECK_SMALL( totalError( 6 ), toleranceMultiplier * 1.0E3 );
//        std::cout<<totalError.transpose( )<<std::endl;
//    }

    tudat::unit_tests::executeEarthOrbiterParameterEstimation< double, double >( );
}

//BOOST_AUTO_TEST_SUITE_END( )

//}

//}

