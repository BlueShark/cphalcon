
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2013 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

extern zend_class_entry *phalcon_forms_element_ce;

PHALCON_INIT_CLASS(Phalcon_Forms_Element);

PHP_METHOD(Phalcon_Forms_Element, __construct);
PHP_METHOD(Phalcon_Forms_Element, setForm);
PHP_METHOD(Phalcon_Forms_Element, getForm);
PHP_METHOD(Phalcon_Forms_Element, setName);
PHP_METHOD(Phalcon_Forms_Element, getName);
PHP_METHOD(Phalcon_Forms_Element, addValidators);
PHP_METHOD(Phalcon_Forms_Element, addValidator);
PHP_METHOD(Phalcon_Forms_Element, getValidators);
PHP_METHOD(Phalcon_Forms_Element, prepareAttributes);
PHP_METHOD(Phalcon_Forms_Element, setAttribute);
PHP_METHOD(Phalcon_Forms_Element, setAttributes);
PHP_METHOD(Phalcon_Forms_Element, getAttributes);
PHP_METHOD(Phalcon_Forms_Element, setLabel);
PHP_METHOD(Phalcon_Forms_Element, getLabel);
PHP_METHOD(Phalcon_Forms_Element, __toString);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_forms_element___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, attributes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_forms_element_setform, 0, 0, 1)
	ZEND_ARG_INFO(0, form)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_forms_element_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_forms_element_addvalidators, 0, 0, 1)
	ZEND_ARG_INFO(0, validators)
	ZEND_ARG_INFO(0, merge)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_forms_element_addvalidator, 0, 0, 1)
	ZEND_ARG_INFO(0, validator)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_forms_element_prepareattributes, 0, 0, 1)
	ZEND_ARG_INFO(0, attributes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_forms_element_setattribute, 0, 0, 2)
	ZEND_ARG_INFO(0, attribute)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_forms_element_setattributes, 0, 0, 1)
	ZEND_ARG_INFO(0, attributes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_forms_element_setlabel, 0, 0, 1)
	ZEND_ARG_INFO(0, label)
ZEND_END_ARG_INFO()

PHALCON_INIT_FUNCS(phalcon_forms_element_method_entry){
	PHP_ME(Phalcon_Forms_Element, __construct, arginfo_phalcon_forms_element___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Forms_Element, setForm, arginfo_phalcon_forms_element_setform, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, getForm, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, setName, arginfo_phalcon_forms_element_setname, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, getName, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, addValidators, arginfo_phalcon_forms_element_addvalidators, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, addValidator, arginfo_phalcon_forms_element_addvalidator, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, getValidators, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, prepareAttributes, arginfo_phalcon_forms_element_prepareattributes, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, setAttribute, arginfo_phalcon_forms_element_setattribute, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, setAttributes, arginfo_phalcon_forms_element_setattributes, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, getAttributes, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, setLabel, arginfo_phalcon_forms_element_setlabel, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, getLabel, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Forms_Element, __toString, NULL, ZEND_ACC_PUBLIC) 
	PHP_FE_END
};

