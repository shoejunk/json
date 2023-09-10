#include <json/json.h>

#include <log/log.h>

#include <nlohmann/json.hpp>

using namespace NStk::NLog;
using namespace std;

namespace NStk::NJson
{
	CJson::CJson(std::string const&& sFilename)
	{
		nlohmann::json oJson =
		{ 
			{"pi", 3.141},
			{"happy", true},
			{"name", "Niels"},
			{"nothing", nullptr},
			{"answer", {{"everything", 42}}},
			{"list", {1, 0, 2}},
			{"object", {{"currency", "USD"}, {"value", 42.99}}}
		};

		Log("%s\n", oJson.dump().c_str());
	}
}