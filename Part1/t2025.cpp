#include <iostream>

int main() {

    //in - РєРѕР»РёС‡РµСЃС‚РІРѕ С‚РµСЃС‚РѕРІ
    int in;
    std::cin >> in;

    for (int i = 0; i < in; ++i) {

        // k - РєРѕР»РёС‡РµСЃС‚РІРѕ РєРѕРјР°РЅРґ n - РєРѕР»РёС‡РµСЃС‚РІРѕ Р»СЋРґРµР№ РІСЃРµРіРѕ
        long int n, k;
        std::cin >> n >> k;

        // РєРѕР»РёС‡РµСЃС‚РІРѕ Р»СЋРґРµР№ РІ РѕР±С‹С‡РЅРѕР№ РєРѕРјР°РЅРґРµ
        long numberOfRegularTeam = n/k;

        // РєРѕР»РёС‡РµСЃС‚РІРѕ Р»СЋРґРµР№, РєРѕС‚РѕСЂС‹Рµ РЅРµ РІРѕС€Р»Рё СЃС‚Р°РЅРґР°СЂС‚РЅС‹Рµ РєРѕРјР°РЅРґС‹ (РєРѕР»РёС‡РµСЃС‚РІРѕ СЂР°СЃС€РёСЂРµРЅРЅС‹С… РєРѕРјР°РЅРґ)
        long numberOfTeamless = n % k;

        // РєРѕР»РёС‡РµСЃС‚РІРѕ Р»СЋРґРµР№ РІ СѓРІРµР»РёС‡РµРЅРЅРѕР№ РєРѕРјР°РЅРґРµ
        long numberOfExtendedTeam = numberOfRegularTeam + 1;

        // РєРѕР»РёС‡РµСЃС‚РІРѕ Р±РѕС‘РІ
        long result = ((k - numberOfTeamless) *
                       numberOfRegularTeam * (n - numberOfRegularTeam) +
                       numberOfTeamless * numberOfExtendedTeam *
                       (n - numberOfExtendedTeam)) / 2;
        std::cout << result << std::endl;
    }
    return 0;
}
