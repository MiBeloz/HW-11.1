#pragma once

#include <string>


namespace GreeterLibraryStatic {
	class Greeter {
	public:
		/// <summary>
		///Принимает на вход имя и возвращает имя с приветствием
		/// </summary>
		std::string greet(const std::string _name);
	};
}
