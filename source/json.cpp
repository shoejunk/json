#include <json/json.h>

#include <log/log.h>

#include <fstream>

using namespace NStk::NLog;

namespace NStk::NJson
{
	CJson::CJson(std::string sFileName)
	{
		std::ifstream oFile(sFileName);

		// Check if the file was opened successfully
		if (!oFile.is_open())
		{
			Log("Failed to open the file!\n");
			return;
		}

		oFile >> m_oJson;
		oFile.close();
		Log("%s\n", m_oJson.dump(4).c_str());
	}
}