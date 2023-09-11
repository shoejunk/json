#pragma once

#include <string>

#include <nlohmann/json.hpp>

namespace NStk::NJson
{
	class CJson
	{
	public:
		CJson(std::string sFileName);

	private:
		nlohmann::json m_oJson;
	};
}
