

// FORM SUBMISSION BUTTON (.h)void on_submitReport_pushButton_clicked();

/* Calling Methods */
void ReportSubmissionWindow::on_submitReport_pushButton_clicked()
{

    QString enteredSubject = ui->subject_lineEdit->text();
    QString enteredFeedback = ui->feedback_textEdit->toPlainText();
    QString enteredAuthorReachableEmailAddress = ui->authorReachableEmailAddress_lineEdit->text();

    QString reportSubmissionStatus = accountLogic->submitReport(enteredSubject, enteredFeedback, enteredAuthorReachableEmailAddress);

    if(reportSubmissionStatus == "Report Submission Successful"){
        QMessageBox::information(this, "REPORT SUBMISSION SUCCESSFUL", "Report was successull submitted.");
    }
    else if(reportSubmissionStatus == "Execution Unsuccessful: Database Connection Error"){
        QMessageBox::critical(this, "REPORT SUBMISSION ERROR", "Database Connection has lost, please submit a report.");
    }
    else if(reportSubmissionStatus == "Execution Unsuccessful: SQL query execution error"){
        QMessageBox::critical(this, "REPORT SUBMISSION ERROR", "SQL query execution was unsuccessful, please submit a report including your email address.");
    }
    else if(reportSubmissionStatus == "default"){
        QMessageBox::critical(this, "REPORT SUBMISSION ERROR", "Please try again later");
    }

}


//FUNCTION FROM ACCOUNTLOGIC (.h)QString submitReport(QString enteredReportSubject, QString enteredReportFeedback,QString enteredAuthorReachableEmailAddress);

/* Function Methods */
QString AccountLogic::submitReport(QString enteredReportSubject, QString enteredReportFeedback, QString enteredAuthorReachableEmailAddress){

    bool databaseConnected = trms_dbConnection->openDatebaseConnection();
    if(databaseConnected == true){

        /* Inserting record into the 'Report' relation (table)  */
        // Declaring new QSqlQuery object by passing the database name
        QSqlQuery reportQuery(QSqlDatabase::database(trms_dbConnection->getDatabaseName()));

        // Preparing sql query for execution
        reportQuery.prepare(QString("INSERT INTO Report(ReportSubject, Feedback, SubmittedDateTime, AuthorReachableEmailAddress) VALUES "
                                              "(:enteredSubject, :enteredFeedback, :submitedDateTime, :enteredAuthorReachableEmailAddress);"));

        reportQuery.bindValue(":enteredSubject", enteredReportSubject);
        reportQuery.bindValue(":enteredFeedback", enteredReportFeedback);
        reportQuery.bindValue(":submitedDateTime", auth->retrieveCurrentDateTime());
        reportQuery.bindValue(":enteredAuthorReachableEmailAddress", enteredAuthorReachableEmailAddress);

        // Executing sql query and checking the status
        if(!reportQuery.exec()){
            qWarning() << "SQL query execution error";
            qWarning() << reportQuery.lastError();
            trms_dbConnection->closeDatebaseConnection();
            return "Execution Unsuccessful: SQL query execution error";
        }
        else{
            trms_dbConnection->closeDatebaseConnection();
            return "Report Submission Successful";
        }

    }
    else if(databaseConnected == false){
        trms_dbConnection->closeDatebaseConnection();
        return "Execution Unsuccessful: Database Connection Error";
    }
    trms_dbConnection->closeDatebaseConnection();
    return "default";

}