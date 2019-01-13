// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

oe_result_t generate_certificate_and_pkey(mbedtls_x509_crt *cert, mbedtls_pk_context *private_key);

#define ADD_TEST_CHECKING 
#define CLIENT_REQUEST_PAYLOAD_SIZE      18
#define SERVER_RESPONSE_PAYLOAD_SIZE    194 