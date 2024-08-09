#include <curl/curl>
#include <iostream>
#include <string>

// Callback function to handle the response
size_t write_callback(char *ptr, size_t size, size_t nmemb, std::string *data) {
    data->append(ptr, size * nmemb);
    return size * nmemb;
}

int main() {
    CURL *curl = curl_easy_init();
    if (curl) {
        std::string response;
        curl_easy_setopt(curl, CURLOPT_URL, "https://www.google.com/");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        CURLcode result = curl_easy_perform(curl);
        if (result == CURLE_OK) {
            std::cout << "Response: " << response << std::endl;
        } else {
            std::cerr << "Error: " << curl_easy_strerror(result) << std::endl;
        }
        curl_easy_cleanup(curl);
    }
    return 0;
}