#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer=0;
    for(int i = 0; i<=n/2; i++)
      answer+=i;
    return answer*2;
}