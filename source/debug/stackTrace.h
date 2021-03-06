#ifndef __DEBUG__STACK_TRACE__H__
#define __DEBUG__STACK_TRACE__H__


/**
 *
 *  作者: hm
 *
 *  说明: 堆栈信息
 *
 */


#include "../common/macro.h"
#include "../common/symbol.h"


#if PLATFORM_TYPE == PLATFORM_WINDOWS
#
#  include <string>
#
#elif PLATFORM_TYPE == PLATFORM_APPLE
#
#  include <string>
#
#elif PLATFORM_TYPE == PLATFORM_LINUX
#
#  include <string>
#
#endif


namespace debug
{
	class API_TYPE StackTrace
	{
	public:
		/**
		 *
		 * 内容
		 *
		 * @return 内容
		 *
		 */
		static std::string Content();
	};
}


#endif // __DEBUG__STACK_TRACE__H__
