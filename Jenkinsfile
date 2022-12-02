  pipeline{
  agent any
    stages{
      stage('build'){
          powershell "xmake -y"
      }
       stage('run'){
          powershell "xmake run"
     }
    }
  }
