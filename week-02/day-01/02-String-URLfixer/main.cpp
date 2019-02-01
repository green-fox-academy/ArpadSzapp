#include <iostream>
#include <string>

int main(int argc, char *args[])
{

    std::string url("https//www.reddit.com/r/nevertellmethebots");

    std::string urlfix("https//www.");
    std::string urlfix2("bots");

    int start = url.find(urlfix);
    int start2 = url.find(urlfix2);

    if (start == std::string::npos) {
        std::cout << "cannot replace" << std::endl;
    } else {

        url.replace(start, urlfix.length(), "https://www.");

        if (start2 == std::string::npos) {
            std::cout << "cannot replace" << std::endl;

        } else {
            url.replace(start2, urlfix2.length(), "odds");
        }
    }


    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"

    // Also, the URL is missing a crucial component, find out what it is and insert it too!

    std::cout << url << std::endl;

    return 0;

}