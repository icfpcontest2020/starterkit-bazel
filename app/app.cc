#include <iostream>
#include <string>

#include <cpr/cpr.h>

int main(int argc, char* argv[]) {
    const std::string server_url{argv[1]};
    const std::string player_key{argv[2]};

    std::cout << "ServerUrl: " << server_url << "; PlayerKey: " << player_key << std::endl;

    auto res = cpr::Post(cpr::Url{argv[1]},
                         cpr::Body{argv[2]},
                         cpr::Header{{"Content-Type", "text/plain"}});
    if (res.status_code != 200) {
        std::cout << "Unexpected server response:\nHTTP code: " << res.status_code << "\nResponse body: " << res.text << std::endl;
        return 2;
    }
    std::cout << "Server response: " << res.text << std::endl;
    return 0;
}
