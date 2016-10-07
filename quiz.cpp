#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;
int main()
{
      istringstream input_string("Don't nod!\nDogma: I am God\nNever odd or even\nToo bad – I hid a boot\nRats live on no evil star but in our house\nNo trace; not one carton\nWas it Eliot's toilet I saw?\nMurder for a jar of red rum\nMay a moody baby doom a yam?\nGo hang a salami; I'm a lasagna hog!\nSatan, oscillate my metallic sonatas!\nA Toyota! Race fast... safe car: a Toyota\nStraw? No, too stupid a fad; I put soot on warts\nAre we not drawn onward, we few, drawn onward to new era?\nDoc Note: I dissent. A fast never prevents a fatness. I diet on cod\nNo, it never propagates if I set a gap or prevention\nAnne, I vote more cars race Rome to Vienna\nSums are not set as a test on Erasmus\nKay, a red nude, peeped under a yak\nSome men interpret nine memos\nCampus Motto: Bottoms up, Mac\nGo deliver a dare, vile dog!\nMadam, in Eden I'm Adam\nOozy rat in a sanitary zoo\nAh, Satan sees Natasha\nLisa Bonet ate no basil\nDo geese see God?\nGod saw I was dog\nDennis sinned\nnurses run");
				string value;
				while(getline(input_string, value))
				{
								string reverse_str, temp_str;
								temp_str = value;
								for(int i = value.size() - 1; i >= 0; --i)
								{
												if(isalnum(value[i]))
												{
															char lower_case = tolower(value[i]);
																reverse_str = reverse_str + lower_case;
																temp_str[i] = lower_case;
																
												}
												else
												{
																temp_str.erase(i, 1);
												}
												
												
												
								}
								if(temp_str == reverse_str)
								cout << value << ":   " << "is a palindrome.\n";
								else
								{
											cout << value << ":   " << "is not palindrome.\n";	
								}
								
								
								
				}
				
				
}