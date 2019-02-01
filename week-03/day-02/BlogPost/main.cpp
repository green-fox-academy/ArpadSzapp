#include <iostream>
#include "BlogPost.h"

int main(int argc, char * argv[]) {


  BlogPost object1("John Doe",
                   "Lorem Ipsum",
                   "Lorem ipsum dolor sit amet.",
                   "2000.05.04.");
  BlogPost object2("Tim Urban",
                   "Wait but why",
                   "A popular long-form, stick-figure-illustrated blog about almost everything.",
                   "2010.10.10.");
  BlogPost object3("William Turton",
                   "One Engineer Is Trying to Get IBM to Reckon With Trump",
                   "Daniel Hanley, a cybersecurity engineer at IBM, doesnt want to be the center of attention. "
                   "When I asked to take his picture outside one of IBMs New York City offices, "
                   "he told me thathe wasnt really into the whole organizer profile thing.",
                   "2017.03.28.");

  std::cout << object3.authorName <<"\n" <<object3.title <<"\n \n" << object3.text <<"\n" << object3.publicationDate << std::endl;
  return 0;
}