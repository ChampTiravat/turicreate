
//  Copyright 2015 Peter Dimov.
//
// Distributed under the Boost Software License, Version 1.0.
//
// See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt


#include <boost/mp11/algorithm.hpp>
#include <boost/mp11/integral.hpp>
#include <boost/core/lightweight_test_trait.hpp>
#include <type_traits>

int main()
{
    using boost::mp11::mp_list;
    using boost::mp11::mp_iota;
    using boost::mp11::mp_iota_c;
    using boost::mp11::mp_int;
    using boost::mp11::mp_size_t;

    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota_c<0>, mp_list<>>));
    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota_c<1>, mp_list<mp_size_t<0>>>));
    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota_c<2>, mp_list<mp_size_t<0>, mp_size_t<1>>>));
    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota_c<3>, mp_list<mp_size_t<0>, mp_size_t<1>, mp_size_t<2>>>));
    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota_c<4>, mp_list<mp_size_t<0>, mp_size_t<1>, mp_size_t<2>, mp_size_t<3>>>));

    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota<mp_size_t<0>>, mp_list<>>));
    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota<mp_size_t<1>>, mp_list<mp_size_t<0>>>));
    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota<mp_size_t<2>>, mp_list<mp_size_t<0>, mp_size_t<1>>>));
    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota<mp_size_t<3>>, mp_list<mp_size_t<0>, mp_size_t<1>, mp_size_t<2>>>));
    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota<mp_size_t<4>>, mp_list<mp_size_t<0>, mp_size_t<1>, mp_size_t<2>, mp_size_t<3>>>));

    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota<mp_int<0>>, mp_list<>>));
    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota<mp_int<1>>, mp_list<mp_int<0>>>));
    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota<mp_int<2>>, mp_list<mp_int<0>, mp_int<1>>>));
    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota<mp_int<3>>, mp_list<mp_int<0>, mp_int<1>, mp_int<2>>>));
    BOOST_TEST_TRAIT_TRUE((std::is_same<mp_iota<mp_int<4>>, mp_list<mp_int<0>, mp_int<1>, mp_int<2>, mp_int<3>>>));

    return boost::report_errors();
}
