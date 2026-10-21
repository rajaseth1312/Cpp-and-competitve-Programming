import pandas as pd

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
    return employees.assign(salary = 2 * employees['salary'])

# hum in my syllabus its MYsql not pandas 
# still this feels so much easier than that

# gotta love that time taken man
