#include <iostream>

std::string getDataFromServer(string url) {
    std::string command = "curl " + url; // 서버에서 데이터를 받아오는 명령어 (예시로 curl 사용)
    std::string result;

    FILE* pipe = popen(command.c_str(), "r"); // 시스템 명령어 실행

    if (pipe) {
        char buffer[128];
        while (!feof(pipe)) {
            if (fgets(buffer, 128, pipe) != NULL) {
                result += buffer;
            }
        }
        pclose(pipe);
    }

    return result;
}