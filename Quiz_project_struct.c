#include <stdio.h>
#include <string.h>

struct ques             //creating a structure for questions for the quiz
    {
        char ques[200];    
        char opt1[50];
        char opt2[50];
        char opt3[50];
        char opt4[50];
    };
    
    typedef struct ques question;

  void Science(){
  char a[30];
  char s[5];  

    int score=0;
    question q1={"1. Electric bulb filament is made of","a. Copper","b. Aluminium","c. Lead","d.Tungsten"};
    printf("%s\n%s \t %s\n%s \t %s\n", q1.ques,q1.opt1,q1.opt2,q1.opt3,q1.opt4);
    printf("Enter your choice: ");
    scanf("%s", s); getchar();
    
    if(s[0]=='d'||s[0]=='D'){
    printf("correct answer!!");
    printf("\nyour score is:%d", ++score);
    }

    else {
    printf("wrong answer!");
    printf("\nyour score is:%d", score);
    }

    question q2={"\n2. Which of the following is a non metal that remains liquid at room temperature?","a. Phosphorus","b. Bromine","c. Chlorine","d.Helium"};
    printf("%s\n%s \t %s\n%s \t %s\n", q2.ques,q2.opt1,q2.opt2,q2.opt3,q2.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[1]); getchar();
    if(a[1]=='b'||a[1]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q3={"\n3. Chlorophyll is a naturally occuring chelate compound in which center metal atom is","a. Copper","b.Magnesium","c. Iron","d.Calcium"};
    printf("%s\n%s \t %s\n%s \t %s\n", q3.ques,q3.opt1,q3.opt2,q3.opt3,q3.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[2]); getchar();
    if(a[2]=='b'||a[2]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q4={"\n4.Brass gets discoloured in air because of the presence of which of the following gases in air?","a.Oxygen ","b. Hydrogen sulphide","c.  Carbon dioxide","d.Nitrogen"};
    printf("%s\n%s \t %s\n%s \t %s\n", q4.ques,q4.opt1,q4.opt2,q4.opt3,q4.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[3]); getchar();
    if(a[3]=='b'||a[3]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q5={"\n5.Which among the following Vitamin is added to the milk in some countries as it is lost during the process of Fat Removal (Skimming)?","a.Vitamin A ","b. Vitamin B","c. Vitamin C","d.Vitamin D"};
    printf("%s\n%s \t %s\n%s \t %s\n", q5.ques,q5.opt1,q5.opt2,q5.opt3,q5.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[4]); getchar();
    if(a[4]=='a'||a[4]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q6={"\n6.  Which of the following algae is used to make iodine?","a. Macrocystis","b.Surgassum","c.Synechococcus","d.Anabina"};
    printf("%s\n%s \t %s\n%s \t %s\n", q6.ques,q6.opt1,q6.opt2,q6.opt3,q6.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[5]); getchar();
    if(a[5]=='a'||a[5]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q7={"\n7.What is another name for cyanobacteria?","a.Blue-green algae","b.Protists","c.Golden algae","d.Slime moulds"};
    printf("%s\n%s \t %s\n%s \t %s\n", q7.ques,q7.opt1,q7.opt2,q7.opt3,q7.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[6]); getchar();
    if(a[6]=='a'||a[6]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score); 

    question q8={"\n8. The Alkali metals are called good reducing agents. This implies that__:","a.They easily capture electrons","b.They are not stable at room temperature","c.They easily lose electrons","d.They don't act with dilute acids"};
    printf("%s\n%s \t %s\n%s \t %s\n", q8.ques,q8.opt1,q8.opt2,q8.opt3,q8.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[7]); getchar();
    if(a[7]=='c'||a[7]=='C'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  

    question q9={"\n9.A passenger in a moving bus is thrown forward when the bus suddenly stops. This is explained","a.By Newton's first Law","b.By Newton's Second Law","c.By Newton's Third Law","d.By the principle of conservation of momentum"};
    printf("%s\n%s \t %s\n%s \t %s\n", q9.ques,q9.opt1,q9.opt2,q9.opt3,q9.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[8]); getchar();
    if(a[8]=='a'||a[8]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  


    question q10={"\n10. Ribosomes are sites for","a.Protein Synthesis","b.Photosynthesis","c.Fat Synthesis","d.Respiration "};
    printf("%s\n%s \t %s\n%s \t %s\n", q10.ques,q10.opt1,q10.opt2,q10.opt3,q10.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[9]); getchar();
    if(a[9]=='a'||a[9]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!\n");
    printf("\nyour FINAL score is:%d", score);    
  }

    void Maths(){
    char a[30] = {'a', 'a', 'b', 'b', 'a', 'a', 'a', 'c', 'a', 'a'}; 
    char s[5];     
    int score=0;
    
    question q1={"1. 121 Divided by 11 is ","a.11","b. 10","c.9","d.8"};
    printf("%s\n%s \t %s\n%s \t %s\n", q1.ques,q1.opt1,q1.opt2,q1.opt3,q1.opt4);
    printf("Enter your choice: ");
    scanf("%s", s); getchar();
    
    if(s[0] == a[0]){
        printf("correct answer!!");
        printf("\nyour score is:%d", ++score);
    }

    else {
    printf("wrong answer!");
    printf("\nyour score is:%d", score);
    }
    question q2={"\n2.  60 Times of 8 Equals to","a. 480","b. 300","c. 250","d.400"};
    printf("%s\n%s \t %s\n%s \t %s\n", q2.ques,q2.opt1,q2.opt2,q2.opt3,q2.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[1]); getchar();
    
    if(a[1]=='a'||a[1]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q3={"\n3. Find the Missing Term in Multiples of 6 : 6, 12, 18, 24, _, 36, 42, _ 54, 60.","a. 32, 45","b. 30, 48","c. 24, 40","d.25, 49"};
    printf("%s\n%s \t %s\n%s \t %s\n", q3.ques,q3.opt1,q3.opt2,q3.opt3,q3.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[2]); getchar();
    if(a[2]=='b'||a[2]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q4={"\n4.What is the Next Prime Number after 7 ?","a. 13 ","b. 11","c. 14","d. 12"};
    printf("%s\n%s \t %s\n%s \t %s\n", q4.ques,q4.opt1,q4.opt2,q4.opt3,q4.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[3]); getchar();
    if(a[3]=='b'||a[3]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q5={"\n5 The Product of 131 x 0 x 300 x 4","a. 0 ","b. 46","c. 45","d. 11"};
    printf("%s\n%s \t %s\n%s \t %s\n", q5.ques,q5.opt1,q5.opt2,q5.opt3,q5.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[4]); getchar();
    if(a[4]=='a'||a[4]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q6={"\n6. 23 + 3 / 3","a. 24","b. 23","c. 25","d. 26"};
    printf("%s\n%s \t %s\n%s \t %s\n", q6.ques,q6.opt1,q6.opt2,q6.opt3,q6.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[5]); getchar();
    if(a[5]=='a'||a[5]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q7={"\n7. What is 6% Equals to","a. 0.06","b. 0.6","c. 0.0006","d. 6"};
    printf("%s\n%s \t %s\n%s \t %s\n", q7.ques,q7.opt1,q7.opt2,q7.opt3,q7.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[6]); getchar();

    if(a[6]=='a'||a[6]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score); 

    question q8={"\n8. How Many Years are there in a Decade?","a.5","b. 14","c. 10","d. 12"};
    printf("%s\n%s \t %s\n%s \t %s\n", q8.ques,q8.opt1,q8.opt2,q8.opt3,q8.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[7]); getchar();
    if(a[7]=='c'||a[7]=='C'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  

    question q9={"\n9. How Many Months Have 120 Days?","a. 4","b. 40","c.6","d. 2"};
    printf("%s\n%s \t %s\n%s \t %s\n", q9.ques,q9.opt1,q9.opt2,q9.opt3,q9.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[8]); getchar();
    if(a[8]=='a'||a[8]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  


    question q10={"\n10. How Many Sides are there in a Decagon?","a. 10","b. 12","c. 8","d. 9"};
    printf("%s\n%s \t %s\n%s \t %s\n", q10.ques,q10.opt1,q10.opt2,q10.opt3,q10.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[9]); getchar();
    if(a[9]=='a'||a[9]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);    
  }

    void GK(){
    char a[30] = {'a', 'a', 'b', 'b', 'd', 'b', 'a', 'a', 'a', 'b', 'c'};    
    char s[5];  //final
    int score=0;
    
    question q1={"1.Grand Central Terminal, Park Avenue, New York is the world's","a. largest railway station","b. highest railway station","c.longest railway station","d.None of the above"};
    printf("%s\n%s \t %s\n%s \t %s\n", q1.ques,q1.opt1,q1.opt2,q1.opt3,q1.opt4);
    printf("Enter your choice: ");
    scanf("%s", s); getchar();
    
    if(s[0]==a[0]){
        printf("correct answer!!");
        printf("\nyour score is:%d", ++score);
    }

    else {printf("wrong answer!");
    printf("\nyour score is:%d", score);
    }

    question q2={"\n2.First Afghan War took place in","a.1839","b.1843","c. 1833","d.1848"};
    printf("%s\n%s \t %s\n%s \t %s\n", q2.ques,q2.opt1,q2.opt2,q2.opt3,q2.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[1]); getchar();
    if(a[1]=='a'||a[1]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q3={"\n3. Eritrea, which became the 182nd member of the UN in 1993, is in the continent of","a.Asia","b.Africa","c. Europe","d.Australia"};
    printf("%s\n%s \t %s\n%s \t %s\n", q3.ques,q3.opt1,q3.opt2,q3.opt3,q3.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[2]); getchar();
    if(a[2]=='b'||a[2]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q4={"\n4.Garampani sanctuary is located at","a. Junagarh, Gujarat","b. Diphu, Assam","c. Kohima, Nagaland","d. Gangtok, Sikkim"};
    printf("%s\n%s \t %s\n%s \t %s\n", q4.ques,q4.opt1,q4.opt2,q4.opt3,q4.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[3]); getchar();
    if(a[3]=='b'||a[3]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q5={"\n5.For which of the following disciplines is Nobel Prize awarded?","a.Physics and Chemistry","b. Physiology or Medicine","c. Literature, Peace and Economics","d.All of the above"};
    printf("%s\n%s \t %s\n%s \t %s\n", q5.ques,q5.opt1,q5.opt2,q5.opt3,q5.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[4]); getchar();
    if(a[4]=='d'||a[4]=='D'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q6={"\n6. Hitler party which came into power in 1933 is known as","a.Labour Party","b.Nazi Party","c. Ku-Klux-Klan","d.Democratic Party"};
    printf("%s\n%s \t %s\n%s \t %s\n", q6.ques,q6.opt1,q6.opt2,q6.opt3,q6.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[5]); getchar();
    if(a[5]=='b'||a[5]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q7={"\n7.Fastest shorthand writer was","a. Dr. G. D. Bist","b. J.R.D. Tata","c. J.M. Tagore","d. Khudada Khan"};
    printf("%s\n%s \t %s\n%s \t %s\n", q7.ques,q7.opt1,q7.opt2,q7.opt3,q7.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[6]); getchar();
    if(a[6]=='a'||a[6]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score); 

    question q8={"\n8. First human heart transplant operation conducted by Dr. Christiaan Barnard on Louis Washkansky, was conducted in","a.1967","b.1968","c.1958","d.1922"};
    printf("%s\n%s \t %s\n%s \t %s\n", q8.ques,q8.opt1,q8.opt2,q8.opt3,q8.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[7]); getchar();
    if(a[7]=='a'||a[7]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  

    question q9={"\n9.Logarithm tables were invented by","a.John Napier","b.John Doe","c.John Harrison","d.John Douglas"};
    printf("%s\n%s \t %s\n%s \t %s\n", q9.ques,q9.opt1,q9.opt2,q9.opt3,q9.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[8]); getchar();
    if(a[8]=='a'||a[8]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  


    question q10={"\n10.Golf player Vijay Singh belongs to which country?","a.USA","b.Fiji","c.India","d. UK "};
    printf("%s\n%s \t %s\n%s \t %s\n", q10.ques,q10.opt1,q10.opt2,q10.opt3,q10.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[9]); getchar();
    if(a[9]=='b'||a[9]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);    
  }

    void Sports(){
    char a[30] ={'b', 'c', 'b', 'c', 'b', 'a', 'a', 'a', 'b'};
    char s[5];      //final
    int score=0;
    
    question q1={"1.Durand Cup is associated with?","a. Swimming","b. Football","c.Table Tennis","d.Hockey"};
    printf("%s\n%s \t %s\n%s \t %s\n", q1.ques,q1.opt1,q1.opt2,q1.opt3,q1.opt4);
    printf("Enter your choice: ");
    scanf("%s", s); getchar();
    
    if(s[0] == a[0]){
        printf("correct answer!!");
        printf("\nyour score is:%d", ++score);
    }

    else {printf("wrong answer!");
    printf("\nyour score is:%d", score);
    }

    question q2={"\n2.Who among the following was the First Indian Cricketer to bag 500 wickets in Test matches?","a.Kapil Dev","b.Srinath","c. Anil Kumble","d.Harbhajan Singh"};
    printf("%s\n%s \t %s\n%s \t %s\n", q2.ques,q2.opt1,q2.opt2,q2.opt3,q2.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[1]); getchar();
    if(a[1]=='c'||a[1]=='C'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q3={"\n3.When was the name of National Boxing Association changed to World Boxing Association?","a.1958","b.1962","c. 1969","d.1970"};
    printf("%s\n%s \t %s\n%s \t %s\n", q3.ques,q3.opt1,q3.opt2,q3.opt3,q3.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[2]); getchar();
    if(a[2]=='b'||a[2]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q4={"\n4.Who is regarded as the most successful Indian test captain of Indian Cricket team?","a.Virat Kohli ","b.Sunil Gavaskar","c. MS Dhoni","d.Sachin Tendulkar"};
    printf("%s\n%s \t %s\n%s \t %s\n", q4.ques,q4.opt1,q4.opt2,q4.opt3,q4.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[3]); getchar();
    if(a[3]=='c'||a[3]=='C'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q5={"\n5.World Anti-Doping Agency Who is the President of World Anti-Doping Agency?","a.Lamine Diack ","b. Craig Reedie","c.Patrick Baumann","d.Marcos Diaz"};
    printf("%s\n%s \t %s\n%s \t %s\n", q5.ques,q5.opt1,q5.opt2,q5.opt3,q5.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[4]); getchar();
    if(a[4]=='b'||a[4]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q6={"\n6.Which of the following nation was not a founding member of the Badminton World Federation?","a. Germany","b.France","c.England","d.Netherlands"};
    printf("%s\n%s \t %s\n%s \t %s\n", q6.ques,q6.opt1,q6.opt2,q6.opt3,q6.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[5]); getchar();
    if(a[5]=='a'||a[5]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q7={"\n7.Who was the youngest winner of a singles title at the Championships?","a.Ratchanok Inthanon","b.Jang Hye-ock","c.Lene Koppen","d.Ge Fei"};
    printf("%s\n%s \t %s\n%s \t %s\n", q7.ques,q7.opt1,q7.opt2,q7.opt3,q7.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[6]); getchar();
    if(a[6]=='a'||a[6]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score); 

    question q8={"\n8.Which is the governing body Chess in the world?","a.World Chess Federation","b.World Chess Association","c.World Chess Organisation","d.Association of World Chess Champions"};
    printf("%s\n%s \t %s\n%s \t %s\n", q8.ques,q8.opt1,q8.opt2,q8.opt3,q8.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[7]); getchar();
    if(a[7]=='a'||a[7]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  

    question q9={"\n9.Since when has UCI supported the elite level women championships?","a.1936","b.1959","c.1928","d.1948"};
    printf("%s\n%s \t %s\n%s \t %s\n", q9.ques,q9.opt1,q9.opt2,q9.opt3,q9.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[8]); getchar();
    if(a[8]=='b'||a[8]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  


    question q10={"\n10.Which team bagged the Fair Play Award in 2018 FIFA World Cup?","a.France","b.Croatia","c.Spain","d.Italy"};
    printf("%s\n%s \t %s\n%s \t %s\n", q10.ques,q10.opt1,q10.opt2,q10.opt3,q10.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[9]); getchar();
    if(a[9]=='c'||a[9]=='C'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);    
  }

  void Tech(){
  char a[30] = {'b', 'b', 'b', 'b', 'a', 'a', 'a', 'c', 'a', 'a'};
  char s[5];      //final
    int score=0;
    
    question q1={"1. '.MOV' extension refers usually to what kind of file? ","a.Image file","b. Animation/movie file","c. Audio file", "d.MS Office document"};
    printf("%s\n%s \t %s\n%s \t %s\n", q1.ques,q1.opt1,q1.opt2,q1.opt3,q1.opt4);
    printf("Enter your choice: ");
    scanf("%s", s); getchar();
    
    if(s[0] == a[0]){
        printf("correct answer!!");
        printf("\nyour score is:%d", ++score);
    }

    else {printf("wrong answer!");
    printf("\nyour score is:%d", score);
    }

    question q2={"\n2. 'OS' computer abbreviation usually means ? ","a. Order of Significance","b. Operating System","c. Open Software","d. Optical Sensor"};
    printf("%s\n%s \t %s\n%s \t %s\n", q2.ques,q2.opt1,q2.opt2,q2.opt3,q2.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[1]); getchar();
    if(a[1]=='b'||a[1]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q3={"\n3. What is part of a database that holds only one type of information? ","a. Report","b. Field","c. Record","d. File"};
    printf("%s\n%s \t %s\n%s \t %s\n", q3.ques,q3.opt1,q3.opt2,q3.opt3,q3.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[2]); getchar();
    if(a[2]=='b'||a[2]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q4={"\n4. How many bits is a byte?","a. 4 ","b. 8","c. 10","d. 15"};
    printf("%s\n%s \t %s\n%s \t %s\n", q4.ques,q4.opt1,q4.opt2,q4.opt3,q4.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[3]); getchar();
    if(a[3]=='b'||a[3]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q5={"\n5. Changing computer language of 1's and 0's to characters that a person can understand is","a. Decode ","b. Highlight","c. Clip art","d. Execute"};
    printf("%s\n%s \t %s\n%s \t %s\n", q5.ques,q5.opt1,q5.opt2,q5.opt3,q5.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[4]); getchar();
    if(a[4]=='a'||a[4]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q6={"\n6. http://www.indiabix.com - is an example of what?","a. A URL","b. An access code","c. A directory","d. A server"};
    printf("%s\n%s \t %s\n%s \t %s\n", q6.ques,q6.opt1,q6.opt2,q6.opt3,q6.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[5]); getchar();
    if(a[5]=='a'||a[5]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q7={"\n7.The desktop of a computer refers to:","a.The visible screen","b.The area around the monitor","c.The top of the mouse pad","d.The inside of a folder"};
    printf("%s\n%s \t %s\n%s \t %s\n", q7.ques,q7.opt1,q7.opt2,q7.opt3,q7.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[6]); getchar();
    if(a[6]=='a'||a[6]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score); 

    question q8={"\n8.Which of these is a search engine?","a.ARPANET","b. Archie","c.Google","d.FTP"};
    printf("%s\n%s \t %s\n%s \t %s\n", q8.ques,q8.opt1,q8.opt2,q8.opt3,q8.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[7]); getchar();
    if(a[7]=='c'||a[7]=='C'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  

    question q9={"\n9. The letters, 'DOS' stand for...","a. Disk Operating System","b. Data Out System","c.Disk Out System","d.Data Operating System"};
    printf("%s\n%s \t %s\n%s \t %s\n", q9.ques,q9.opt1,q9.opt2,q9.opt3,q9.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[8]); getchar();
    if(a[8]=='a'||a[8]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  


    question q10={"\n10. ROM stands for_________","a.Random Access Memory","b.Read Access Memory","c.Read A Manual","d.Real Absolute Memory"};
    printf("%s\n%s \t %s\n%s \t %s\n", q10.ques,q10.opt1,q10.opt2,q10.opt3,q10.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[9]); getchar();
    if(a[9]=='a'||a[9]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);    
  }

  void start(){
    printf("Enter your Name: ");
    char name[50];
    gets(name);
    printf("Welcome %s to Quiz Game", name);
    printf("\n");
    // Giving player a choice of their topic 
    printf("Below are some of the topics for Quiz Game, You can choose your topic by pressing the respective number as given below: \n");
    printf("1. Science \n");
    printf("2. Maths \n");
    printf("3. G.K \n");
    printf("4. Sports \n");
    printf("5. Technology \n");
  }

int main()
{

    int temp=-1;
   
    printf("******************************************************************************************************\n");
    printf("*****************************************WELCOME TO THE QUIZ**********************************************\n");
    // Instruction for player to understand game.
    printf("Here are the instructions to play this Quiz Game: \n");
    printf("1. Game will consist of 10 questions in total and will be in MCQ type.\n");
    printf("2. You can choose your topic of interest and play Quiz Game.\n");
    printf("3. For each correct answer you will get +1 and for every incorrect answer you will get 0 points \n");
    printf("All the Best ! and Let's start the game \n");
    printf("Enter your Name: ");

    char name[50];  //creating a character array to store the name of the player
    gets(name);
    printf("\nWelcome %s to Quiz Game\n", name);
    printf("\n");
    // Giving player a choice of their topic 
    while(temp<0){
    printf("Below are some of the topics for Quiz Game, You can choose your topic by pressing the respective number as given below: \n");
    printf("1. Science \n");
    printf("2. Maths \n");
    printf("3. G.K \n");
    printf("4. Sports \n");
    printf("5. Technology \n");
    printf("6. Quit game\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
     Science();  //if user selects 1, science() function will be called
     break;
    
    case 2:
     Maths();
     break;
    
    case 3:
     GK();
     break;
    
    case 4:
     Sports();
     break;
    
    case 5:
     Tech();
     break;
    
    case 6:
    goto end;  //to terminate the switch case and while loop

    default:
        printf("\nEnter valid choice !");
        break;
    }
    printf("\n");
    }

end:

 return 0;
}