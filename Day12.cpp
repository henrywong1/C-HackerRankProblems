class Student :  public Person{
	private:
		vector<int> testScores;
        int scores = 0;
    int size = 0;
	public:
        /*
        *   Class Constructor
        *
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string a, string b, int c, vector<int> arr) :Person(a,b,c){
            testScores = arr;
            size = arr.size();
        }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            for (int i = 0; i < size; i++){
                scores += testScores.at(i);
            }
            char correct = ' ';
            int avg = scores/size;
            if (avg >= 90 && avg <= 100){
                correct = 'O';
            }else if (avg >= 80 && avg < 90){
                correct = 'E';
            }else if (avg >= 70 && avg < 80){
                correct = 'A';
            }else if (avg >= 55 && avg < 70){
                correct = 'P';
            }else if (avg >= 40 && avg < 55){
                correct = 'D';
            }else if (avg < 40){
                correct = 'T';
            }
            return correct;
        }

};
