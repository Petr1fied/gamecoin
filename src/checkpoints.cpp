// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2011-2012 Litecoin Developers
// Copyright (c) 2013 Gamecoin Developers

// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "main.h"
#include "uint256.h"

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    //
    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    //

     static MapCheckpoints mapCheckpoints =
            boost::assign::map_list_of
            ( 0, uint256("0x12a765e31ffd4059bada1e25190f6e98c99d9714d334efa41a195a7e7e04bfe2"))
            ( 1, uint256("0xfdbe99b90c90bae7505796461471d89ae8388ab953997aa06a355bbda8d915cb"))
            ( 2, uint256("0x410e505e871bde603a080b63bf75443ef3af2bbdca34edbe60a2fff77e7b4bcd"))
            ( 3, uint256("0xa4cc92cc1ae0976f0ae1e2cf59a365d784ddd3346e068ef569e8e67e8fbbf9c5"))
            ( 4, uint256("0x0ba163aa1e58360596333f160ed58209a03ba7ff03b2067b04ed3664f97d50c8"))
            ( 5, uint256("0x4d2f9b5502423a48149bfefb40a35ee2081f700ee13eef08621457699561b648"))
            ( 15000, uint256("0xdb0386f2b3c77be8406e5f6e0b0f17d116a20e44ab312d81c78cabdb0a25fdfa"))
            ( 15500, uint256("0x5d056501ff02bf9220fb92f8ef6c5b18f4427216bf0c3e9c0de0ea26a78d6b1c"))
            ( 16000, uint256("0x1238760df809ed04c7c835f2ccc2230f1a12060c4af4ccf4a5076c43b3ec00f6"))
            ( 16500, uint256("0xc1aa0164d8262d606a5345e0b329af0833b1931c066e6ae0cd514d7943fc6e49"))
            ( 17000, uint256("0xa9b9ce5ab12059921ee9fab0e2ede9947181a924e36de5bbb9701e31408c92e3"))
            ( 17500, uint256("0x7ef8701746335ee4ab4c69173aacba0cf17ddce96cdcc8557962e9bc499e76f7"))
            ( 18000, uint256("0x500c4a1edf9ca19a3d7abff3338d45a7e76d28b324dbb212dc5d4dee1cb07cc9"))
            ( 18500, uint256("0x181d8fb8bb94ca4f1147c9d8b3d7ea56d5bcc4145f853e6a4333eb7eb791e812"))
            ( 19000, uint256("0x285c6caac0624e68279cbd60695dccc0f43a69b1be70776dd694befdcc21cac7"))
            ( 19100, uint256("0x47373775b7db1213a9027a741b5225e5b96ef1c2932ba04e9ff178b951838ed1"))
            ( 19200, uint256("0xaebd1cb984fe55090254fbd766275d007863f02a4327a0d655f881e7b8fe5bdd"))
            ( 19264, uint256("0xa8ea7f271fd5c0430df91c9e62604932624bbac96eb8fc015faf284f6a712c4b"))
            ( 19535, uint256("0xc1d075d4de00306b0bf77eae6aa6fdf0bef8c7e93eabc04f5214beca50e2d2f5"))
            ( 19731, uint256("0x39af777b5acb619a599ff9e3f12e6a353c8ebc5545c9c5d35ef090cee7d5cc35"))
            ( 19805, uint256("0xac4acd45bb6c4eb08fbe4751466e1c06118adc040665a7f122b512f6f3688e53"))
            ( 19830, uint256("0xf88ec6bc20df1eeb931a4ecfc209fd0859d74c23a501e6eec854002274ec611d"))
            ( 19972, uint256("0x969c33dce5c3897c9fcbc0d33d0ae1aa19d6339b550ac96b3d746b3bddba8a0a"))
            ( 20003, uint256("0xa5a9ab09a25beb78e931b45a4046ac57a5bbb182698cb3e97ffa5384a99d4e65"))
            ( 20108, uint256("0x7cbf6d6808b8e7dff14a770b32f1b6cc63edbade8ce3b81e7281de22b76ae4a6"))
            ( 20270, uint256("0x210d6716b53dc64144b23b3d7390dee52a54de98b0b5152440d2d3ae5fd7e1e7"))
            ( 20482, uint256("0x6a7bfa6d4a5b3ebd547c99ba634660e005481a5192b816c26eeb39f646625359"))
            ( 20548, uint256("0xf2cf37be0a58fb05aebcd6f4679fe7acac1181a54f8a10a277d7793a3584c079"))
            ( 20705, uint256("0x508f30e0967ba5d62bb18949259818694092cb28f707d75c13b613e3b4e6b4c8"))
            ( 20915, uint256("0xd452579256f2623bc009eecf1fdff46ba55914cb9b4d2bc5dd67d9350f1d933f"))
            ( 21015, uint256("0x903e951109a5740012f1debdaa43a7e2040b32618cc808bf887a4c47baed6799"))
            ( 21402, uint256("0x556c1a35c280e8b062f7cae4f8756dfbef81c9e59b48526799341ca54d965998"))
            ( 22252, uint256("0x371c219358a0987eedae227e9d28a883fbf986b0cd9b971f243dac84abec6dd7"))
            ( 25200, uint256("0x758c898c62a402fdfb2a0c262476b17f503c3dbc076152dadd3a1bc7c9e66b8b"))
            ( 25324, uint256("0xc401488bb82c32b5aa13e794fbd55bffe6daded73a41ce8780c07ad313fae0a5"))
            ( 25487, uint256("0xdd1273f1e0383d8dcb71d219a826ea655f3e697208c53af96929c07866e01a22"))
            ( 25789, uint256("0x6f199efdc913993f38cc032582360f36247d8645db6ffb3cd58335ac88725c0c"))
            ( 26000, uint256("0x0446cc3b2d81b0bc42d575eaccb85d943d83e7fc94f1880423ec81d2cced98d9"))
            ( 26500, uint256("0x7d27f6b5c20ee3314b98576c0d490585d8c0dd44e38b61cf6fc2832367f13664"))
            ( 27000, uint256("0x3a5ea99233e30d44b5a573d58e01a7f259a284eb90bebdba5567616577a84def"))
            ( 27500, uint256("0x51452c0855b08ad987e2326f8023bef8fb4fe5641a9d8695c7fa8898c4efc603"))
            ( 28000, uint256("0xbd753e7d51ff56c0f333ae373d0a97db98f932663809004f75133350981a8462"))
            ( 28500, uint256("0x7d25b57dea930a3c31e4fdef8cba12803197f1ef8a0ffe641ec7760b64722bb4"))
            ( 29000, uint256("0x1ad284c7c74d1a5b443b494c83ccb71a5b44f8001f96876891900885c95b8cc7"))
            ( 30000, uint256("0x121f4d215e065f65f2d9899ef7704c40ec947f6a695ed1cd05df6d1959885ea7"))
            ( 31000, uint256("0xad43f295fd550dc614fcbacc2f3ced67150d9dad0b39502f61f939e686b14365"))
            ( 32000, uint256("0x141e0a99fe5017df212cab6f4d2d3365318887b715f23d2469c75bc16b5a5cb3"))
            ( 33000, uint256("0x9112272d493dbfc65e521e9bd10b32f90538a7598d0722f9e8a22efdc11e4652"))
            ( 34000, uint256("0xf9bd899e4fe921ae4d33e4c1faa695c914467fd9d07353c8fd0c9034bc3d08c7"))
            ( 35000, uint256("0x2af851315da7fe51b71c7f547dd7098322a946ad44ffa8dc1df355f2464c3af2"))
            ( 36000, uint256("0x862139855a0f20b4b61b10a10ed320230cbab0d42d91926cca32a0bc1e93e79f"))
            ( 37000, uint256("0xbdf93d9fa81f55595f5f97a017c3bb0815f7504a6812ef61f1432016a9f7ed63"))
            ( 38000, uint256("0x55484747e2e79f25cee94a2823ea2e7fcae349e69dd650565b6e36a49a25cef4"))
            ( 39000, uint256("0x90e5d8588388d47f91697c5e60a462f0dccc807edd124b44622a5f41f396e7fd"))
            ( 40000, uint256("0xab40caf91b803e218926372fd8a5eaef984f78f0198eb6a246c857ee8a702640"))
            ( 41000, uint256("0xec2dc8b3dd1de3d5c7422988d79da861cc7d6bf9e7f3556b706206cc93c8941b"))
            ( 42000, uint256("0x084322347e6b32d71ad5840e083eba9f6f5f9f980cdb7f3910be4e687c6fc5af"))
            ( 43000, uint256("0x0e9921058d423c6e3ee6a7ef88e38e8b53d66f522ad5ec52340b565ea0eb0d6b"))
            ( 44000, uint256("0xb35db9ccfa3caab8250ba652e4b8324d6e92f2c0710cdde777f1647bf872e9f9"))
            ( 45000, uint256("0xaef97fd4e55d84a161d95c8fc14b8a565c16f987d17dce9997c42d7760e8f19f"))
            ( 46000, uint256("0x10f4b3b1f4dd4b3f2207cde4240d81b53106d929512500a4664e86832deba3df"))
            ( 47000, uint256("0x0bdd9b57495f97425d01e30565085450c14e63d376a8056581d50fe232124d9b"))
            ( 48000, uint256("0x0c42032be8d84069a860ee3708c0866f0f752409239c77b0ecb81c7e1ba6939a"))
            ( 48500, uint256("0x904c8fe3f473d70efa6b68409f0b72f439b0fb0d46785a3e82d6e9176973d351"))
            ( 49000, uint256("0x0e3c029b4b34ce87b1c5369d8ba02fbf8a646f91775ec9de983fb9daec3c0819"))
            ( 49500, uint256("0x521434565de7c4f5e4149cb2f31b33bf11df02da4629c5e5b088e1060628fc01"))
            ( 50000, uint256("0x2978e6aed90f4fce86bfe0f1cff53b2dd701b3b6262e5bf9d05040f643bc8de7"))
            ( 50500, uint256("0xb44eba69e6d9ea00071d1ade3bc29e5a84e14c58647c3470d3603be88e85c15c"))
            ( 51000, uint256("0xbbd2bc633a522d3679ffff104f10428ea20b273e11103f31a33f36c19099b8dc"))
            ( 52000, uint256("0x5b731e283666c40a51c0bbb49abe423cbdbe138ee37332620d4c647c0e1cf318"))
            ( 53000, uint256("0xe813229322adcab000e61b33ff34404ddd5f136e5242b6d6ce9bc0e0853683f8"))
            ( 54000, uint256("0x79e2bdb6759e861e410a2795a90d8ea1e2cba6097ad347c530a608893b1b41d3"))
            ( 55000, uint256("0x97bf24061c9df461bc506612bd49611d1a8039fe414f34790e9309ba7a669c9e"))
            ( 56000, uint256("0xee1c011bea3a6444ca95ad1f14aef47ee7737265689f724e10dfa2f09a0e46d6"))
            ( 57000, uint256("0x76fd160ad0116ecc3c3e5c790c59de2f5e3f610ad577e6106818c3640ba5d2e9"))
            ( 58000, uint256("0xb6ff4ae7ac197fdb567226a285b906c6187bf483960835a0a92f047e0be6a33e"))
            ( 59000, uint256("0x8c31d5fa13633dc3f9359dd1e235752911cdc90cc106393dde87cb2d34624a52"))
            ( 60000, uint256("0xd1b2c60cc1b8f449621936d545ce9238ccea5ea9cfd157d4329bc4d276f052df"))
            ( 61000, uint256("0x449654841487121679bc6eacb9cde37a6d2b9000f9aa9a727b92194286fe8072"))
            ( 61500, uint256("0x4b203839d7bf26a8776e532c5eef986090ec82d1bd5581873f3e3f4ebcee2c32"))
            ( 62000, uint256("0xc36ce6e9cecbc5193fb16ef463ebb547096faf2fc33c89e4ec7ae1b62e3bf283"))
            ( 62400, uint256("0xea33b384891aa165e3fbbfaf90e536d7ce8bf63ac8d41b8394b2fd62a40062ce"))
            ( 62550, uint256("0x1fe7ed527b934add0eb6e2e8de69030e093ea8b10200bb5175835beee157e453"))
            ( 63380, uint256("0xb442f0d8bf9cfa9fd1bc102af28c2f6e3aae2099f1417e0358f875f70788f271"))
            ( 63999, uint256("0x09e6e091b78ef2b790aba6ea7cdc37a2cb125bc217a1fbeda52538e76141ad98"))
            ( 64000, uint256("0xf9b6ac468f08d727c18a39330d706e89c986ce2bedd6b5855c8574597330e857"))
            ( 64500, uint256("0x2e75882cf1212fadc74b148a997c2e1b9c09953c84bd62f049dd712b6fa0ec4a"))
            ( 65000, uint256("0x0195e50f42aa57ea67e536a25b54633a59ea8a47973ab928b2d7f884172805a6"))
            ( 65500, uint256("0x859fab8f0f6d74f93ba30844cbf9a2517fa7b03db28249289178401f4f10c560"))
            ( 66000, uint256("0xa82c57a806cc203ae2e255f652b1b29073919f10dfc19fabb139c75aba246928"))
            ( 66500, uint256("0xc4265efd9895a43021e206d79bfb64e130c7761fd8b63ee92b41fe2bf58d4919"))
            ( 67000, uint256("0xc64e5d65e20e83fd8da9ad918f7b60bb4920a0ba964e7d66e357cf0fee080c18"))
            ( 67800, uint256("0x6111552b8acb4fa6354839af319ec9f8eb39cf4c1252ebc008ca77defa15fa09"))
            ( 68000, uint256("0xab9593dfb248b67c740c38e5d2128f603b297ac83043aceb45df69c8fcd028cd"))
            ( 68500, uint256("0x70e068a50d5f66d2c7a042cdbad26183a605c756aece8dc3985314682dab8591"))
            ( 69000, uint256("0x6d66788ccfd69640e62c2542e0f629c154f84df8cd37c9d4a376723a35daa0fc"))
            ( 69500, uint256("0x142fa652d52e4fe61030b085e3c623f9adc36d44e3253d1b6f249c774b91767f"))
            ( 70000, uint256("0x9054f25771dcaa809817b166f0143dcd26d6c24511042658c44d38b2a0f38e8d"))
            ( 70500, uint256("0x456e12d9b08933e1a0cd6fe4e3c35498a2cfbc57651caf8f8e24b14d30a44751"))
            ( 71000, uint256("0xcf7890b6a21d484e48c292c87df6377fa0b93cb1919897bd006a504a86b1c6d3"))
            ( 71500, uint256("0x941eaead60697e1174a7ad40e04af1d6b6f7178b58ae54868fd34e707b68c032"))
            ( 72000, uint256("0x74f4fb3d792191bc051dd87e393d701257d975f66aa425d3d790d70f1ffea31c"))
            ( 72500, uint256("0x213127e754f41d4dca454c9051607def7c4c2d5ee4de710dc79dc4ae65cb8df3"))
            ( 75000, uint256("0x57a32a80ab1b2a6a9b0e366e0e8083a4a812ef6f5706c65f18fe0884bf36996d"))
            ( 77500, uint256("0x99ea893c25c60d8b8793377a35810d5b75079f47d20e440686c207b122f808a8"))
            ( 80000, uint256("0xbb7ce8e3ff6b27358a3a7f98d8cb6dc4d0c824b03f6636d28c2ffc8a66c21938"))
            ( 82500, uint256("0xd51c05eb59798482fc87d894fdb81ffc15e31ad2c0abffa4385ada6f487ec572"))
            ( 85000, uint256("0xbd592a20171b9ad06629bbaa287b89b367365caafe6efa781e3aaf3574eb2b4a"))
            ( 87500, uint256("0x37dcb5cef72596b843acd28cdc3fa020ff2d3bbcf5d0052f466d6bba5f90f4c3"))
            ( 90000, uint256("0xbeb2d67f6e6ac2b2e066df7aba80db9076eab91701c8a55b3c1d56326080c823"))
            ( 92500, uint256("0xe44b764a8add361f397037909cc473a4999f935383fd48678b78e1e22ed10ebd"))
            ( 95000, uint256("0x86f93b0eb9948f8c8e18720ea890a27a9278544f8643428f69f1557e25d2ba00"))
            ( 97500, uint256("0xc2cd7688dc4d33ab83acbbcaa39c3aec8abfae33b4446d7f4f43b59d66bee7e2"))
            ( 100000, uint256("0x0d567e56493db555a8b1b0b52374141d0513618753ea8b436502973b3ee762c8"))
            ( 102500, uint256("0xb3a48aa6ca19fa4d989ca062e2dc8eb251ab8d1d42f441eadb75361b5e570a81"))
             ;



    bool CheckBlock(int nHeight, const uint256& hash)
    {
        if (fTestNet) return true; // Testnet has no checkpoints

        MapCheckpoints::const_iterator i = mapCheckpoints.find(nHeight);
        if (i == mapCheckpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        if (fTestNet) return 0;
        return mapCheckpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        if (fTestNet) return NULL;

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, mapCheckpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }
}
