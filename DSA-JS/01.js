// create an array with 5 student names , after create a function which takes 2 parameters (all students & studentname ) iterate over all student and find that specific user 'studentName'

const students = ["Piyush", "Mohit", "Anurag", "Monty", "Birju"];

//method no.1 using loop
function findStudent(AllStudents, studentName) {
    const user = AllStudents.some((student) => {
        if (student.toLowerCase() === studentName.toLowerCase()) {
            console.log(
                `${studentName} found at index ${
                    AllStudents.indexOf(student) + 1
                }`
            );
            return true;
        }
    });
    if (!user) {
        console.log("student not found");
    }
}

//method 2 without using loop
function findIndexOfStudent(Student, studentName) {
    if (Student.includes(studentName)) {
        console.log(Student.indexOf(studentName)+1);
    } else {
        console.log("student not found ");
    }
}

// findStudent(students, "birju");
findIndexOfStudent(students , "Monty")
