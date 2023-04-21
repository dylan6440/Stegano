#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "dechiffrage.h"
#include <QMainWindow>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    dechiffrage* m_Dechiffrage;
    ~MainWindow();

public slots:
    void exploreFile(void);
    void textEdit(void);
    void GetPassWord(void);
    void exploreDirectory(void);

private:
    Ui::MainWindow *ui;
    QString s_FilePath;
     QString s_DirectoryPath;
    QString s_PassWord;
     QString s_Message;
};
#endif // MAINWINDOW_H
