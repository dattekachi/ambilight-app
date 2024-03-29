find_path(MBEDTLS_INCLUDE_DIR mbedtls/ssl.h)

find_library(MBEDTLS_SSL_LIBRARY mbedtls)
find_library(MBEDTLS_X509_LIBRARY mbedx509)
find_library(MBEDTLS_CRYPTO_LIBRARY mbedcrypto)

set(MBEDTLS_LIBRARIES ${MBEDTLS_SSL_LIBRARY} ${MBEDTLS_X509_LIBRARY} ${MBEDTLS_CRYPTO_LIBRARY})
set(MBEDTLS_LIBRARIES ${MBEDTLS_LIBRARIES} PARENT_SCOPE)

if (MBEDTLS_INCLUDE_DIR AND EXISTS "${MBEDTLS_INCLUDE_DIR}/mbedtls/build_info.h")
	file(STRINGS "${MBEDTLS_INCLUDE_DIR}/mbedtls/build_info.h" _MBEDTLS_VERSION_STRING REGEX "^#define MBEDTLS_VERSION_STRING[ \t\r\n]+\"[0-9]+.[0-9]+.[0-9]+\"")
	string(REGEX REPLACE "^#define MBEDTLS_VERSION_STRING[ \t\r\n]+\"([0-9]+.[0-9]+.[0-9]+)\"" "\\1" MBEDTLS_VERSION "${_MBEDTLS_VERSION_STRING}")
	message(STATUS "Using static mbedtls libraries version: \"${MBEDTLS_VERSION}\"")
elseif (MBEDTLS_INCLUDE_DIR AND EXISTS "${MBEDTLS_INCLUDE_DIR}/mbedtls/version.h")
	file(STRINGS "${MBEDTLS_INCLUDE_DIR}/mbedtls/version.h" _MBEDTLS_VERSION_STRING REGEX "^#[\t ]*define[\t ]+MBEDTLS_VERSION_STRING[\t ]+\"[0-9]+.[0-9]+.[0-9]+\"")
	string(REGEX REPLACE "^.*MBEDTLS_VERSION_STRING.*([0-9]+.[0-9]+.[0-9]+).*" "\\1" MBEDTLS_VERSION "${_MBEDTLS_VERSION_STRING}")
	message(STATUS "Using static mbedtls libraries (build version \"${MBEDTLS_VERSION}\")")
endif ()

if (MBEDTLS_INCLUDE_DIR AND MBEDTLS_LIBRARIES AND MBEDTLS_VERSION)

    include(FindPackageHandleStandardArgs)

    find_package_handle_standard_args(mbedtls
        REQUIRED_VARS
                MBEDTLS_INCLUDE_DIR
                MBEDTLS_LIBRARIES
        VERSION_VAR
                MBEDTLS_VERSION
    )

    mark_as_advanced (MBEDTLS_INCLUDE_DIR MBEDTLS_LIBRARIES MBEDTLS_SSL_LIBRARY MBEDTLS_X509_LIBRARY MBEDTLS_CRYPTO_LIBRARY)

endif (MBEDTLS_INCLUDE_DIR AND MBEDTLS_LIBRARIES AND MBEDTLS_VERSION)
