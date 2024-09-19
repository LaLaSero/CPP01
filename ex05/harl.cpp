#include "harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void complain( std::string level )
{
	// メンバ関数ポインタの配列を作成
	typedef void (Harl::*HarlMemFn)(void);
	HarlMemFn functions[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	// 引数levelに応じた関数を呼び出す
	for (int i = 0; i < 4; ++i) {
		if (levels[i] == level) {
			(this->*functions[i])();  // 該当する関数を呼び出す
			return;
		}
	}
	std::cout << "Unknown level: " << level << std::endl;
}
