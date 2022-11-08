

#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

int main() {
    string clock = "\033[35;1mclock\033[0m";
    string spacer = "\033[36;5m----------------\033[0m";
    printf("\n%s\n%s\n", clock.c_str(), spacer.c_str());

    printf("\033[38;1;3m");
    system("date");
    printf("\033[0m");

    printf("%s\n", spacer.c_str());

    return 0;
}
