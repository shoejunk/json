export module Json;

import Log;
import <fstream>;
import <nlohmann/json.hpp>;

using namespace NStk::NLog;
using namespace std;

namespace NStk::NJson
{
	export class CJson
	{
	public:
		CJson(string sFileName)
		{
			ifstream oFile(sFileName);

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

	private:
		nlohmann::json m_oJson;
	};
}