// Boost.Convert library
//
// Copyright (c) 2009-2014 Vladimir Batov.
// Use, modification and distribution are subject to the Boost Software License,
// Version 1.0. See http://www.boost.org/LICENSE_1_0.txt.

#ifndef __BOOST_CONVERT_WORKAROUNDS_PRIVATE_HPP__
#define __BOOST_CONVERT_WORKAROUNDS_PRIVATE_HPP__

#include <boost/version.hpp>

#if defined(_MSC_VER)
#   pragma warning(disable: 4348)
#   pragma warning(disable: 4800)
#   pragma warning(disable: 4996)

#   define snprintf _snprintf
#endif

#endif // __BOOST_CONVERT_WORKAROUNDS_PRIVATE_HPP__
