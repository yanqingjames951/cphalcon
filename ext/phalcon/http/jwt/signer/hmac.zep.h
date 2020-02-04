
extern zend_class_entry *phalcon_http_jwt_signer_hmac_ce;

ZEPHIR_INIT_CLASS(Phalcon_Http_JWT_Signer_Hmac);

PHP_METHOD(Phalcon_Http_JWT_Signer_Hmac, __construct);
PHP_METHOD(Phalcon_Http_JWT_Signer_Hmac, getAlgHeader);
PHP_METHOD(Phalcon_Http_JWT_Signer_Hmac, sign);
PHP_METHOD(Phalcon_Http_JWT_Signer_Hmac, verify);
PHP_METHOD(Phalcon_Http_JWT_Signer_Hmac, getHash);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_http_jwt_signer_hmac___construct, 0, 0, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, algo, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, algo)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_http_jwt_signer_hmac_getalgheader, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_http_jwt_signer_hmac_getalgheader, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_http_jwt_signer_hmac_sign, 0, 2, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_http_jwt_signer_hmac_sign, 0, 2, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, payload, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, payload)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, passphrase, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, passphrase)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_http_jwt_signer_hmac_verify, 0, 3, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_http_jwt_signer_hmac_verify, 0, 3, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, source, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, source)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, payload, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, payload)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, passphrase, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, passphrase)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_http_jwt_signer_hmac_gethash, 0, 2, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_http_jwt_signer_hmac_gethash, 0, 2, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, payload, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, payload)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, passphrase, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, passphrase)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_http_jwt_signer_hmac_method_entry) {
	PHP_ME(Phalcon_Http_JWT_Signer_Hmac, __construct, arginfo_phalcon_http_jwt_signer_hmac___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Phalcon_Http_JWT_Signer_Hmac, getAlgHeader, arginfo_phalcon_http_jwt_signer_hmac_getalgheader, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Http_JWT_Signer_Hmac, sign, arginfo_phalcon_http_jwt_signer_hmac_sign, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Http_JWT_Signer_Hmac, verify, arginfo_phalcon_http_jwt_signer_hmac_verify, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Http_JWT_Signer_Hmac, getHash, arginfo_phalcon_http_jwt_signer_hmac_gethash, ZEND_ACC_PRIVATE)
	PHP_FE_END
};
