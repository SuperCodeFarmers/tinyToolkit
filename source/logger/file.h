#ifndef __LOGGER__FILE__H__
#define __LOGGER__FILE__H__


/**
 *
 *  作者: hm
 *
 *  说明: 文件处理
 *
 */


#include "../common/macro.h"
#include "../common/symbol.h"


#if PLATFORM_TYPE == PLATFORM_WINDOWS
#
#  include <fstream>
#
#elif PLATFORM_TYPE == PLATFORM_APPLE
#
#  include <fstream>
#
#elif PLATFORM_TYPE == PLATFORM_LINUX
#
#  include <fstream>
#
#endif


namespace logger
{
	class API_TYPE File
	{
	public:
		/**
		 *
		 * 析构函数
		 *
		 */
		~File();

		/**
		 *
		 * 关闭
		 *
		 */
		void Close();

		/**
		 *
		 * 刷新
		 *
		 */
		void Flush();

		/**
		 *
		 * 写入
		 *
		 * @param content 内容
		 *
		 */
		void Write(const std::string & content);

		/**
		 *
		 * 打开
		 *
		 * @param path 路径
		 * @param truncate 是否截断
		 *
		 * @return 是否打开成功
		 *
		 */
		bool Open(const std::string & path, bool truncate = false);

		/**
		 *
		 * 是否已经打开
		 *
		 * @return 是否已经打开
		 *
		 */
		bool IsOpen();

		/**
		 *
		 * 大小
		 *
		 * @return 大小
		 *
		 */
		std::size_t Size();

		/**
		 *
		 * 路径
		 *
		 * @return 路径
		 *
		 */
		const std::string & Path() const;

	private:
		std::size_t _size{ 0 };

		std::string _path{ };

		std::ofstream _file{ };
	};
}


#endif // __LOGGER__FILE__H__
