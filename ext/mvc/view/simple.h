
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
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

extern zend_class_entry *phalcon_mvc_view_simple_ce;

PHALCON_INIT_CLASS(Phalcon_Mvc_View_Simple);

PHP_METHOD(Phalcon_Mvc_View_Simple, __construct);
PHP_METHOD(Phalcon_Mvc_View_Simple, setViewsDir);
PHP_METHOD(Phalcon_Mvc_View_Simple, getViewsDir);
PHP_METHOD(Phalcon_Mvc_View_Simple, registerEngines);
PHP_METHOD(Phalcon_Mvc_View_Simple, _loadTemplateEngines);
PHP_METHOD(Phalcon_Mvc_View_Simple, _internalRender);
PHP_METHOD(Phalcon_Mvc_View_Simple, render);
PHP_METHOD(Phalcon_Mvc_View_Simple, partial);
PHP_METHOD(Phalcon_Mvc_View_Simple, setCacheOptions);
PHP_METHOD(Phalcon_Mvc_View_Simple, getCacheOptions);
PHP_METHOD(Phalcon_Mvc_View_Simple, _createCache);
PHP_METHOD(Phalcon_Mvc_View_Simple, getCache);
PHP_METHOD(Phalcon_Mvc_View_Simple, cache);
PHP_METHOD(Phalcon_Mvc_View_Simple, setParamToView);
PHP_METHOD(Phalcon_Mvc_View_Simple, setVars);
PHP_METHOD(Phalcon_Mvc_View_Simple, setVar);
PHP_METHOD(Phalcon_Mvc_View_Simple, getVar);
PHP_METHOD(Phalcon_Mvc_View_Simple, getParamsToView);
PHP_METHOD(Phalcon_Mvc_View_Simple, setContent);
PHP_METHOD(Phalcon_Mvc_View_Simple, getContent);
PHP_METHOD(Phalcon_Mvc_View_Simple, getActiveRenderPath);
PHP_METHOD(Phalcon_Mvc_View_Simple, __set);
PHP_METHOD(Phalcon_Mvc_View_Simple, __get);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple_setviewsdir, 0, 0, 1)
	ZEND_ARG_INFO(0, viewsDir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple_registerengines, 0, 0, 1)
	ZEND_ARG_INFO(0, engines)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple_render, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple_partial, 0, 0, 1)
	ZEND_ARG_INFO(0, partialPath)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple_setcacheoptions, 0, 0, 1)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple_cache, 0, 0, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple_setparamtoview, 0, 0, 2)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple_setvars, 0, 0, 1)
	ZEND_ARG_INFO(0, params)
	ZEND_ARG_INFO(0, merge)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple_setvar, 0, 0, 2)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple_getvar, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple_setcontent, 0, 0, 1)
	ZEND_ARG_INFO(0, content)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple___set, 0, 0, 2)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_view_simple___get, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

PHALCON_INIT_FUNCS(phalcon_mvc_view_simple_method_entry){
	PHP_ME(Phalcon_Mvc_View_Simple, __construct, arginfo_phalcon_mvc_view_simple___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Mvc_View_Simple, setViewsDir, arginfo_phalcon_mvc_view_simple_setviewsdir, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, getViewsDir, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, registerEngines, arginfo_phalcon_mvc_view_simple_registerengines, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, _loadTemplateEngines, NULL, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Mvc_View_Simple, _internalRender, NULL, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Mvc_View_Simple, render, arginfo_phalcon_mvc_view_simple_render, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, partial, arginfo_phalcon_mvc_view_simple_partial, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, setCacheOptions, arginfo_phalcon_mvc_view_simple_setcacheoptions, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, getCacheOptions, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, _createCache, NULL, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Mvc_View_Simple, getCache, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, cache, arginfo_phalcon_mvc_view_simple_cache, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, setParamToView, arginfo_phalcon_mvc_view_simple_setparamtoview, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, setVars, arginfo_phalcon_mvc_view_simple_setvars, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, setVar, arginfo_phalcon_mvc_view_simple_setvar, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, getVar, arginfo_phalcon_mvc_view_simple_getvar, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, getParamsToView, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, setContent, arginfo_phalcon_mvc_view_simple_setcontent, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, getContent, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, getActiveRenderPath, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, __set, arginfo_phalcon_mvc_view_simple___set, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_View_Simple, __get, arginfo_phalcon_mvc_view_simple___get, ZEND_ACC_PUBLIC) 
	PHP_FE_END
};

